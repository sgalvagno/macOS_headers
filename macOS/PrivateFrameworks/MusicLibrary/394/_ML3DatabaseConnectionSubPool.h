//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString;

@interface _ML3DatabaseConnectionSubPool : NSObject
{
    NSObject<OS_dispatch_queue> *_checkoutQueue;
    NSObject<OS_dispatch_queue> *_checkinQueue;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_semaphore> *_waitingSemaphore;
    NSMutableSet *_availableConnections;
    NSMutableSet *_busyConnections;
    int _connectionsProfilingLevel;
    int _willDeleteDatabaseNotifyToken;
    int _homeSharingCachesClearedNotifyToken;
    BOOL _useReadOnlyConnections;
    BOOL _useDistantConnections;
    NSString *_databasePath;
    unsigned long long _maxConcurrentConnections;
    unsigned long long _connectionsJournalingMode;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long connectionsJournalingMode; // @synthesize connectionsJournalingMode=_connectionsJournalingMode;
@property(nonatomic) BOOL useDistantConnections; // @synthesize useDistantConnections=_useDistantConnections;
@property(nonatomic) BOOL useReadOnlyConnections; // @synthesize useReadOnlyConnections=_useReadOnlyConnections;
@property(readonly, nonatomic) unsigned long long maxConcurrentConnections; // @synthesize maxConcurrentConnections=_maxConcurrentConnections;
@property(readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
- (void)_handleDatabaseDeletion;
- (void)handleDiagnostic:(id)arg1;
- (void)closeConnectionsAndWaitForBusyConnections:(BOOL)arg1;
- (void)checkInConnection:(id)arg1 returnToPool:(BOOL)arg2;
- (void)checkInConnection:(id)arg1;
- (id)checkoutConnection:(char *)arg1;
@property(nonatomic) int connectionsProfilingLevel;
- (void)dealloc;
- (id)init;
- (id)initWithDatabasePath:(id)arg1 maxConcurrentConnections:(unsigned long long)arg2;

@end

