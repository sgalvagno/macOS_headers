//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PackageKit/PKInstallServiceClient-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_semaphore, PKInstallService;

@interface _PKInstallClientConnection : NSObject <PKInstallServiceClient>
{
    NSXPCConnection *_connection;
    id <PKInstallService> _proxy;
    id <PKInstallService> _blockingProxy;
    NSObject<OS_dispatch_semaphore> *_sema;
    BOOL _isSilent;
}

@property(setter=setSilent:) BOOL isSilent; // @synthesize isSilent=_isSilent;
- (void)installDidEndForToken:(id)arg1;
- (void)installDidBeginCommitForToken:(id)arg1;
- (void)installDidBeginForToken:(id)arg1;
- (void)invalidate;
- (BOOL)waitUntilDoneOrTimedOut;
- (BOOL)waitUntilDone;
- (void)signal;
- (id)blockingProxy;
- (id)proxy;
- (BOOL)isServiceRemote;
- (BOOL)connectToDaemon:(BOOL)arg1 privileged:(BOOL)arg2 clientObject:(id)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

