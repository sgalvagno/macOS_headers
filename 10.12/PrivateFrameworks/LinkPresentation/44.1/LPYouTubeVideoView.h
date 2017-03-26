//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LinkPresentation/LPVideoView.h>

#import <LinkPresentation/LPYouTubePlayerDelegate-Protocol.h>

@class LPYouTubePlayerView, NSString;

__attribute__((visibility("hidden")))
@interface LPYouTubeVideoView : LPVideoView <LPYouTubePlayerDelegate>
{
    LPYouTubePlayerView *_platformYouTubeView;
}

- (void).cxx_destruct;
- (void)enterCustomFullScreen;
- (BOOL)usesCustomFullScreenImplementation;
- (void)youTubePlayer:(id)arg1 didReceiveError:(id)arg2;
- (void)youTubePlayer:(id)arg1 didChangeToState:(long long)arg2;
- (id)createVideoPlayerView;
- (void)layoutComponentView;
- (void)setPlaying:(BOOL)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (BOOL)shouldShowMuteButton;
- (BOOL)usesSharedAudioSession;
- (id)initWithVideo:(id)arg1 style:(id)arg2 posterFrame:(id)arg3 posterFrameStyle:(id)arg4 disablePlayback:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

