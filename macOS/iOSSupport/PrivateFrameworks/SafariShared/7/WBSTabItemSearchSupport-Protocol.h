//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol WBSTabItemSearchSupport <NSObject>
@property(nonatomic) BOOL matchedLastSearch;
@property(copy, nonatomic) NSString *lastSearchTerm;
@property(copy, nonatomic) NSArray *URLStringComponents;
@property(copy, nonatomic) NSString *URLStringForLastSearch;
@property(readonly, nonatomic) NSString *URLString;
@property(copy, nonatomic) NSArray *titleWords;
@property(copy, nonatomic) NSString *titleForLastSearch;
@property(readonly, copy, nonatomic) NSString *title;
@end

