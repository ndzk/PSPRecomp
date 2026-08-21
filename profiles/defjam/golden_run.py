"""Golden-run regression harness for the Def Jam profile.

Plays the scripted story path to a fight, dumps a frame every N guest seconds,
reduces each frame to numbers - a 17-band median-luminance profile, the mean,
and a sampled distinct-colour count - and compares those numbers against the
committed golden_metrics.json. Frames themselves are game captures and are
written to a temporary directory and deleted; only the numbers ever live in
the repository.

    python golden_run.py --capture     rewrite the goldens from this build
    python golden_run.py               compare against the goldens (default)

Tolerances are generous on purpose: the run is deterministic, but a renderer
fix is allowed to move a band by a few luminance steps without failing the
world. A band moving by more than TOLERANCE_BAND, or the mean by more than
TOLERANCE_MEAN, is a regression or an intended change - either way, a human
decides, with --capture as the sign-off.
"""
import json
import os
import shutil
import struct
import subprocess
import sys
import tempfile

HERE = os.path.dirname(os.path.abspath(__file__))
EXE = os.path.join(HERE, "..", "..", "out", "defjam", "bin", "Release", "DefJamNative.exe")
GOLDEN = os.path.join(HERE, "golden_metrics.json")
GOLDEN_LONG = os.path.join(HERE, "golden_metrics_long.json")
STOP_US = 300_000_000
FRAME_EVERY_US = 30_000_000
# --long stretches the run through the post-fight movies and later venues the
# soak reached; separate goldens, because the two runs are different journeys.
LONG_STOP_US = 1_800_000_000
LONG_FRAME_EVERY_US = 120_000_000
TOLERANCE_BAND = 10
TOLERANCE_MEAN = 6


def input_schedule(stop_us=None):
    parts = ["12000:0x4000,12300:0,16000:0x4000,16300:0,34000:0x4000,34300:0",
             "40000:0x4000,40300:0,72000:0x8,72300:0,78000:0x8,78300:0",
             "84000:0x4000,84300:0,90000:0x4000,90300:0,118000:0x4000,118300:0",
             "130000:0x4000,130400:0"]
    t = 146_000
    parts.append(f"{t}:0x4000,{t+400}:0"); t += 8_000
    for _ in range(4):
        parts.append(f"{t}:0x40,{t+50}:0"); t += 2_500
    for _ in range(2):
        parts.append(f"{t}:0x20,{t+50}:0"); t += 2_500
    parts.append(f"{t}:0x4000,{t+400}:0"); t += 14_000
    limit = (stop_us or STOP_US) // 1000
    while t < limit:
        parts.append(f"{t}:0x8,{t+400}:0"); t += 2_500
        parts.append(f"{t}:0x40,{t+50}:0"); t += 1_200
        parts.append(f"{t}:0x4000,{t+400}:0"); t += 2_500
        parts.append(f"{t}:0x4000,{t+400}:0"); t += 2_500
    return ",".join(parts)


