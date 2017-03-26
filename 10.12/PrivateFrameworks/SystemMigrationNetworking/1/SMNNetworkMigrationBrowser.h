//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemMigrationNetworking/SMNNetworkSessionDelegateProtocol-Protocol.h>

@class NSMutableDictionary, NSString, SMNNetworkSession;
@protocol OS_dispatch_queue;

@interface SMNNetworkMigrationBrowser : NSObject <SMNNetworkSessionDelegateProtocol>
{
    BOOL _useSSL;
    BOOL _allowLocalNetworkServer;
    BOOL _automaticallySeeksFastestConnection;
    NSString *secretPassword;
    CDUnknownBlockType _systemAppearedBlock;
    CDUnknownBlockType _systemDisappearedBlock;
    SMNNetworkSession *_session;
    struct OpaqueSecIdentityRef *_localIdentity;
    NSMutableDictionary *_serviceToTxtRecordMap;
    NSObject<OS_dispatch_queue> *_serviceMapQueue;
}

+ (void)addLocalInstanceName:(id)arg1;
@property(retain) NSObject<OS_dispatch_queue> *serviceMapQueue; // @synthesize serviceMapQueue=_serviceMapQueue;
@property(retain) NSMutableDictionary *serviceToTxtRecordMap; // @synthesize serviceToTxtRecordMap=_serviceToTxtRecordMap;
@property struct OpaqueSecIdentityRef *localIdentity; // @synthesize localIdentity=_localIdentity;
@property(retain) SMNNetworkSession *session; // @synthesize session=_session;
@property(copy) CDUnknownBlockType systemDisappearedBlock; // @synthesize systemDisappearedBlock=_systemDisappearedBlock;
@property(copy) CDUnknownBlockType systemAppearedBlock; // @synthesize systemAppearedBlock=_systemAppearedBlock;
@property BOOL automaticallySeeksFastestConnection; // @synthesize automaticallySeeksFastestConnection=_automaticallySeeksFastestConnection;
@property BOOL allowLocalNetworkServer; // @synthesize allowLocalNetworkServer=_allowLocalNetworkServer;
@property BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(retain) NSString *secretPassword; // @synthesize secretPassword;
- (void).cxx_destruct;
- (void)session:(id)arg1 benchmarkedSoftAP:(double)arg2 infrastructureSample:(double)arg3;
- (void)sessionInterrupted:(id)arg1 connection:(id)arg2 active:(BOOL)arg3 didReplaceActiveConnection:(BOOL)arg4;
- (void)session:(id)arg1 streamClosing:(id)arg2;
- (void)session:(id)arg1 newIncomingStream:(id)arg2;
- (void)sessionIsInterrupted:(id)arg1;
- (void)sessionIsActive:(id)arg1;
- (void)session:(id)arg1 promotedNewConnectionToActive:(id)arg2 andResignedConnection:(id)arg3;
- (void)session:(id)arg1 finishedSamplingConnection:(id)arg2;
- (void)sessionHasFasterConnectionAvailable:(id)arg1;
- (void)sessionDeterminingFastestConnection:(id)arg1;
- (void)session:(id)arg1 didFailConnectionToPeerNamed:(id)arg2;
- (void)sessionDetectedNetworkConfigurationChanged:(id)arg1;
- (void)session:(id)arg1 peerNamed:(id)arg2 updatedTxtRecord:(id)arg3;
- (void)session:(id)arg1 resolvedPeerNamed:(id)arg2 txtRecord:(id)arg3;
- (void)session:(id)arg1 failedToResolvePeerNamed:(id)arg2 errorCode:(long long)arg3;
- (void)session:(id)arg1 peerDisappeared:(id)arg2;
- (BOOL)session:(id)arg1 shouldAcceptPeerWithAddress:(id)arg2;
- (void)session:(id)arg1 discoveredPeerNamed:(id)arg2;
- (id)_decodedTxtRecordWithMyStringKeys:(id)arg1;
- (void)stop;
- (void)startWithType:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)initWithSystemAppearedBlock:(CDUnknownBlockType)arg1 andSystemDisappearedBlock:(CDUnknownBlockType)arg2;

@end

