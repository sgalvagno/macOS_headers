//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/_GEORouteMatchUpdater.h>

@class GEOComposedTransitTripRouteStep;

__attribute__((visibility("hidden")))
@interface _GEORouteMatchUpdater_LineProgression : _GEORouteMatchUpdater
{
    GEOComposedTransitTripRouteStep *_boardStep;
    GEOComposedTransitTripRouteStep *_alightStep;
    struct PolylineCoordinate _startRouteCoordinate;
}

- (id).cxx_construct;
- (unsigned long long)priority;
- (BOOL)updateRouteMatch:(id)arg1 previousRouteMatch:(id)arg2 forLocation:(id)arg3;
- (void)dealloc;
- (id)initWithTransitRouteMatcher:(id)arg1 tripLeg:(id)arg2;

@end

