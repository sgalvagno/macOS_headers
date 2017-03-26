//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@class NSImage, NSTrackingArea;
@protocol NSRolloverButtonDelegate;

__attribute__((visibility("hidden")))
@interface NSRolloverButton : NSButton
{
    NSTrackingArea *_trackingArea;
    BOOL _mouseOver;
    BOOL _trackingMouseDown;
    BOOL _trackingRectUpdatePending;
    BOOL _usesRolloverAppearanceInInactiveWindow;
    BOOL _usesRolloverAppearanceOnMouseDown;
    BOOL _usesRolloverAppearanceWhenFirstResponder;
    BOOL _redrawOnMouseEnteredAndExited;
    NSImage *_rolloverImage;
    id <NSRolloverButtonDelegate> _delegate;
    NSImage *_focusRingMask;
}

@property(retain, nonatomic) NSImage *focusRingMask; // @synthesize focusRingMask=_focusRingMask;
@property(nonatomic) __weak id <NSRolloverButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL redrawOnMouseEnteredAndExited; // @synthesize redrawOnMouseEnteredAndExited=_redrawOnMouseEnteredAndExited;
@property(nonatomic) BOOL usesRolloverAppearanceWhenFirstResponder; // @synthesize usesRolloverAppearanceWhenFirstResponder=_usesRolloverAppearanceWhenFirstResponder;
@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
@property(nonatomic) BOOL usesRolloverAppearanceOnMouseDown; // @synthesize usesRolloverAppearanceOnMouseDown=_usesRolloverAppearanceOnMouseDown;
@property(nonatomic) BOOL usesRolloverAppearanceInInactiveWindow; // @synthesize usesRolloverAppearanceInInactiveWindow=_usesRolloverAppearanceInInactiveWindow;
- (void).cxx_destruct;
- (BOOL)accessibilityPerformPress;
- (void)drawFocusRingMask;
- (void)drawRect:(struct CGRect)arg1;
- (void)awakeFromNib;
- (void)_setAttributes;
- (void)didResignActiveFirstResponder;
- (void)didBecomeActiveFirstResponder;
- (void)rightMouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateMouseIsOver;
- (void)updateMouseIsOver:(int)arg1;
- (BOOL)shouldUseRolloverAppearance;
- (void)mouseDown:(id)arg1;
- (void)updateTrackingAreas;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_finishInitialization;
- (BOOL)_shouldDoLayerPerformanceUpdates;

@end

