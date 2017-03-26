//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOMapTransitPoint-Protocol.h>

@class GEOMapRequest;

@protocol GEOMapTransitAccessPoint <GEOMapTransitPoint>
@property(readonly, nonatomic) unsigned short accessType;
@property(readonly, nonatomic) unsigned char entranceExitType;
@property(readonly, nonatomic) double groundRadius;
@property(readonly, nonatomic) unsigned long long stationID;
- (GEOMapRequest *)findStation:(void (^)(id <GEOMapTransitStation>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
- (GEOMapRequest *)findStops:(void (^)(id <GEOMapTransitStop>))arg1 completionHandler:(void (^)(GEOMapRequest *))arg2;
@end

