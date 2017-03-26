//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorageImplementation-Protocol.h>

@class CPLResource, NSString;
@protocol NSFastEnumeration;

@protocol CPLEngineResourceUploadQueueImplementation <CPLEngineStorageImplementation>
- (BOOL)resetWithError:(id *)arg1;
- (unsigned long long)countOfOriginalOthers;
- (unsigned long long)countOfOriginalVideos;
- (unsigned long long)countOfOriginalImages;
- (unsigned long long)countOfQueuedUploadTasks;
- (BOOL)resetDequeuedBackgroundUploadTasksWithError:(id *)arg1;
- (BOOL)dequeueNextBackgroundUploadTask:(id *)arg1 resourceType:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)reenqueueUploadingResourcesWithError:(id *)arg1;
- (BOOL)makeResourceAsStale:(CPLResource *)arg1 error:(id *)arg2;
- (id <NSFastEnumeration>)enumeratorForResourcesWithItemIdentifier:(NSString *)arg1 includePending:(BOOL)arg2;
- (BOOL)markResourceReadyForBackgroundUpload:(CPLResource *)arg1 error:(id *)arg2;
- (BOOL)reenqueueResource:(CPLResource *)arg1 bumpRetryCount:(BOOL)arg2 error:(id *)arg3;
- (BOOL)discardResource:(CPLResource *)arg1 currentlyStoredResource:(id *)arg2 lastReference:(char *)arg3 error:(id *)arg4;
- (BOOL)discardResource:(CPLResource *)arg1 discardedResource:(id *)arg2 error:(id *)arg3;
- (BOOL)enqueueResource:(CPLResource *)arg1 discardedResource:(id *)arg2 error:(id *)arg3;
- (CPLResource *)queuedResourceForResource:(CPLResource *)arg1 pendingCount:(unsigned long long *)arg2;
@end

