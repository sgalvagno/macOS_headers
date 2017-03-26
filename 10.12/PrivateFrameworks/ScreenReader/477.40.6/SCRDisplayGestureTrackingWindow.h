//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRDisplayOverlay.h>

@class SCRDisplayGestureOverlayCurtain;

__attribute__((visibility("hidden")))
@interface SCRDisplayGestureTrackingWindow : SCRDisplayOverlay
{
    SCRDisplayGestureOverlayCurtain *_curtainLayer;
    struct CGPoint _originOffset;
    BOOL _hidden;
}

+ (int)initialWindowLevel;
+ (id)gestureTrackingWindow;
+ (void)initialize;
- (BOOL)usesDrawInContext;
- (void)setFingerPoint:(struct CGPoint)arg1;
- (void)_setFingerPoint:(id)arg1;
- (void)setCurtainRegion:(struct CGRect)arg1;
- (void)_setCurtainRegion:(id)arg1;
- (void)hide;
- (void)_hide;
- (BOOL)hasContents;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithScreenRect:(struct CGRect)arg1 withRed:(double)arg2 green:(double)arg3 blue:(double)arg4 alpha:(double)arg5;

@end

