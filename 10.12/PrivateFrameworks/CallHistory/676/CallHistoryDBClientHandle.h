//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallHistory/CHSynchronizedLoggable.h>

@class CallHistoryDBHandle, NSObject;
@protocol OS_dispatch_queue;

@interface CallHistoryDBClientHandle : CHSynchronizedLoggable
{
    CallHistoryDBHandle *dbStoreHandle;
    id _observerCallRecordRef;
    id _observerCallTimersRef;
    NSObject<OS_dispatch_queue> *_recentCallQueue;
}

+ (id)createForServer;
+ (id)createForClient;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recentCallQueue; // @synthesize recentCallQueue=_recentCallQueue;
@property(readonly, nonatomic) CallHistoryDBHandle *dbStoreHandle; // @synthesize dbStoreHandle;
- (void).cxx_destruct;
- (BOOL)moveCallRecordsFromDatabaseAtURL:(id)arg1;
- (BOOL)saveDatabase:(id *)arg1;
- (void)dealloc;
- (BOOL)updateCallRecord_sync:(id)arg1 withChangeDict:(id)arg2;
- (id)updateAllCallRecords_sync:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords_sync:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (BOOL)willHandleNotification_sync:(id)arg1;
- (void)handleCallTimersSave_sync:(id)arg1;
- (void)handleCallRecordSave_sync:(id)arg1;
- (id)manager;
- (BOOL)resetAllTimers;
- (void)resetTimers;
- (id)timerLifetime;
- (id)timerLastReset;
- (id)timerOutgoing;
- (id)timerIncoming;
- (id)updateAllCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateAllCallRecords:(id)arg1;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (id)updateCallRecords:(id)arg1 error:(id *)arg2;
- (id)updateCallRecords:(id)arg1;
- (BOOL)createCallRecords:(id)arg1 error:(id *)arg2;
- (BOOL)createCallRecords:(id)arg1;
- (BOOL)createCallRecord:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (BOOL)createCallRecord:(id)arg1 error:(id *)arg2;
- (BOOL)createCallRecord:(id)arg1;
- (BOOL)deleteObjectsWithUniqueIds:(id)arg1 error:(id *)arg2;
- (BOOL)deleteObjectsWithUniqueIds:(id)arg1;
- (BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2 save:(BOOL)arg3;
- (BOOL)deleteObjectWithUniqueId:(id)arg1 error:(id *)arg2;
- (BOOL)deleteObjectWithUniqueId:(id)arg1;
- (BOOL)deleteAll:(id *)arg1;
- (BOOL)deleteAll;
- (id)fetchObjectsWithUniqueIds:(id)arg1;
- (id)fetchObjectWithUniqueId:(id)arg1;
- (id)fetchAllObjectsWithUniqueId:(id)arg1;
- (id)fetchObjectsWithPredicate:(id)arg1;
- (id)fetchWithCallTypes:(unsigned int)arg1;
- (id)fetchAllNoLimit;
- (id)fetchAll;
- (void)unRegisterForNotifications;
- (void)registerForNotifications;
- (id)init:(BOOL)arg1;
- (id)convertToCHRecentCalls_sync:(id)arg1;
- (void)setClientObject_sync:(id)arg1 withStoreObject:(id)arg2;
- (void)setStoreObject_sync:(id)arg1 withClientObject:(id)arg2;
- (unsigned int)getCallStatus_sync:(id)arg1 isOriginated:(id)arg2 isAnswered:(id)arg3;
- (void)parseCallStatus_sync:(unsigned int)arg1 isAnswered:(char *)arg2 isOriginated:(char *)arg3;
- (id)init;

@end

