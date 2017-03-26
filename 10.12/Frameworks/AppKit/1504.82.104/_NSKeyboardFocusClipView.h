//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSClipView.h>

@class NSView;

@interface _NSKeyboardFocusClipView : NSClipView
{
    NSView *_representedView;
    struct CGRect _adjustment;
    struct CGRect _lastFocusRingRect;
    BOOL _drawFocus;
    BOOL _bezelStyle;
}

- (unsigned long long)_backgroundFillOperation;
- (BOOL)canBecomeKeyView;
- (struct CGRect)_getFocusRingFrame;
- (void)_clearFocusForView;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)_adjustFocusRingLocation:(struct CGPoint)arg1;
- (void)_adjustFocusRingSize:(struct CGSize)arg1;
- (void)_setFocusForCell:(id)arg1 forView:(id)arg2 withFrame:(struct CGRect)arg3 withFocusRingFrame:(struct CGRect)arg4 withInset:(double)arg5;
- (void)_drawKeyboardFocusRingWithFrame:(struct CGRect)arg1 forCell:(id)arg2;
- (void)_drawKeyboardFocusRingWithFrame:(struct CGRect)arg1;
- (void)_setKeyboardFocusRingNeedsDisplay;
- (void)_setKeyboardFocusRingNeedsDisplayDuringLiveResize;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (BOOL)_drawRectIfEmpty;
- (void)removeFromSuperview;
- (void)dealloc;

@end

