//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTDSXPCDaemonInterface.h"

@class CUTDSDaemon, CUTDSProvider, CUTDSSeeker, CUTDSSession, NSObject<OS_dispatch_queue>, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CUTDSXPCConnection : NSObject <CUTDSXPCDaemonInterface>
{
    CUTDSProvider *_activatedProvider;
    CUTDSSeeker *_activatedSeeker;
    CUTDSSession *_activatedSession;
    struct LogCategory *_ucat;
    BOOL _entitled;
    CUTDSDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSXPCConnection *_xpcCnx;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) BOOL entitled; // @synthesize entitled=_entitled;
@property(readonly, nonatomic) CUTDSDaemon *daemon; // @synthesize daemon=_daemon;
- (void)xpcTDSSessionActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSSeekerActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)xpcTDSProviderActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_entitledAndReturnError:(id *)arg1;
- (void)connectionInvalidated;
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;

@end

