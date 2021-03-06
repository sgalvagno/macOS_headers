//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CWFXPCConnectionDelegate.h"
#import "NSXPCListenerDelegate.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NSXPCListener;

__attribute__((visibility("hidden")))
@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate>
{
    NSXPCListener *_XPCListener;
    NSMutableArray *_mutableXPCConnections;
    NSObject<OS_dispatch_queue> *_mutexQueue;
    id <CWFXPCListenerDelegate> _delegate;
    long long _XPCServiceType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long XPCServiceType; // @synthesize XPCServiceType=_XPCServiceType;
@property(retain) id <CWFXPCListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)XPCConnection:(id)arg1 receivedXPCRequest:(id)arg2;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (BOOL)__allowXPCConnection:(id)arg1 serviceType:(long long)arg2;
- (BOOL)__isProcessWhitelistedForAdoption:(id)arg1 XPCServiceType:(long long)arg2;
- (id)__adoptionWhitelist;
- (id)registeredActivities;
- (id)registeredEventIDs;
- (void)sendXPCEvent:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)suspend;
- (void)resume;
- (id)init;
- (id)initWithXPCServiceType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

