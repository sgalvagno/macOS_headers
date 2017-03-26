//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@class GEOComposedRoute, GEOComposedTransitTripRouteLeg, NSArray;

@protocol GEOComposedRouteObserver <NSObject>
- (void)composedRoute:(GEOComposedRoute *)arg1 changedSelectedRideInClusteredLeg:(GEOComposedTransitTripRouteLeg *)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)composedRoute:(GEOComposedRoute *)arg1 selectedSections:(NSArray *)arg2 deselectedSections:(NSArray *)arg3;
- (void)composedRouteUpdatedTraffic:(GEOComposedRoute *)arg1;
- (void)composedRouteUpdatedSnappedPaths:(GEOComposedRoute *)arg1;
@end

