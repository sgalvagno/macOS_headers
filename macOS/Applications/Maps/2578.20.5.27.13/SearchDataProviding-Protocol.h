//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GEOMapServiceTraits, GEORetainedSearchMetadata, GEOSearchCategory, MKLocalSearchCompletion, NSString, PersonalizedItemManager, RAPAutoCompleteSearchManager, UserLocationSearchResult;

@protocol SearchDataProviding <NSObject>
@property(retain, nonatomic) PersonalizedItemManager *mapPersonalizedItems;
@property(retain, nonatomic) RAPAutoCompleteSearchManager *autoCompleteSearchRAPManager;
@property(retain, nonatomic) GEORetainedSearchMetadata *retainedSearchMetadata;
@property(retain, nonatomic) UserLocationSearchResult *userLocationSearchResult;
@property(retain, nonatomic) GEOSearchCategory *inputCategory;
@property(nonatomic) unsigned int searchMode;
@property(readonly, nonatomic) BOOL hasResults;
- (void)setSearchCompletionFilterType:(long long)arg1;
- (void)clearAutocompleteResults;
- (void)reset;
- (void)setInputText:(NSString *)arg1 tappedQuerySuggestionCompletion:(MKLocalSearchCompletion *)arg2 isRetainQuery:(BOOL)arg3 traits:(GEOMapServiceTraits *)arg4 source:(int)arg5;
- (void)setInputText:(NSString *)arg1 traits:(GEOMapServiceTraits *)arg2 source:(int)arg3;
@end

