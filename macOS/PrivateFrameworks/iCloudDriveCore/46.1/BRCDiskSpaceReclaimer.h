//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BRCAccountSession, STMFreeSpaceRequest, icd_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject
{
    BRCAccountSession *_session;
    BOOL _isClosed;
    BOOL _computingPurgable;
    icd_pacer *_purgePacer;
    STMFreeSpaceRequest *_purgeRequest;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;
+ (double)accessTimeDeltaForUrgency:(int)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)requestPurgeSpace;
- (void)_requestPurgeSpace;
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(BOOL)arg2;
- (BOOL)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;
- (int)urgencyForCacheDeleteUrgency:(int)arg1;
- (long long)periodicReclaimSpace;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)_asyncAutovacuumIfNeeds:(id)arg1;
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;
- (long long)_fullVacuumIfPossible:(id)arg1;
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;
- (long long)_dbSizeInBytes:(id)arg1;
- (void)close;
- (id)initWithAccountSession:(id)arg1;

@end

