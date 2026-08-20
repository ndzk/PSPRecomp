#include "defjam_present_mac.hpp"

#import <Cocoa/Cocoa.h>
#import <QuartzCore/QuartzCore.h>

#include <vector>

namespace {

NSWindow *g_window = nil;
CALayer *g_layer = nil;
bool g_close_requested = false;
bool g_down[static_cast<std::size_t>(defjam::MacKey::Count)] = {};

// Arrows and the editing keys arrive as unicode values in the private use
// area, which AppKit names; letters arrive as themselves. Reading them this way
// rather than by virtual key code keeps the table short and needs no Carbon.
bool key_for(unichar character, defjam::MacKey &key) {
    using defjam::MacKey;
    switch (character) {
    case NSUpArrowFunctionKey:    key = MacKey::Up;     return true;
    case NSDownArrowFunctionKey:  key = MacKey::Down;   return true;
    case NSLeftArrowFunctionKey:  key = MacKey::Left;   return true;
    case NSRightArrowFunctionKey: key = MacKey::Right;  return true;
    case '\r':                    key = MacKey::Return; return true;
    case 0x7F:                    key = MacKey::Back;   return true;
    case 'a': case 'A':           key = MacKey::A;      return true;
    case 'd': case 'D':           key = MacKey::D;      return true;
    case 'e': case 'E':           key = MacKey::E;      return true;
    case 'i': case 'I':           key = MacKey::I;      return true;
    case 'j': case 'J':           key = MacKey::J;      return true;
    case 'k': case 'K':           key = MacKey::K;      return true;
    case 'l': case 'L':           key = MacKey::L;      return true;
    case 'q': case 'Q':           key = MacKey::Q;      return true;
    case 's': case 'S':           key = MacKey::S;      return true;
    case 'w': case 'W':           key = MacKey::W;      return true;
    default:                      return false;
    }
}

void note_key_event(NSEvent *event, bool pressed) {
    NSString *characters = [event charactersIgnoringModifiers];
    if (characters == nil || [characters length] == 0) return;
    const unichar character = [characters characterAtIndex:0];
    if (character == 27) {   // Escape, as on the Windows side.
        if (pressed) g_close_requested = true;
        return;
    }
    defjam::MacKey key;
    if (key_for(character, key)) g_down[static_cast<std::size_t>(key)] = pressed;
}

}   // namespace

// Closing the window asks the run to stop rather than tearing the guest down
// underneath itself: the flag is read by the loop that owns both.
@interface DefJamWindowDelegate : NSObject <NSWindowDelegate>
@end

@implementation DefJamWindowDelegate
- (BOOL)windowShouldClose:(NSWindow *)sender {
    (void)sender;
    g_close_requested = true;
    return NO;
}
@end

static DefJamWindowDelegate *g_delegate = nil;

