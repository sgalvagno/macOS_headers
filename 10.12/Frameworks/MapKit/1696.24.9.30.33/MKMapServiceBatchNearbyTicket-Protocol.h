//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapServiceTraits, GEOSearchCategory, NSString;

@protocol MKMapServiceBatchNearbyTicket <NSObject>
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(void (^)(NSMapTable *, NSError *))arg1 networkActivity:(void (^)(BOOL))arg2;
- (NSString *)resultSectionHeaderForCategory:(GEOSearchCategory *)arg1;
@end

