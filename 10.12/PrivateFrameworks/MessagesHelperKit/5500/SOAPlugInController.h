//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MessagesHelperKit/NSXPCListenerDelegate-Protocol.h>
#import <MessagesHelperKit/SOAPlugInControllerProtocol-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface SOAPlugInController : NSObject <SOAPlugInControllerProtocol, NSXPCListenerDelegate>
{
    BOOL _isSuspended;
    NSMutableDictionary *_plugInNameToBundle;
    NSMutableDictionary *_plugInNameToController;
    NSMutableArray *_loadedConnections;
    NSObject<OS_dispatch_queue> *_pluginControllerQueue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *pluginControllerQueue; // @synthesize pluginControllerQueue=_pluginControllerQueue;
@property BOOL isSuspended; // @synthesize isSuspended=_isSuspended;
@property(retain) NSMutableArray *loadedConnections; // @synthesize loadedConnections=_loadedConnections;
@property(retain) NSMutableDictionary *plugInNameToController; // @synthesize plugInNameToController=_plugInNameToController;
@property(retain) NSMutableDictionary *plugInNameToBundle; // @synthesize plugInNameToBundle=_plugInNameToBundle;
- (void).cxx_destruct;
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

