//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class NSArray;
@protocol VKCustomFeatureDataSource;

@protocol MDSnapshotMap <NSObject>
@property(retain, nonatomic) NSArray *customFeatureDataSources;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) unsigned char labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (void)removeCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (void)addCustomFeatureDataSource:(id <VKCustomFeatureDataSource>)arg1;
- (BOOL)isShowingNoDataPlaceholders;
@end

