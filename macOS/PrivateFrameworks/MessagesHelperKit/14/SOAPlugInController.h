//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"
#import "SOAPlugInControllerProtocol.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface SOAPlugInController : NSObject <SOAPlugInControllerProtocol, NSXPCListenerDelegate>
{
    BOOL _isSuspended;
    NSMutableDictionary *_plugInNameToBundle;
    NSMutableDictionary *_plugInNameToController;
    NSMutableArray *_loadedConnections;
    NSObject<OS_dispatch_queue> *_pluginControllerQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pluginControllerQueue; // @synthesize pluginControllerQueue=_pluginControllerQueue;
@property BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain) NSMutableArray *loadedConnections; // @synthesize loadedConnections=_loadedConnections;
@property(retain) NSMutableDictionary *plugInNameToController; // @synthesize plugInNameToController=_plugInNameToController;
@property(retain) NSMutableDictionary *plugInNameToBundle; // @synthesize plugInNameToBundle=_plugInNameToBundle;
- (void)reconnect;
- (void)suspendConnections;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_exitCleanly;
- (void)removeConnection:(id)arg1;
- (void)_lastConnectionDied:(id)arg1;
- (oneway void)connectPlugIn:(id)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (BOOL)_isAppRunning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

