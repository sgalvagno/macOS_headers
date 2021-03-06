//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class ImageDB;

@interface IPPeopleModel : NSObject
{
    struct vector<IPPersonInfo, std::__1::allocator<IPPersonInfo>> *_faceVector;
    vector_4b7ceedc *_filteredLookup;
    int _filterMode;
    int _sortOrder;
    BOOL _sortAscending;
    BOOL _needResort;
    ImageDB *_database;
    struct KeySet *_representedImageKeys;
    struct KeySet *_representedFaceKeys;
}

+ (void)_tearDownPersonInfo:(CDStruct_39edc211 *)arg1;
+ (void)setupPersonInfo:(CDStruct_39edc211 *)arg1;
- (void)setFilterMode:(int)arg1;
- (void)setDatabase:(id)arg1;
- (void)setSortAscending:(BOOL)arg1;
- (void)setSortOrder:(int)arg1;
- (unsigned long long)keyOfPersonAtIndex:(long long)arg1;
- (CDStruct_39edc211 *)personAtIndex:(long long)arg1;
- (long long)indexOfPersonWithFaceKey:(long long)arg1;
- (CDStruct_39edc211 *)personWithFaceKey:(long long)arg1;
- (long long)faceIndexForPhotoKey:(unsigned long long)arg1 ofPersonAtIndex:(long long)arg2;
- (long long)personCount;
- (void)movePeopleWithKeys:(id)arg1 toIndex:(long long)arg2;
- (void)copyCurrentOrderToManual;
- (void)_resort;
- (id)description;
- (void)ensureFilteredLookup;
- (void)_clearFilteredLookup;
- (void)_clearFaceVector;
- (void)addPersonInfo:(CDStruct_39edc211 *)arg1;
- (void)dealloc;
- (id)init;

@end

