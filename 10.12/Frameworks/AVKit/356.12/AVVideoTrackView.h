//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/AVTrackView.h>

@class AVAssetImageGenerator, AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerLayer, AVTimer, AVVideoTrackThumbnailManager, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AVVideoTrackView : AVTrackView
{
    AVPlayerController *_playerController;
    CDStruct_ef34d2b9 _zoomInfo;
    AVAssetImageGenerator *_imageGenerator;
    AVVideoTrackThumbnailManager *_thumbnailManager;
    NSMutableDictionary *_thumbnailLayers;
    AVPlayerLayer *_trimThumbnailPlayerLayer;
    AVPlayerControllerTimeResolver *_timeResolver;
    BOOL _didStartThumbnailGeneration;
    AVTimer *_startThumbnailGenerationAndLayoutTimer;
}

- (void).cxx_destruct;
- (void)layout;
- (void)viewDidEndLiveResize;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (BOOL)wantsUpdateLayer;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (struct CGSize)_thumbnailSizeForContainerSize:(struct CGSize)arg1 andPlayerController:(id)arg2;
- (struct CGSize)_mediaCompositionNaturalSizeForPlayerController:(id)arg1;
- (id)_thumbnailTimesForOffset:(double)arg1 andZoomFactor:(double)arg2 thumbnailSize:(struct CGSize)arg3 containerSize:(struct CGSize)arg4;
- (unsigned long long)_thumbnailIndexForTime:(double)arg1 zoomFactor:(unsigned long long)arg2 offset:(double)arg3 thumbnailSize:(struct CGSize)arg4 containerSize:(struct CGSize)arg5;
- (id)_thumbnailsToLayoutForZoomInfo:(CDStruct_ef34d2b9)arg1 thumbnailSize:(struct CGSize)arg2 containerSize:(struct CGSize)arg3;
- (struct CGPoint)_thumbnailPositionForThumbnail:(id)arg1 zoomInfo:(CDStruct_ef34d2b9)arg2 thumbnailSize:(struct CGSize)arg3 containerSize:(struct CGSize)arg4;
- (struct CGPoint)_thumbnailPositionForTime:(double)arg1 zoomFactor:(double)arg2 offset:(double)arg3 containerSize:(struct CGSize)arg4;
- (struct CGSize)_thumbnailSizeForThumbnail:(id)arg1 zoomInfo:(CDStruct_ef34d2b9)arg2 thumbnailSize:(struct CGSize)arg3 containerSize:(struct CGSize)arg4;
- (struct CGPoint)_thumbnailPlayerPositionForTime:(double)arg1 zoomInfo:(CDStruct_ef34d2b9)arg2 previewLayerSize:(struct CGSize)arg3 thumbnailSize:(struct CGSize)arg4;
- (void)_updateThumbnailPlayerLayerPositionForPreviewLayerSize:(struct CGSize)arg1 thumbnailSize:(struct CGSize)arg2;
- (void)_startThumbnailGenerationAndLayout;
- (void)startThumbnailGenerationWithZoomInfo:(CDStruct_ef34d2b9)arg1;
- (void)zoomWithInfo:(CDStruct_ef34d2b9)arg1;
- (double)allowedScrollAmount;
@property(retain) AVPlayerLayer *trimThumbnailPlayerLayer;
@property __weak AVPlayerController *playerController;
- (id)init;

@end

