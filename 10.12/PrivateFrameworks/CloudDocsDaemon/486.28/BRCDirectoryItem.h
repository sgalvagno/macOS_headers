//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCAliasItem, BRCDocumentItem;

__attribute__((visibility("hidden")))
@interface BRCDirectoryItem : BRCLocalItem
{
}

- (BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (void)transformBackAsDirectoryInAppLibrary:(id)arg1;
- (void)transformIntoFSRootWithAppLibrary:(id)arg1 zone:(id)arg2;
- (BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2;
- (BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2;
- (BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2;
- (void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1;
- (void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1;
- (void)_markLostDirectoryAsAlmostDead;
- (BOOL)_markChildrenLostForDeadParent;
- (BOOL)markChildrenLost;
- (BOOL)hasPendingLostChildren;
- (BOOL)hasLostChildren;
- (BOOL)hasLiveChildren;
- (BOOL)hasDeadChildren;
- (BOOL)containsPendingUploadOrSyncUp;
- (BOOL)containsPendingDownload;
- (BOOL)containsFault;
- (BOOL)containsOverQuotaItems;
- (BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2;
- (BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentID:(id)arg2;
- (BOOL)updateFromFSAtPath:(id)arg1 parentID:(id)arg2;
@property(readonly, nonatomic) BRCDirectoryItem *asDirectory;
- (BOOL)isDirectory;
- (float)prepareEditSyncUpWithOperation:(id)arg1 defaults:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) BRCAliasItem *asBRAlias; // @dynamic asBRAlias;
@property(readonly, nonatomic) BRCDocumentItem *asDocument; // @dynamic asDocument;

@end

