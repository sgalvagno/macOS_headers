//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/NSObject-Protocol.h>

@class NSDate, NSString;

@protocol EKGEORouteHypothesis <NSObject>
@property(nonatomic) long long travelState;
@property(retain, nonatomic) NSString *trafficDensityDescription;
@property(nonatomic) unsigned long long currentTrafficDensity;
@property(nonatomic) BOOL supportsLiveTraffic;
@property(retain, nonatomic) NSString *routeName;
@property(nonatomic) double aggressiveTravelTime;
@property(retain, nonatomic) NSDate *aggressiveDepartureDate;
@property(nonatomic) double estimatedTravelTime;
@property(retain, nonatomic) NSDate *suggestedDepartureDate;
@property(nonatomic) double conservativeTravelTime;
@property(retain, nonatomic) NSDate *conservativeDepartureDate;
@property(nonatomic) int transportType;
@end

