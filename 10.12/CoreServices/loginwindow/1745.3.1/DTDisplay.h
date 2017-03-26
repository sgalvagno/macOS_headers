//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, NSTimer, NSWindow;

@interface DTDisplay : NSObject
{
    unsigned int _display;
    NSWindow *_window;
    CALayer *_baseLayer;
    CALayer *_pictureLayer;
    CALayer *_bootLayer;
    BOOL _skipTransition;
    NSTimer *_skipTransitionFailsafe;
}

@property(retain) NSTimer *skipTransitionFailsafe; // @synthesize skipTransitionFailsafe=_skipTransitionFailsafe;
@property BOOL skipTransition; // @synthesize skipTransition=_skipTransition;
@property(readonly) unsigned int displayID; // @synthesize displayID=_display;
@property(readonly) CALayer *bootLayer; // @synthesize bootLayer=_bootLayer;
@property(readonly) CALayer *pictureLayer; // @synthesize pictureLayer=_pictureLayer;
@property(readonly) CALayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(readonly) NSWindow *window; // @synthesize window=_window;
- (void)dealloc;
- (void)hideWindow;
- (unsigned int)realWindowID;
- (void)setTopLayerImage:(struct CGImage *)arg1;
- (void)showRootMacBuddyToLoginUITransition;
- (void)_transitionInternal;
- (void)transition;
- (void)_failSafe:(id)arg1;
- (void)_stopFailsafeTimer;
- (void)_startFailsafeTimer;
- (void)tearDownWithoutTransition;
- (void)moveTransitionWindowToPrelaunchPosition;
- (void)setTransistionWindowsToAllowLoginHooksToShow;
- (void)setWindowLevelTo:(id)arg1;
- (void)appear;
- (void)updateDisplay:(unsigned int)arg1;
- (void)relinquishMain;
- (void)becomeMain;
- (id)initWithScreen:(id)arg1 displayID:(unsigned int)arg2 grabImage:(BOOL)arg3;

@end

