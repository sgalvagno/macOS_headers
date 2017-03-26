//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import <CloudPhotoLibrary/CPLEngineCloudCacheImplementation-Protocol.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteCloudCache : CPLPrequeliteStorage <CPLEngineCloudCacheImplementation>
{
    CPLPrequeliteVariable *_syncAnchorVar;
    CPLPrequeliteVariable *_stagedSyncAnchorVar;
    CPLPrequeliteVariable *_initialSyncAnchor;
    CPLPrequeliteVariable *_classForInitialQuery;
    BOOL _shouldMarkInitialSync;
    BOOL _hasDoneAFirstSynchronization;
}

@property(readonly) BOOL hasDoneAFirstSynchronization; // @synthesize hasDoneAFirstSynchronization=_hasDoneAFirstSynchronization;
- (void).cxx_destruct;
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)statusDictionary;
- (id)status;
- (unsigned long long)_countOfUnconfirmedRecords;
- (id)_statusWithSyncAnchor;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;
- (BOOL)openWithError:(id *)arg1;
- (id)allRecordsIsFinal:(BOOL)arg1;
- (id)recordsOfClass:(Class)arg1 isFinal:(BOOL)arg2;
- (id)initialSyncAnchor;
- (BOOL)setInitialSyncAnchor:(id)arg1 error:(id *)arg2;
- (BOOL)setClassNameOfRecordsForInitialQuery:(id)arg1 error:(id *)arg2;
- (id)classNameOfRecordsForInitialQuery;
- (BOOL)resetSyncAnchorWithError:(id *)arg1;
- (BOOL)setSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)syncAnchor;
- (BOOL)remapAllRecordsWithPreviousIdentifier:(id)arg1 newIdentifier:(id)arg2 error:(id *)arg3;
- (void)markFirstSyncAsSuccessful;
- (BOOL)discardStagedChangesWithError:(id *)arg1;
- (BOOL)commitStagedChangesWithError:(id *)arg1;
- (BOOL)confirmAllRecordsWithError:(id *)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (id)confirmedRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2;
- (BOOL)deleteRecordWithIdentifier:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)updateRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)addRecord:(id)arg1 isFinal:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_insertStagedRecordWithIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 serializedRecord:(id)arg5 error:(id *)arg6;
- (BOOL)_insertFinalRecordWithIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 serializedRecord:(id)arg5 error:(id *)arg6;
- (BOOL)_updateStagedRecordWithIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 serializedRecord:(id)arg4 error:(id *)arg5;
- (BOOL)_updateFinalRecordWithIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 serializedRecord:(id)arg4 error:(id *)arg5;
- (BOOL)_hasRecordWithIdentifier:(id)arg1 isStaged:(char *)arg2;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

