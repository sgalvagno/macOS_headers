//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoAnalysis/PHAAssetProcessingJob.h>

@interface PHAAcknowledgeDeletionsWorkerJob : PHAAssetProcessingJob
{
}

- (void)finish;
- (void)prepare;
- (BOOL)stopProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (BOOL)startProcessingOnWorker:(id)arg1 withError:(id *)arg2;
- (void)_deleteStateRecordsForSuccessfulResults;
- (void)_deleteStateRecordsForLocalUUIDs:(id)arg1;

@end

