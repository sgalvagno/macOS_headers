//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationManagerObserver-Protocol.h>
#import <Navigation/MNNavigationSessionObserver-Protocol.h>

@class GEOComposedRoute, MNLocation, MNRouteManager, NSString;
@protocol MNGuidanceLevelUpdaterDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceLevelUpdater : NSObject <MNLocationManagerObserver, MNNavigationSessionObserver>
{
    id <MNGuidanceLevelUpdaterDelegate> _delegate;
    int _guidanceLevel;
    MNRouteManager *_routeManager;
    int _navigationType;
    GEOComposedRoute *_route;
    MNLocation *_lastLocation;
}

@property(nonatomic, setter=_setGuidanceLevel:) int guidanceLevel; // @synthesize guidanceLevel=_guidanceLevel;
@property(nonatomic) __weak id <MNGuidanceLevelUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (BOOL)_shouldTrackForTime;
- (BOOL)_shouldTrackForLocation;
- (void)_update;
- (void)updateWithRoutePlanningDetails:(id)arg1;
- (void)stopUpdating;
- (void)startUpdating;
- (void)dealloc;
- (id)initWithRouteManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

