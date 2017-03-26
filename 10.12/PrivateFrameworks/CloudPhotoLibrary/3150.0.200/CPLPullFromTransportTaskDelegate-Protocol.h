//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineSyncTaskDelegate-Protocol.h>

@class CPLPullFromTransportTask, NSData;
@protocol CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask;

@protocol CPLPullFromTransportTaskDelegate <CPLEngineSyncTaskDelegate>
- (id <CPLEngineTransportDownloadBatchTask>)task:(CPLPullFromTransportTask *)arg1 wantsToDownloadBatchesFromSyncAnchor:(NSData *)arg2 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg3 completionHandler:(void (^)(NSData *, BOOL, NSError *))arg4;
- (id <CPLEngineTransportQueryTask>)task:(CPLPullFromTransportTask *)arg1 wantsToQueryTaskForCursor:(NSData *)arg2 class:(Class)arg3 progressHandler:(void (^)(CPLChangeBatch *, NSData *))arg4 completionHandler:(void (^)(NSError *))arg5;
- (BOOL)taskSupportsBatchDownloadPipelining:(CPLPullFromTransportTask *)arg1;
@end

