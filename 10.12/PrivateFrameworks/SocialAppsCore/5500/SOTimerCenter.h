//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSMutableOrderedSet, NSTimer;

@interface SOTimerCenter : NSObject
{
    BOOL _suspendAllListeners;
    BOOL _oneTimeFire;
    BOOL _changesOccuredDuringBatch;
    NSMutableOrderedSet *_allTimers;
    NSMapTable *_listenerToTimerMap;
    NSMutableDictionary *_groupToTimerDict;
    NSHashTable *_disabledTimers;
    NSHashTable *_disabledGroups;
    NSHashTable *_currentlyDisabledTimers;
    NSMutableDictionary *_lastFireIntervals;
    NSTimer *_theTimer;
    double _customInterval;
    unsigned long long _batchCount;
}

+ (id)weakSharedInstance;
@property unsigned long long batchCount; // @synthesize batchCount=_batchCount;
@property BOOL changesOccuredDuringBatch; // @synthesize changesOccuredDuringBatch=_changesOccuredDuringBatch;
@property double customInterval; // @synthesize customInterval=_customInterval;
@property BOOL oneTimeFire; // @synthesize oneTimeFire=_oneTimeFire;
@property BOOL suspendAllListeners; // @synthesize suspendAllListeners=_suspendAllListeners;
@property(retain) NSTimer *theTimer; // @synthesize theTimer=_theTimer;
@property(retain) NSMutableDictionary *lastFireIntervals; // @synthesize lastFireIntervals=_lastFireIntervals;
@property(retain) NSHashTable *currentlyDisabledTimers; // @synthesize currentlyDisabledTimers=_currentlyDisabledTimers;
@property(retain) NSHashTable *disabledGroups; // @synthesize disabledGroups=_disabledGroups;
@property(retain) NSHashTable *disabledTimers; // @synthesize disabledTimers=_disabledTimers;
@property(retain) NSMutableDictionary *groupToTimerDict; // @synthesize groupToTimerDict=_groupToTimerDict;
@property(retain) NSMapTable *listenerToTimerMap; // @synthesize listenerToTimerMap=_listenerToTimerMap;
@property(retain) NSMutableOrderedSet *allTimers; // @synthesize allTimers=_allTimers;
- (void).cxx_destruct;
- (void)endChanges;
- (void)beginChanges;
- (void)_resumeActiveTimersAndFireTimerImmediately:(BOOL)arg1;
- (void)resumeActiveTimersAndFireTimerImmediately;
- (void)resumeActiveTimers;
- (void)suspendActiveTimers;
- (void)_resumeTimersForGroup:(id)arg1 fireTimerImmediately:(BOOL)arg2;
- (void)resumeTimersForGroupAndFireImmediately:(id)arg1;
- (void)resumeTimersForGroup:(id)arg1;
- (void)suspendTimersForGroup:(id)arg1;
- (void)resumeTimersForListener:(id)arg1;
- (void)suspendTimersForListener:(id)arg1;
- (void)resumeTimer:(id)arg1;
- (void)suspendTimer:(id)arg1;
- (void)removeTimersForListener:(id)arg1 group:(id)arg2;
- (void)removeTimersForListener:(id)arg1;
- (void)removeTimer:(id)arg1;
- (id)addTimerForListener:(id)arg1 selector:(SEL)arg2 milliSeconds:(unsigned long long)arg3 group:(id)arg4;
- (id)addTimerForListener:(id)arg1 selector:(SEL)arg2 milliSeconds:(unsigned long long)arg3;
- (void)_timerFired:(id)arg1;
- (void)_recalculateTimerInterval;
- (void)_recalculateDisabledTimers;
- (void)_clearTimer;
- (void)_createTimerWithInterval:(double)arg1 custom:(BOOL)arg2;
- (void)_createTimer;
- (void)_resetTimeIntervals;
- (unsigned long long)_currentLowestInterval;
- (id)init;

@end

