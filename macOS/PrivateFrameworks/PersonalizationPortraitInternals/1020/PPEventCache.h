//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PPEventStorage, _PASLock;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PPEventCache : NSObject
{
    PPEventStorage *_storage;
    _PASLock *_data;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    unsigned long long _memoryPressureStatus;
}

- (void).cxx_destruct;
- (id)cachedEventHighlightForEvent:(id)arg1 rankingOptions:(int)arg2;
- (void)setEventHighlight:(id)arg1;
- (void)evictAllEventsNotInRanges:(id)arg1;
- (void)evictAllEventsNotInRange:(struct _NSRange)arg1;
- (void)removeAllObjects;
- (void)_refreshCachedEvent:(id)arg1;
- (id)refreshCacheWithChanges:(id)arg1 changesContainDeletion:(char *)arg2;
- (id)evictEventWithIdentifier:(id)arg1;
- (id)objectForRange:(struct _NSRange)arg1;
- (void)_handleMemoryPressureStatus;
- (void)setExtraSecondsToBackfill:(unsigned long long)arg1;
- (id)initWithEventStorage:(id)arg1;

@end

