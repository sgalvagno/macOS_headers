//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPYouTubePlayerView, NSError;

@protocol LPYouTubePlayerDelegate <NSObject>

@optional
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToFullScreen:(BOOL)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didReceiveError:(NSError *)arg2;
- (void)youTubePlayer:(LPYouTubePlayerView *)arg1 didChangeToState:(long long)arg2;
- (void)youTubePlayerDidBecomeReady:(LPYouTubePlayerView *)arg1;
@end

