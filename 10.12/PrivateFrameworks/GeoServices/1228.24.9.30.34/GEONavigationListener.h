//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEONavigationServerObserverXPCInterface-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface GEONavigationListener : NSObject <GEONavigationServerObserverXPCInterface>
{
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _routeSummaryUpdatedHandler;
    CDUnknownBlockType _transitSummaryUpdatedHandler;
    CDUnknownBlockType _guidanceStateUpdatedHandler;
    CDUnknownBlockType _activeRouteDetailsDataUpdatedHandler;
    CDUnknownBlockType _stepIndexUpdatedHandler;
    CDUnknownBlockType _rideSelectionsUpdatedHandler;
    int _navigationStartedToken;
    int _navigationStoppedToken;
}

@property(copy, nonatomic) CDUnknownBlockType rideSelectionsUpdatedHandler; // @synthesize rideSelectionsUpdatedHandler=_rideSelectionsUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType stepIndexUpdatedHandler; // @synthesize stepIndexUpdatedHandler=_stepIndexUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType activeRouteDetailsDataUpdatedHandler; // @synthesize activeRouteDetailsDataUpdatedHandler=_activeRouteDetailsDataUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType guidanceStateUpdatedHandler; // @synthesize guidanceStateUpdatedHandler=_guidanceStateUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType transitSummaryUpdatedHandler; // @synthesize transitSummaryUpdatedHandler=_transitSummaryUpdatedHandler;
@property(copy, nonatomic) CDUnknownBlockType routeSummaryUpdatedHandler; // @synthesize routeSummaryUpdatedHandler=_routeSummaryUpdatedHandler;
- (void)routeSummaryUpdatedWithRideSelectionData:(id)arg1;
- (void)routeSummaryUpdatedWithStepIndexData:(id)arg1;
- (void)routeSummaryUpdatedWithActiveRouteDetailsData:(id)arg1;
- (void)routeSummaryUpdatedWithGuidanceStateData:(id)arg1;
- (void)routeSummaryUpdatedWithTransitSummaryData:(id)arg1;
- (void)routeSummaryUpdatedWithNavigationRouteSummaryData:(id)arg1;
- (void)_connectToDaemonIfNeeded;
- (void)_close;
- (void)_open;
- (void)requestRideSelections;
- (void)requestStepIndex;
- (void)requestActiveRouteDetailsData;
- (void)requestGuidanceState;
- (void)requestTransitSummary;
- (void)requestRouteSummary;
- (void)dealloc;
- (id)initWithQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

