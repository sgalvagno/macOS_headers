//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/PDXPCServiceExportedInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface PDXPCService : NSObject <PDXPCServiceExportedInterface>
{
    NSXPCConnection *_connection;
    NSString *_className;
    BOOL _callbacksSuspended;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
    int _remoteProcessIdentifier;
    NSString *_remoteProcessApplicationIdentifier;
    NSString *_remoteProcessBundleIdentifier;
}

@property(readonly, nonatomic) NSString *remoteProcessBundleIdentifier; // @synthesize remoteProcessBundleIdentifier=_remoteProcessBundleIdentifier;
@property(readonly, nonatomic) NSString *remoteProcessApplicationIdentifier; // @synthesize remoteProcessApplicationIdentifier=_remoteProcessApplicationIdentifier;
@property(readonly, nonatomic) int remoteProcessIdentifier; // @synthesize remoteProcessIdentifier=_remoteProcessIdentifier;
- (void).cxx_destruct;
- (void)serviceSuspended;
- (void)serviceResumed;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (void)clearConnectionReference;
- (id)connection;
- (id)initWithConnection:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

