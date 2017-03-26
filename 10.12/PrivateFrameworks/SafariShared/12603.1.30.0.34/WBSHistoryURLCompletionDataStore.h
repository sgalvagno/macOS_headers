//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, WBSHistoryService, WBSURLCompletionHistorySnapshot;
@protocol OS_dispatch_queue;

@interface WBSHistoryURLCompletionDataStore : NSObject
{
    WBSHistoryService *_historyService;
    NSObject<OS_dispatch_queue> *_dataStoreQueue;
    NSDate *_snapshotLastModifiedDate;
    WBSURLCompletionHistorySnapshot *_snapshot;
}

- (void).cxx_destruct;
- (void)_loadFromDatabaseIfNecessary;
- (RefPtr_84e65dc2)_completionItemFromDatabase:(id)arg1 withVisitDatabaseID:(long long)arg2;
- (void)_enumerateCompletionItemsForMostRecentVisitsFromDatabase:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (Ref_06e40557)_completionItemFromRow:(id)arg1;
- (void)getSnapshotWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithHistoryService:(id)arg1;

@end

