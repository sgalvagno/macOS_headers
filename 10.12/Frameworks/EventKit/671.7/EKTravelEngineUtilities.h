//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKTravelEngineUtilities : NSObject
{
}

+ (id)effectiveTravelAdvisoryTravelTimeDateForHypothesis:(id)arg1;
+ (double)effectiveTravelAdvisoryTravelTimeForHypothesis:(id)arg1;
+ (BOOL)date:(id)arg1 representsImmediateDepartureForHypothesis:(id)arg2;
+ (BOOL)date:(id)arg1 representsLatenessForHypothesis:(id)arg2;
+ (BOOL)date:(id)arg1 representsApproachingDepartureDateForHypothesis:(id)arg2;
+ (int)geoTransportTypeForCalLocationRoutingMode:(long long)arg1;
+ (id)authorizationStatusAsString:(int)arg1;
+ (unsigned long long)geoTrafficDensityForString:(id)arg1;
+ (id)geoTrafficDensityAsString:(unsigned long long)arg1;
+ (int)geoTransportTypeForString:(id)arg1;
+ (id)geoTransportTypeAsString:(int)arg1;
+ (long long)geoRouteHypothesisTravelStateForString:(id)arg1;
+ (id)formattedLocationCoordinates:(id)arg1;
+ (BOOL)travelStateIndicatesTravelingTowardDestination:(long long)arg1;

@end

