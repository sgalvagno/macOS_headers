//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRPlaybackQueueClient, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRPlaybackQueueOriginClient : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _requestCallback;
    NSMutableArray *_createItemCallbacks;
    NSMutableArray *_createChildItemCallbacks;
    NSMutableArray *_metadataCallbacks;
    NSMutableArray *_languageOptionCallbacks;
    NSMutableArray *_infoCallbacks;
    NSMutableArray *_lyricsCallbacks;
    NSMutableArray *_artworkCallbacks;
    MRPlaybackQueueClient *_requestedClient;
    MRPlaybackQueueClient *_sourceClient;
    CDUnknownBlockType _beginLyricsEventCallback;
    CDUnknownBlockType _endLyricsEventCallback;
    int _notifyRestoreClientStateForLaunch;
    struct _MROrigin *_origin;
}

@property(readonly, nonatomic) NSArray *lyricsCallbacks; // @synthesize lyricsCallbacks=_lyricsCallbacks;
@property(copy, nonatomic) CDUnknownBlockType endLyricsEventCallback;
@property(copy, nonatomic) CDUnknownBlockType beginLyricsEventCallback;
@property(readonly, nonatomic) void *requestedContext;
@property(readonly, nonatomic) void *sourceContext;
- (void)invalidateRequestedPlaybackQueue;
- (void)invalidateSourcePlaybackQueueWithContext:(void *)arg1;
- (void)invalidateSourcePlaybackQueue;
- (id)getSubscribedRequestedContentItems:(id)arg1;
- (id)getSubscribedSourceContentItems:(id)arg1;
- (void)addRequestedPlaybackQueue:(void *)arg1 forRequest:(void *)arg2;
- (void)addSourcePlaybackQueue:(void *)arg1 forRequest:(void *)arg2;
@property(readonly, nonatomic) NSArray *artworkCallbacks;
- (void)addArtworkCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
- (id)playbackQueueLyricsCallbacks;
- (void)addLyricsCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *infoCallbacks;
- (void)addInfoCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *languageOptionsCallbacks;
- (void)addLanguageOptionsCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *metadataCallbacks;
- (void)addMetadataCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *createChildItemCallbacks;
- (void)addCreateChildItemCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(readonly, nonatomic) NSArray *createItemCallbacks;
- (void)addCreateItemCallback:(CDUnknownBlockType)arg1 prepend:(BOOL)arg2;
@property(copy, nonatomic) CDUnknownBlockType requestCallback;
- (void)dealloc;
- (id)initWithOrigin:(struct _MROrigin *)arg1 queue:(id)arg2;

@end

