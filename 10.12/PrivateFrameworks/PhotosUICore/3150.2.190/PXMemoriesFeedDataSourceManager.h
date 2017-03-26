//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/PXMemoriesFeedDataSourceManagerBase.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface PXMemoriesFeedDataSourceManager : PXMemoriesFeedDataSourceManagerBase <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_privateWorkQueue;
    unsigned long long _workTag;
    BOOL __generatingAdditionalEntries;
    unsigned long long __firstUngroupedMemoryIndex;
}

@property(nonatomic, getter=_isGeneratingAdditionalEntries, setter=_setGeneratingAdditionalEntries:) BOOL _generatingAdditionalEntries; // @synthesize _generatingAdditionalEntries=__generatingAdditionalEntries;
@property(nonatomic, setter=_setFirstUngroupedMemoryIndex:) unsigned long long _firstUngroupedMemoryIndex; // @synthesize _firstUngroupedMemoryIndex=__firstUngroupedMemoryIndex;
- (void).cxx_destruct;
- (id)objectReferenceForMemory:(id)arg1;
- (unsigned long long)_indexOfEntry:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (unsigned long long)_indexOfEntryForMemory:(id)arg1 inSortedEntries:(id)arg2 options:(unsigned long long)arg3;
- (void)handleChangedKeyAssetsForMemories:(id)arg1;
- (void)handleNonIncrementalFetchResultChange:(id)arg1;
- (void)handleIncrementalFetchResultChange:(id)arg1 updatedFetchResultsForMemoriesWithChangedKeyAssets:(id)arg2;
- (void)_handleFinishedGeneratingAdditionalEntriesWithNewDataSource:(id)arg1 changeDetails:(id)arg2 firstUngroupedMemoryIndex:(unsigned long long)arg3;
- (void)_generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(BOOL)arg3;
- (void)generateAdditionalEntriesIfPossible;
- (void)generateAdditionalEntriesWithOldDataSource:(id)arg1 startingIndex:(unsigned long long)arg2 sync:(BOOL)arg3;
- (void)startGeneratingMemories;
- (id)initWithPhotoLibrary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

