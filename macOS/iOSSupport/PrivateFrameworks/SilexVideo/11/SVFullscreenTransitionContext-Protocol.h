//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class UIView;

@protocol SVFullscreenTransitionContext <NSObject>
@property(readonly, nonatomic, getter=isInteractive) BOOL interactive;
@property(readonly, nonatomic) double transitionDuration;
@property(readonly, nonatomic) UIView *toView;
@property(readonly, nonatomic) UIView *fromView;
@property(readonly, nonatomic) UIView *contentOverlayView;
@end