def frame_metrics(path):
    with open(path, "rb") as handle:
        data = handle.read()
    offset = struct.unpack("<I", data[10:14])[0]
    width = struct.unpack("<i", data[18:22])[0]
    raw_height = struct.unpack("<i", data[22:26])[0]
    height = abs(raw_height)
    top_down = raw_height < 0
    pixel_bytes = struct.unpack("<H", data[28:30])[0] // 8
    stride = (width * pixel_bytes + 3) // 4 * 4
    bands = []
    total = 0
    count = 0
    colours = set()
    band_rows = max(1, height // 17)
    for band in range(17):
        values = []
        for y in range(band * band_rows, min((band + 1) * band_rows, height), 3):
            row = y if top_down else height - 1 - y
            base = offset + row * stride
            for x in range(20, width - 20, 4):
                i = base + x * pixel_bytes
                b, g, r = data[i], data[i + 1], data[i + 2]
                values.append((r * 299 + g * 587 + b * 114) // 1000)
                colours.add((r, g, b))
        values.sort()
        median = values[len(values) // 2] if values else 0
        bands.append(median)
        total += sum(values)
        count += len(values)
    return {"bands": bands, "mean": total // max(1, count), "colours": len(colours)}


def run_and_measure(stop_us=STOP_US, frame_every_us=FRAME_EVERY_US):
    if not os.path.exists(EXE):
        print(f"FAIL: {EXE} does not exist - build the profile first")
        sys.exit(2)
    workdir = tempfile.mkdtemp(prefix="defjam_golden_")
    env = dict(os.environ)
    env.update({
        "PSPRECOMP_DEFJAM_GPU": "1",
        "PSPRECOMP_DEFJAM_MODULATE": "1",
        "PSPRECOMP_DEFJAM_INPUT": input_schedule(stop_us),
        "PSPRECOMP_DEFJAM_STOP_AT_GUEST_US": str(stop_us),
        "PSPRECOMP_DEFJAM_FRAME_EVERY_US": str(frame_every_us),
        "PSPRECOMP_DEFJAM_STALL_SECONDS": "900",
        "PSPRECOMP_MAX_DISPATCHES": "400000000000",
    })
    print(f"running {os.path.basename(EXE)} to guest {stop_us // 1_000_000}s ...", flush=True)
    result = subprocess.run([EXE], cwd=workdir, env=env,
                            capture_output=True, text=True, timeout=7200)
    fault = [line for line in result.stdout.splitlines() if "Guest fault" in line]
    metrics = {}
    for name in sorted(os.listdir(workdir)):
        if name.startswith("frame_") and name.endswith("ms.bmp"):
            stamp = name[len("frame_"):-len("ms.bmp")]
            metrics[stamp] = frame_metrics(os.path.join(workdir, name))
    shutil.rmtree(workdir, ignore_errors=True)   # captures never outlive the metrics
    return metrics, fault


PARITY_STOP_US = 62_000_000
PARITY_MAX_CHANNEL_DELTA = 2


def run_parity():
    """Both backends, same schedule, pixel-exact diff of the same checkpoints.

    Measured contract: the card and the reference rasteriser agree to within
    two luminance steps per channel on every pixel (the residue is bilinear
    rounding). A structural bug - a misplaced edge, a dropped draw - shows up
    as a channel delta in the tens or hundreds and fails this immediately.
    """
    frames = {}
    for gpu in ("1", "0"):
        workdir = tempfile.mkdtemp(prefix="defjam_parity_")
        env = dict(os.environ)
        env.update({
            "PSPRECOMP_DEFJAM_GPU": gpu,
            "PSPRECOMP_DEFJAM_MODULATE": "1",
            "PSPRECOMP_DEFJAM_INPUT": input_schedule(),
            "PSPRECOMP_DEFJAM_STOP_AT_GUEST_US": str(PARITY_STOP_US),
            "PSPRECOMP_DEFJAM_FRAME_EVERY_US": str(FRAME_EVERY_US),
            "PSPRECOMP_DEFJAM_STALL_SECONDS": "900",
            "PSPRECOMP_MAX_DISPATCHES": "400000000000",
        })
        print(f"parity: backend gpu={gpu} to guest {PARITY_STOP_US // 1_000_000}s ...", flush=True)
        subprocess.run([EXE], cwd=workdir, env=env, capture_output=True, text=True, timeout=3600)
        for name in sorted(os.listdir(workdir)):
            if name.startswith("frame_") and name.endswith("ms.bmp"):
                with open(os.path.join(workdir, name), "rb") as handle:
                    frames.setdefault(name, {})[gpu] = handle.read()
        shutil.rmtree(workdir, ignore_errors=True)

    def pixels(data):
        offset = struct.unpack("<I", data[10:14])[0]
        width = struct.unpack("<i", data[18:22])[0]
        raw_height = struct.unpack("<i", data[22:26])[0]
        height = abs(raw_height)
        stride = (width * 3 + 3) // 4 * 4 if struct.unpack("<H", data[28:30])[0] == 24 else width * 4
        return offset, width, height, stride, struct.unpack("<H", data[28:30])[0] // 8

    failures = 0
    for name in sorted(frames):
        pair = frames[name]
        if len(pair) != 2:
            print(f"FAIL {name}: one backend produced no frame")
            failures += 1
            continue
        a, b = pair["1"], pair["0"]
        offset, width, height, stride, pixel_bytes = pixels(a)
        differing = 0
        worst = 0
        for y in range(height):
            base = offset + y * stride
            for x in range(width):
                i = base + x * pixel_bytes
                delta = max(abs(a[i + k] - b[i + k]) for k in range(3))
                if delta:
                    differing += 1
                    worst = max(worst, delta)
        verdict = "ok " if worst <= PARITY_MAX_CHANNEL_DELTA else "FAIL"
        if verdict == "FAIL":
            failures += 1
        print(f"{verdict} {name}  differing {differing}  worst channel delta {worst} "
              f"(contract <= {PARITY_MAX_CHANNEL_DELTA})")
    print("parity:", "PASS" if failures == 0 else f"{failures} frame(s) failed")
    return 0 if failures == 0 else 1


def main():
    if "--parity" in sys.argv:
        return run_parity()
    capture = "--capture" in sys.argv
    if "--long" in sys.argv:
        global GOLDEN, STOP_US, FRAME_EVERY_US
        GOLDEN = GOLDEN_LONG
        STOP_US = LONG_STOP_US
        FRAME_EVERY_US = LONG_FRAME_EVERY_US
    metrics, fault = run_and_measure(STOP_US, FRAME_EVERY_US)
    if fault:
        print("FAIL: the run faulted:")
        for line in fault:
            print("   " + line)
        return 2
    if not metrics:
        print("FAIL: the run produced no frames")
        return 2
    if capture:
        with open(GOLDEN, "w") as handle:
            json.dump(metrics, handle, indent=1, sort_keys=True)
        print(f"captured {len(metrics)} checkpoints into {os.path.basename(GOLDEN)}")
        return 0
    if not os.path.exists(GOLDEN):
        print("FAIL: no goldens; run with --capture first")
        return 2
    with open(GOLDEN) as handle:
        golden = json.load(handle)
    failures = 0
    for stamp in sorted(golden):
        if stamp not in metrics:
            print(f"FAIL {stamp}ms: checkpoint missing from this run")
            failures += 1
            continue
        got, want = metrics[stamp], golden[stamp]
        worst = max(abs(a - b) for a, b in zip(got["bands"], want["bands"]))
        mean_delta = abs(got["mean"] - want["mean"])
        verdict = "ok " if worst <= TOLERANCE_BAND and mean_delta <= TOLERANCE_MEAN else "FAIL"
        if verdict == "FAIL":
            failures += 1
        print(f"{verdict} {stamp}ms  worst band delta {worst}  mean delta {mean_delta}  "
              f"colours {want['colours']} -> {got['colours']}")
    print("result:", "PASS" if failures == 0 else f"{failures} checkpoint(s) failed")
    return 0 if failures == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
