//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLBatchExtractionStep.h>

@class NSMutableSet;

@interface CPLNewAssetExtractionStep : CPLBatchExtractionStep
{
    NSMutableSet *_alreadySeenMasterIdentifiers;
    unsigned long long _maximumCount;
}

@property(readonly, nonatomic) unsigned long long maximumCount; // @synthesize maximumCount=_maximumCount;
- (void).cxx_destruct;
- (id)shortDescription;
- (BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1;
- (void)reset;
- (BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithStorage:(id)arg1 maximumCount:(unsigned long long)arg2;

@end

