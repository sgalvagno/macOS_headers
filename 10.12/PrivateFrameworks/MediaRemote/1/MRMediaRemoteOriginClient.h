//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MRNowPlayingArtwork, MRPlaybackQueueOriginClient, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface MRMediaRemoteOriginClient : NSObject
{
    BOOL _canBeNowPlayingApp;
    BOOL _isOverrideApp;
    int _notifyRestoreClientStateForLaunch;
    int _notifyDidLaunchToken;
    NSMutableDictionary *_commandHandlerBlocks;
    NSArray *_supportedCommands;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    struct _MROrigin *_origin;
    NSMutableDictionary *_transactionCallbacks;
    unsigned int _routeDiscoveryMode;
    NSArray *_applicationPickedRoutes;
    NSString *_parentApplication;
    CDUnknownBlockType _videoThumbnailsCallback;
    CDUnknownBlockType _audioAmplitudeSamplesCallback;
    MRPlaybackQueueOriginClient *_playbackQueueClient;
}

@property(readonly, nonatomic) MRPlaybackQueueOriginClient *playbackQueueClient; // @synthesize playbackQueueClient=_playbackQueueClient;
@property(copy, nonatomic) CDUnknownBlockType audioAmplitudeSamplesCallback; // @synthesize audioAmplitudeSamplesCallback=_audioAmplitudeSamplesCallback;
@property(copy, nonatomic) CDUnknownBlockType videoThumbnailsCallback; // @synthesize videoThumbnailsCallback=_videoThumbnailsCallback;
@property(copy, nonatomic) NSString *parentApplication; // @synthesize parentApplication=_parentApplication;
@property(nonatomic) unsigned int routeDiscoveryMode; // @synthesize routeDiscoveryMode=_routeDiscoveryMode;
@property(readonly, nonatomic) struct _MROrigin *origin; // @synthesize origin=_origin;
@property(copy, nonatomic) NSArray *applicationPickedRoutes; // @synthesize applicationPickedRoutes=_applicationPickedRoutes;
@property(copy, nonatomic) NSArray *supportedCommands; // @synthesize supportedCommands=_supportedCommands;
@property(copy, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork; // @synthesize nowPlayingArtwork=_nowPlayingArtwork;
@property(nonatomic) BOOL isOverrideApp; // @synthesize isOverrideApp=_isOverrideApp;
@property(nonatomic) BOOL canBeNowPlayingApp; // @synthesize canBeNowPlayingApp=_canBeNowPlayingApp;
- (void)_registerDefaultCallbacks;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (id)transactionCallbacksForName:(unsigned long long)arg1;
- (void)addTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
- (void)setTransactionCallback:(CDUnknownBlockType)arg1 forName:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSArray *commandHandlerBlocks;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(CDUnknownBlockType)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithOrigin:(struct _MROrigin *)arg1;

@end

