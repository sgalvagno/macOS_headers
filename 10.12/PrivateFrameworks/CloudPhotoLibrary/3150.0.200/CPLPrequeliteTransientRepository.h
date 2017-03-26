//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPrequeliteStorage.h>

#import <CloudPhotoLibrary/CPLEngineTransientRepositoryImplementation-Protocol.h>

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteTransientRepository : CPLPrequeliteStorage <CPLEngineTransientRepositoryImplementation>
{
    CPLPrequeliteVariable *_syncAnchorVar;
}

- (void).cxx_destruct;
- (id)status;
- (unsigned long long)countOfUnmingledRecords;
- (unsigned long long)countOfAssetChanges;
- (Class)classForRecordWithIdentifier:(id)arg1;
- (BOOL)deleteAllRecordsWithError:(id *)arg1;
- (BOOL)deleteMingledRecordsWithError:(id *)arg1;
- (BOOL)resetMingledRecordsWithError:(id *)arg1;
- (BOOL)hasUnmingledRecords;
- (BOOL)hasMingledRecords;
- (BOOL)popChangeBatchOfChangedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)_fillArray:(id)arg1 alreadySeen:(id)arg2 withChangeAndRelated:(id)arg3 identifiersToDelete:(id)arg4 transientType:(int)arg5 maximumCount:(unsigned long long *)arg6 error:(id *)arg7;
- (BOOL)popChangeBatchOfDeletedRecords:(id *)arg1 ofClass:(Class)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)_fillBatchWithDeletedRecords:(id)arg1 withEnumerator:(id)arg2 maximumCount:(unsigned long long *)arg3 additionalRecordsToAdd:(id)arg4 identifiersToDelete:(id)arg5 alreadyDeleted:(id)arg6 error:(id *)arg7;
- (BOOL)popChangeBatchOfRemappedRecords:(id *)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_hasRecordWithTransientType:(int)arg1 relatedIdentifier:(id)arg2;
- (id)_recordWithTransientType:(int)arg1 identifier:(id)arg2;
- (BOOL)hasRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1;
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 relatedIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 class:(Class)arg2 maximumCount:(unsigned long long)arg3;
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 maximumCount:(unsigned long long)arg2;
- (BOOL)_markChangesWithIdentifiersAsMingled:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForMinglingWithError:(id *)arg1;
- (BOOL)appendBatch:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_appendChange:(id)arg1 alreadyMingled:(BOOL)arg2 error:(id *)arg3;
- (BOOL)storeTransientSyncAnchor:(id)arg1 error:(id *)arg2;
- (id)transientSyncAnchor;
- (BOOL)openWithError:(id *)arg1;
- (BOOL)upgradeStorageToVersion:(long long)arg1;
- (BOOL)initializeStorage;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

