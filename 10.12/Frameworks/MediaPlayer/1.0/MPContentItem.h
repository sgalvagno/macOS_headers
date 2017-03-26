//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject
{
    struct _MRContentItem *_mrContentItem;
    MPMediaItemArtwork *_artwork;
    double _artworkWidthHint;
    double _artworkHeightHint;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(nonatomic, getter=isStreamingContent) BOOL streamingContent;
- (void)_setArtworkSize:(double)arg1 height:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_postItemChangedNotification;
- (id)_notification;
- (struct _MRContentItem *)_mediaRemoteContentItem;
@property(nonatomic) float playbackProgress;
@property(nonatomic, getter=isPlayable) BOOL playable;
@property(nonatomic, getter=isContainer) BOOL container;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) MPMediaItemArtwork *artwork;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)description;
- (void)dealloc;
- (id)_initWithMediaRemoteContentItem:(struct _MRContentItem *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

