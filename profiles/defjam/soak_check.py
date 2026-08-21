"""Endurance check for the Def Jam profile.

Runs the scripted story input far past where the golden checkpoints stop -
default one hour of guest time - while sampling the host process's memory, and
reduces the run to a verdict:

    python soak_check.py            one hour of guest time
    python soak_check.py --minutes 30

PASS requires all of:
  - the run ends on the guest-time budget, not on a fault or a stall;
  - host memory's final-third average exceeds the first-third average by less
    than the leak threshold (movies legitimately raise the peak; a leak keeps
    climbing);
  - the report carries no unusual lines (unsupported, truncated, failed - the
    title's own "Load Failed" save dialog excepted);
  - no GE command outside the profile's classification was written with data
    (the report's unknown_command_report section is empty).

The input schedule is imported from golden_run so the two tools cannot drift.
"""
import argparse
import os
import re
import statistics
import subprocess
import sys
import tempfile
import threading
import time

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from golden_run import EXE, input_schedule  # noqa: E402

LEAK_THRESHOLD_KB = 80 * 1024


def sample_memory(samples, stop_flag):
    while not stop_flag.is_set():
        try:
            out = subprocess.run(
                ["tasklist", "/FI", "IMAGENAME eq DefJamNative.exe", "/FO", "CSV", "/NH"],
                capture_output=True, text=True, timeout=15).stdout
            digits = re.sub(r"[^0-9]", "", out.replace('"', '').split(',')[-1])
            if digits:
                samples.append(int(digits))
        except Exception:
            pass
        stop_flag.wait(20.0)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--minutes", type=int, default=60)
    args = parser.parse_args()
    stop_us = args.minutes * 60_000_000

    if not os.path.exists(EXE):
        print(f"FAIL: {EXE} does not exist - build the profile first")
        return 2

    env = dict(os.environ)
    env.update({
        "PSPRECOMP_DEFJAM_GPU": "1",
        "PSPRECOMP_DEFJAM_MODULATE": "1",
        "PSPRECOMP_DEFJAM_INPUT": input_schedule(stop_us),
        "PSPRECOMP_DEFJAM_STOP_AT_GUEST_US": str(stop_us),
        "PSPRECOMP_DEFJAM_STALL_SECONDS": "1800",
        "PSPRECOMP_MAX_DISPATCHES": "40000000000000",
    })
    workdir = tempfile.mkdtemp(prefix="defjam_soak_")
    samples = []
    stop_flag = threading.Event()
    sampler = threading.Thread(target=sample_memory, args=(samples, stop_flag), daemon=True)

    print(f"soak: {args.minutes} minutes of guest time ...", flush=True)
    started = time.time()
    sampler.start()
    result = subprocess.run([EXE], cwd=workdir, env=env, capture_output=True, text=True,
                            timeout=args.minutes * 300)
    stop_flag.set()
    sampler.join(timeout=5)
    wall = time.time() - started

    text = result.stdout
    failures = []

    stopped = [line for line in text.splitlines() if "Stopped:" in line]
    if not any("guest time budget" in line for line in stopped):
        failures.append("the run did not end on the budget: " +
                        (stopped[0].strip() if stopped else "no stop line at all"))
    guest = re.search(r"guest time:\s+(\d+) us", text)
    if guest and wall > 0:
        print(f"  pace: {int(guest.group(1)) / 1_000_000 / wall:.2f}x real time")

    if len(samples) >= 6:
        third = len(samples) // 3
        first = statistics.mean(samples[:third])
        last = statistics.mean(samples[-third:])
        print(f"  memory: {samples[0]//1024} -> {samples[-1]//1024} MB, "
              f"peak {max(samples)//1024} MB")
        if last - first > LEAK_THRESHOLD_KB:
            failures.append(f"memory climbed {int(last - first)//1024} MB between the first and "
                            f"last third - leak territory")

    unusual = [line.strip() for line in text.splitlines()
               if re.search(r"unsupported|truncated|failed", line, re.I)
               and "0 failed" not in line and "Load Failed" not in line]
    for line in unusual[:10]:
        failures.append("unusual report line: " + line)

    if "GE commands this profile does not know" in text:
        start = text.index("GE commands this profile does not know")
        failures.append("unknown GE commands were written:\n" +
                        text[start:start + 400])

    print("soak:", "PASS" if not failures else "FAIL")
    for failure in failures:
        print("  - " + failure)
    return 0 if not failures else 1


if __name__ == "__main__":
    sys.exit(main())
