//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAKitView.h"

@class CLgFocusRingView;

@interface CLgDocwContentView : MAKitView
{
    CLgFocusRingView *m_focusRingView;
}

- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (id)backgroundColor;
- (void)setFocusRingRect:(struct CGRect)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isOpaque;
- (BOOL)fullscreenmode;
- (void)dealloc;
- (void)setFrameSize:(struct CGSize)arg1;
- (id)focusRingView;
- (id)addFocusRingView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityChildrenAttribute;

@end

