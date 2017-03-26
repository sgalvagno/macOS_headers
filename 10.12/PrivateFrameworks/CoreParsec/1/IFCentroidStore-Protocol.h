//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class IFFeatureMatch, NSArray, NSDate;
@protocol IFCentroidStore;

@protocol IFCentroidStore <NSObject>
+ (id <IFCentroidStore>)defaultStore;
- (unsigned long long)deleteFeatureVectorsInExcessOf:(unsigned long long)arg1;
- (unsigned long long)deleteFeatureVectorsOlderThan:(NSDate *)arg1;
- (unsigned long long)deleteFeatureVectorsWithFeatureLike:(IFFeatureMatch *)arg1;
- (unsigned long long)deleteFeatureVectors;
- (BOOL)addFeatureVectors:(NSArray *)arg1;
@end

