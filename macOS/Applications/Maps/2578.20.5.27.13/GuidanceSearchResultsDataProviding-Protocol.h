//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;
@protocol NavigationRouteHistoryInfoProviding;

@protocol GuidanceSearchResultsDataProviding <NSObject>
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (void)loadSearchResultsWithRouteInfo:(id <NavigationRouteHistoryInfoProviding>)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
@end

