//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarAgentLink/NSXPCListenerDelegate-Protocol.h>

@class CalXPCConnectionInfo, NSMutableSet, NSString, NSXPCListener;

@interface CalXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>
{
    CalXPCConnectionInfo *_info;
    CDUnknownBlockType _errorHandler;
    NSMutableSet *_clients;
    NSXPCListener *_connectionListener;
}

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(retain, nonatomic) CalXPCConnectionInfo *info; // @synthesize info=_info;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (void)stopListening;
- (void)performSelectorOnClients:(SEL)arg1 withObjects:(id)arg2;
- (void)_removeClientConnection:(id)arg1;
- (void)_addClientConnection:(id)arg1 clientLink:(id)arg2;
- (void)_didInvalidateConnection:(id)arg1;
- (void)_didInterruptConnection;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_setupListener;
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

