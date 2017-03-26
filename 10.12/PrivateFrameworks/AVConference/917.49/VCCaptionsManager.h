//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/VCCaptionsSourceDelegate-Protocol.h>

@class AVConferenceXPCClient, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate>
{
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSObject<OS_dispatch_queue> *_xpcCallbackQueue;
}

+ (id)defaultManager;
- (void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;
- (void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
- (void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
- (void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
- (void)notifyClientsWithStreamToken:(long long)arg1 service:(char *)arg2 arguments:(id)arg3;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (id)captionsSourceFromClientContext:(id)arg1;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)arg1;
- (void)registerCaptionsSource:(id)arg1 streamToken:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

