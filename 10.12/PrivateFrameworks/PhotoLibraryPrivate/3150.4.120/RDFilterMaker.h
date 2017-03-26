//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RDLibrary;

@interface RDFilterMaker : NSObject
{
    BOOL _hasIsHiddenCriteria;
    RDLibrary *_library;
}

@property BOOL hasIsHiddenCriteria; // @synthesize hasIsHiddenCriteria=_hasIsHiddenCriteria;
@property __weak RDLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)filterImplicitAlbum:(id)arg1;
- (id)filterForIsHidden:(unsigned char)arg1;
- (id)filterForShowInLibrary:(unsigned char)arg1;
- (id)filterForTrash:(unsigned char)arg1;
- (id)makeFilterFromSingleItemQuery:(id)arg1;
- (id)propertyKeyPathFromApertureMetadataName:(id)arg1 fromTable:(id)arg2;
- (id)makeFilterFromMultiItemQuery:(id)arg1;
- (id)makeDateFilter:(id)arg1 forTable:(id)arg2 property:(id)arg3;
- (id)scopeFilter:(id)arg1 toAlbum:(id)arg2;
- (unsigned char)convertQualifierToBinaryComparator:(long long)arg1;
- (unsigned short)convertSubTypeStringToMediaSubType:(id)arg1;
- (id)addDefaultLibraryFilters:(id)arg1 forAlbum:(id)arg2 showHiddenVersions:(BOOL)arg3;
- (id)makeFilterFromAlbum:(id)arg1 withDefaultLibraryFilters:(BOOL)arg2 showHiddenVersions:(BOOL)arg3;
- (id)makeFilterFromSingleItemQuery:(id)arg1 withDefaultLibraryFilters:(BOOL)arg2 showHiddenVersions:(BOOL)arg3;
- (id)makeFilterFromMultiItemQuery:(id)arg1 withDefaultLibraryFilters:(BOOL)arg2 showHiddenVersions:(BOOL)arg3;
- (id)makeFilterFromAlbum:(id)arg1 showHiddenVersions:(BOOL)arg2;
- (id)makeFilterFromMultiItemQuery:(id)arg1 showHiddenVersions:(BOOL)arg2;
- (id)initWithLibrary:(id)arg1;

@end

