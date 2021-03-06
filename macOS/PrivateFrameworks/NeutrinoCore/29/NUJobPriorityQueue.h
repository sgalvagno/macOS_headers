//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString, NUJobQueue;

@interface NUJobPriorityQueue : NSObject
{
    NSMutableArray *_jobs;
    BOOL _needSort;
    NUJobQueue *_owner;
    NSObject<OS_dispatch_queue> *_runQueue;
    NSObject<OS_dispatch_queue> *_stateQueue;
    BOOL _isRunning;
    NSString *_name;
}

@property(readonly) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)_runNextJob;
- (void)_run;
- (void)_startRunning;
- (BOOL)start;
- (void)_sort;
- (void)_sortIfNeeded;
@property(readonly) long long count;
- (id)_popJob;
- (id)popJob;
- (BOOL)_removeJob:(id)arg1;
- (BOOL)removeJob:(id)arg1;
- (void)_addJob:(id)arg1;
- (void)addJob:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned int)arg3;

@end

