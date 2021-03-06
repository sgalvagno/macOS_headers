//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUCameraPlayerAVBehavior;

@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>
- (void)pictureInPictureDidToggleMicrophone;
- (double)currentScrubberResolutionForBehavior:(HUCameraPlayerAVBehavior *)arg1;

@optional
- (void)playbackControlsDidChangePlayerVolume:(float)arg1;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;
- (void)playbackControlsDidToggleMuted:(BOOL)arg1;
@end

