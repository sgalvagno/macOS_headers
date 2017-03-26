//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreParsec/IFCentroidStore-Protocol.h>
#import <CoreParsec/IFCentroidStoreCounting-Protocol.h>

@class IFCentroidModelParameters, IFFeature, IFFeatureVector, NSDictionary;
@protocol IFVector;

@protocol IFCentroidStoreInternal <IFCentroidStore, IFCentroidStoreCounting>
@property(retain) IFCentroidModelParameters *parameters;
- (unsigned long long)indexForFeature:(IFFeature *)arg1;
- (IFFeature *)featureForIndex:(unsigned long long)arg1;
- (id <IFVector>)vectorFromFeatureVector:(IFFeatureVector *)arg1;
- (BOOL)setCentroidFeature:(IFFeature *)arg1;
- (double)centroidScoreForFeature:(IFFeature *)arg1;
- (id <IFVector>)centroidWithScaling:(NSDictionary *)arg1;
- (id <IFVector>)centroid;
- (void)enumerateStateWithBlock:(void (^)(IFFeature *, unsigned long long, NSDictionary *, id *, char *))arg1;
@end