namespace defjam {

bool mac_open_window(std::uint32_t width, std::uint32_t height, std::string &error) noexcept {
    @autoreleasepool {
        if (g_window != nil) return true;
        if (![NSThread isMainThread]) {
            error = "the window must be opened from the main thread";
            return false;
        }

        [NSApplication sharedApplication];
        // Regular, not Accessory: without it a binary launched from a terminal
        // gets no Dock tile, no menu bar and no way to be brought to the front.
        [NSApp setActivationPolicy:NSApplicationActivationPolicyRegular];

        const NSRect frame = NSMakeRect(0.0, 0.0, static_cast<CGFloat>(width),
                                        static_cast<CGFloat>(height));
        const NSWindowStyleMask style = NSWindowStyleMaskTitled | NSWindowStyleMaskClosable |
                                        NSWindowStyleMaskMiniaturizable;
        g_window = [[NSWindow alloc] initWithContentRect:frame
                                               styleMask:style
                                                 backing:NSBackingStoreBuffered
                                                   defer:NO];
        if (g_window == nil) {
            error = "could not create the window";
            return false;
        }

        [g_window setTitle:@"Def Jam: Fight for NY - The Takeover"];
        [g_window center];
        [g_window setReleasedWhenClosed:NO];

        g_delegate = [[DefJamWindowDelegate alloc] init];
        [g_window setDelegate:g_delegate];

        NSView *view = [g_window contentView];
        [view setWantsLayer:YES];
        g_layer = [view layer];
        // The guest draws 480x272. Smoothing that up to a window is worse than
        // showing the pixels it actually produced.
        g_layer.magnificationFilter = kCAFilterNearest;
        g_layer.contentsGravity = kCAGravityResizeAspect;
        g_layer.backgroundColor = CGColorGetConstantColor(kCGColorBlack);

        [g_window makeKeyAndOrderFront:nil];
        [NSApp activateIgnoringOtherApps:YES];
        [NSApp finishLaunching];
        return true;
    }
}

void mac_pump_events() noexcept {
    if (g_window == nil) return;
    @autoreleasepool {
        // distantPast rather than a wait: the caller is also driving the guest,
        // so this must return whether or not anything happened.
        for (;;) {
            NSEvent *event = [NSApp nextEventMatchingMask:NSEventMaskAny
                                                untilDate:[NSDate distantPast]
                                                   inMode:NSDefaultRunLoopMode
                                                  dequeue:YES];
            if (event == nil) break;
            const NSEventType type = [event type];
            if (type == NSEventTypeKeyDown) note_key_event(event, true);
            else if (type == NSEventTypeKeyUp) note_key_event(event, false);
            // Key events still go through, so the window keeps behaving like a
            // window; the beep for an unhandled key is the only thing lost by
            // swallowing key-down, and that is worth losing.
            if (type != NSEventTypeKeyDown) [NSApp sendEvent:event];
        }
    }
}

bool mac_present_rgba(std::span<const std::byte> rgba, std::uint32_t width,
                      std::uint32_t height) noexcept {
    if (g_layer == nil || width == 0u || height == 0u) return false;
    const std::size_t expected = static_cast<std::size_t>(width) * height * 4u;
    if (rgba.size() < expected) return false;

    @autoreleasepool {
        CGColorSpaceRef space = CGColorSpaceCreateDeviceRGB();
        if (space == nullptr) return false;
        CFDataRef data = CFDataCreate(kCFAllocatorDefault,
                                      reinterpret_cast<const UInt8 *>(rgba.data()),
                                      static_cast<CFIndex>(expected));
        if (data == nullptr) {
            CGColorSpaceRelease(space);
            return false;
        }
        CGDataProviderRef provider = CGDataProviderCreateWithCFData(data);
        // The rows arrive as R,G,B,A in memory, which is what "32 big, alpha
        // last" names. The guest's alpha is not a window transparency, so it is
        // skipped rather than blended.
        // The two halves live in different enumerations, and ORing them directly
        // is deprecated, so the combination is made explicitly.
        const CGBitmapInfo bitmap_info = static_cast<CGBitmapInfo>(
            static_cast<std::uint32_t>(kCGImageAlphaNoneSkipLast) |
            static_cast<std::uint32_t>(kCGBitmapByteOrder32Big));
        CGImageRef image = CGImageCreate(width, height, 8, 32, static_cast<std::size_t>(width) * 4u,
                                         space,
                                         bitmap_info,
                                         provider, nullptr, false, kCGRenderingIntentDefault);
        CGDataProviderRelease(provider);
        CFRelease(data);
        CGColorSpaceRelease(space);
        if (image == nullptr) return false;

        // Assigning through the property retains it, so the local reference goes.
        [CATransaction begin];
        [CATransaction setDisableActions:YES];
        g_layer.contents = (id)image;
        [CATransaction commit];
        CGImageRelease(image);
        return true;
    }
}

void mac_set_title(const std::string &text) noexcept {
    if (g_window == nil) return;
    @autoreleasepool {
        NSString *title = [NSString stringWithUTF8String:text.c_str()];
        if (title != nil) [g_window setTitle:title];
    }
}

bool mac_key_down(MacKey key) noexcept {
    if (key >= MacKey::Count) return false;
    if (!mac_window_focused()) return false;
    return g_down[static_cast<std::size_t>(key)];
}

bool mac_window_focused() noexcept {
    if (g_window == nil) return false;
    return [g_window isKeyWindow] == YES;
}

bool mac_close_requested() noexcept { return g_close_requested; }

bool mac_window_open() noexcept { return g_window != nil; }

void mac_close_window() noexcept {
    if (g_window == nil) return;
    @autoreleasepool {
        [g_window setDelegate:nil];
        [g_window orderOut:nil];
        [g_window close];
        g_window = nil;
        g_layer = nil;
        g_delegate = nil;
    }
}

}   // namespace defjam
