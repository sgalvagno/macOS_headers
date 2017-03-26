//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BookmarkChangeTracker, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, WebBookmarkList, _LoadingBookmarkInfo;
@protocol BookmarkGroupDelegate, OS_dispatch_queue;

@interface WebBookmarkGroup : NSObject
{
    NSObject<OS_dispatch_queue> *_bookmarkLoadWaitingQueue;
    int _loadStatus;
    _LoadingBookmarkInfo *_bookmarkInfoPendingLoad;
    NSMutableDictionary *_bookmarksByURLString;
    NSMutableDictionary *_bookmarksByUUID;
    NSMutableDictionary *_bookmarksBySyncServerID;
    long long _changeTrackingSuppressionCount;
    long long _notificationSuppressionCount;
    long long _futureChangesDiscardabilityCount;
    BookmarkChangeTracker *_changeTracker;
    NSMutableArray *_changes;
    NSMutableArray *_pendingChanges;
    struct SHA256Hash _lastSeenBookmarkStateHash;
    BOOL _delegateImplementsBookmarkWasAdded;
    BOOL _delegateImplementsBookmarkWasRemoved;
    BOOL _delegateImplementsBookmarkDidChange;
    BOOL _syncInMergeMode;
    BOOL _allPendingChangesDiscardable;
    WebBookmarkList *_topBookmark;
    NSData *_syncServerData;
    id <BookmarkGroupDelegate> _delegate;
    NSString *_filePath;
}

@property(nonatomic, getter=areAllPendingChangesDiscardable) BOOL allPendingChangesDiscardable; // @synthesize allPendingChangesDiscardable=_allPendingChangesDiscardable;
@property(nonatomic, getter=isSyncInMergeMode) BOOL syncInMergeMode; // @synthesize syncInMergeMode=_syncInMergeMode;
@property(readonly, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) __weak id <BookmarkGroupDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSData *syncServerData; // @synthesize syncServerData=_syncServerData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_sendDelegateMessage:(int)arg1 withModifiedBookmark:(id)arg2 child:(id)arg3 changeWasInteractive:(BOOL)arg4;
- (void)_releaseTouchIconsForBookmark:(id)arg1;
- (void)_retainTouchIconsForBookmark:(id)arg1;
- (void)_initializeURLStringMapWithChildrenOfBookmark:(id)arg1;
- (void)_removeBookmarkFromURLStringMap:(id)arg1;
- (void)_addChildrenOfBookmarkToURLStringMap:(id)arg1;
- (void)_addBookmarkToURLStringMap:(id)arg1;
- (void)bookmarkURLStringDidChange:(id)arg1;
- (void)bookmarkURLStringWillChange:(id)arg1;
- (id)bookmarksForURLString:(id)arg1;
- (void)endMoveBookmarkBetweenParents:(id)arg1;
- (void)beginMoveBookmarkBetweenParents:(id)arg1;
- (void)endMoveBookmarkWithinParent:(id)arg1;
- (void)beginMoveBookmarkWithinParent:(id)arg1;
- (BOOL)_shouldTrackChangeToBookmark:(id)arg1;
- (BOOL)_shouldRecordChanges;
- (void)_clearChangesPassingTest:(CDUnknownBlockType)arg1;
- (void)endBatchChangeOfBookmark:(id)arg1;
- (void)beginBatchChangeOfBookmark:(id)arg1;
- (void)bookmark:(id)arg1 changedUUIDFrom:(id)arg2 to:(id)arg3;
- (void)bookmarkDidChange:(id)arg1 changedAttributes:(id)arg2 changeWasInteractive:(BOOL)arg3;
- (void)bookmarkDidChange:(id)arg1 changedAttributes:(id)arg2;
- (void)bookmarkChild:(id)arg1 wasRemovedFromParent:(id)arg2;
- (void)bookmarkChild:(id)arg1 wasAddedToParent:(id)arg2;
- (void)clearAllChanges;
- (void)clearChangesForBookmarkUUID:(id)arg1;
- (void)clearChangesForSyncServerID:(id)arg1;
- (unsigned long long)clearChangesThroughToken:(id)arg1;
- (void)recordChange:(id)arg1;
- (void)_bookmarksWereReloaded;
- (void)_loadSyncDataFromDictionary:(id)arg1;
- (id)_syncDataAsDictionary;
- (void)bookmark:(id)arg1 changedSyncServerIDFrom:(id)arg2 to:(id)arg3;
- (void)clearDAVSyncState;
@property(nonatomic, getter=areFutureChangesDiscardable) BOOL futureChangesDiscardable;
@property(nonatomic, getter=areNotificationsSuppressed) BOOL notificationsSuppressed;
@property(nonatomic, getter=isChangeTrackingSuppressed) BOOL changeTrackingSuppressed;
@property(readonly, copy, nonatomic) NSArray *changes;
- (void)fetchTopBookmarkWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) WebBookmarkList *topBookmark; // @synthesize topBookmark=_topBookmark;
- (id)_insertNewBookmarkAtIndex:(unsigned int)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3 type:(long long)arg4;
- (id)insertBookmarkProxyAtIndex:(unsigned long long)arg1 ofBookmark:(id)arg2 title:(id)arg3;
- (id)insertNewBookmarkListAtIndex:(unsigned long long)arg1 ofBookmark:(id)arg2 withTitle:(id)arg3;
- (id)addNewBookmarkListToBookmark:(id)arg1 withTitle:(id)arg2;
- (void)removeBookmark:(id)arg1;
- (void)addBookmark:(id)arg1;
- (id)bookmarkForSyncServerID:(id)arg1;
- (id)bookmarkForUUID:(id)arg1;
- (void)_clearPendingChanges;
- (void)_removeRedundantPendingChanges;
@property(readonly, nonatomic) BOOL hasUnsavedChanges;
- (int)_saveBookmarkGroupGuts;
- (int)save;
- (void)_updateSyncDataWithLoadedBookmarks:(id)arg1;
- (BOOL)_updateWithLoadedBookmarks:(id)arg1;
- (void)_readBookmarkGroupGutsFromFileAtURL:(id)arg1;
- (int)_finishLoadingBookmarkGroupGutsOnMainQueueIfNeeded;
- (void)_startLoadingBookmarkGroupGuts;
- (void)_performBlockAfterLoadingBookmarkGroupGuts:(CDUnknownBlockType)arg1;
- (void)_waitForBookmarkGroupGutsToLoad;
- (int)_loadBookmarkGroupGuts;
- (int)load;
- (void)startLoading;
- (id)initWithBookmarkFilePath:(id)arg1;

@end

