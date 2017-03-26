//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>

@class _DKCoreDataStorage;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject <_DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    NSObject<OS_dispatch_queue> *_executionQueue;
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;
    _DKCoreDataStorage *_storage;
}

+ (id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
+ (id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2;
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;
- (void)closeStorage;
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;
- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;
- (id)eventCountPerStreamName;
- (unsigned long long)eventCount;
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 limit:(unsigned long long)arg2;
- (id)executeQuery:(id)arg1 error:(id *)arg2;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;
- (BOOL)deleteObjects:(id)arg1 error:(id *)arg2;
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (BOOL)saveObjects:(id)arg1 error:(id *)arg2;
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)errorForException:(id)arg1;
- (void)handleNilArrayError:(CDUnknownBlockType)arg1 queue:(id)arg2;
- (id)removeBadObjects:(id)arg1;
- (BOOL)deleteStorage;
- (id)initWithDirectory:(id)arg1 readOnly:(BOOL)arg2;

@end

