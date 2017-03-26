//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHCollection.h>

@class CLLocation, NSArray, NSDate, NSString, PHQuery;

@interface PHAssetCollection : PHCollection
{
    NSArray *_assets;
    PHQuery *_query;
    NSString *_transientIdentifier;
    NSString *_localizedTitle;
    NSString *_localizedSubtitle;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    NSString *_titleFontName;
    unsigned long long _estimatedAssetCount;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_creationDate;
    CLLocation *_approximateLocation;
    NSArray *_localizedLocationNames;
}

+ (unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2;
+ (unsigned long long)titleFontNameHashFromString:(id)arg1;
+ (unsigned long long)titleFontNameHashFromDate:(id)arg1;
+ (long long)titleCategoryForTitleFontName:(id)arg1;
+ (id)titleFontNameForTitleCategory:(long long)arg1;
+ (id)defaultTitleFontNames;
+ (id)graphOptionsForTransientAssetCollection:(id)arg1 needsCompleteMomentsInfo:(BOOL)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
+ (id)fetchMemoriesWithOptions:(id)arg1;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)descriptionOfTitleCategory:(long long)arg1;
+ (id)identifierCode;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) PHQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property(readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=_approximateLocation;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount; // @synthesize estimatedAssetCount=_estimatedAssetCount;
@property(readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property(readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long titleFontNameHash;
@property(readonly, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
- (id)description;
@property(readonly, nonatomic) long long titleCategory;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (BOOL)canContainCollections;
- (BOOL)canContainAssets;
- (id)initTransientWithQuery:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5;
- (id)initTransientWithFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5;
- (id)initTransientWithAssets:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5 photoLibrary:(id)arg6;

@end

