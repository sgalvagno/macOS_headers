//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@protocol AVFunctionBarPlaybackControlsControllingInternal <NSObject>
@property(readonly) BOOL hasLiveStreamingContent;
@property(readonly) BOOL canScanBackward;
@property(readonly) BOOL canScanForward;
@property(readonly) BOOL canTogglePlayback;
@property(getter=isPlaying) BOOL playing;
- (void)controlsViewDidDisappear;
- (void)controlsViewWillAppear;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)scanBackward:(id)arg1;
- (void)scanForward:(id)arg1;
- (void)togglePlayback:(id)arg1;
@end

