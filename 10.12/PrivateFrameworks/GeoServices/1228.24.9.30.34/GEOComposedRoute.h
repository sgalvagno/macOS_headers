//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapAccessRestrictions-Protocol.h>

@class GEOComposedWaypoint, GEOMapRegion, GEORoute, GEORouteAttributes, GEORouteSet, GEOStyleAttributes, GEOTransitDecoderData, GEOTransitSuggestedRoute, GEOZilchDecoder, NSArray, NSData, NSDate, NSHashTable, NSMutableArray, NSString;
@protocol GEOServerFormattedString, GEOTransitRoutingIncidentMessage;

@interface GEOComposedRoute : NSObject <GEOMapAccessRestrictions>
{
    NSHashTable *_observers;
    NSData *_pointData;
    BOOL _usesZilch;
    NSArray *_legs;
    NSArray *_steps;
    NSString *_name;
    NSData *_routeID;
    unsigned int _expectedTime;
    unsigned int _distance;
    NSDate *_startDate;
    NSArray *_trafficIncidents;
    NSArray *_trafficIncidentOffsets;
    NSString *_trafficDescription;
    NSString *_longTrafficDescription;
    GEORoute *_geoRoute;
    GEORouteSet *_routeSet;
    NSArray *_maneuverDisplaySteps;
    BOOL _maneuverDisplayEnabled;
    unsigned long long _currentDisplayStep;
    unsigned int _maneuverDisplayCount;
    double *_pointLengths;
    CDStruct_dc7a564b *_currentManeuverDisplayEndPoints;
    unsigned long long _selectedLegIndex;
    unsigned int _firstVisiblePoint;
    GEOMapRegion *_boundingMapRegion;
    NSMutableArray *_sections;
    NSMutableArray *_snappedPaths;
    GEOZilchDecoder *_zilchDecoder;
    GEOTransitDecoderData *_decoderData;
    GEOTransitSuggestedRoute *_suggestedRoute;
    GEOTransitSuggestedRoute *_originalSuggestedRoute;
    NSArray *_routePlanningArtworks;
    id <GEOTransitRoutingIncidentMessage> _transitRoutingIncidentMessage;
    BOOL _shouldShowSchedule;
    NSArray *_rideSelections;
    NSArray *_currentSectionOptions;
    id <GEOServerFormattedString> _previewDurationFormatString;
    id <GEOServerFormattedString> _pickingDurationFormatString;
    id <GEOServerFormattedString> _planningDescriptionFormatString;
    id <GEOServerFormattedString> _overviewSubtitleFormatString;
    id <GEOServerFormattedString> _transitDescriptionFormatString;
    NSArray *_transitAdvisories;
    unsigned long long _transitRouteBadge;
    BOOL _hasCheckedIsWalkingOnlyTransitRoute;
    BOOL _isWalkingOnlyTransitRoute;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
}

@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) BOOL isWalkingOnlyTransitRoute; // @synthesize isWalkingOnlyTransitRoute=_isWalkingOnlyTransitRoute;
@property(nonatomic) BOOL shouldShowSchedule; // @synthesize shouldShowSchedule=_shouldShowSchedule;
@property(readonly, nonatomic) unsigned long long transitRouteBadge; // @synthesize transitRouteBadge=_transitRouteBadge;
@property(readonly, nonatomic) NSArray *transitAdvisories; // @synthesize transitAdvisories=_transitAdvisories;
@property(readonly, nonatomic) id <GEOServerFormattedString> transitDescriptionFormatString; // @synthesize transitDescriptionFormatString=_transitDescriptionFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> overviewSubtitleFormatString; // @synthesize overviewSubtitleFormatString=_overviewSubtitleFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> planningDescriptionFormatString; // @synthesize planningDescriptionFormatString=_planningDescriptionFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> pickingDurationFormatString; // @synthesize pickingDurationFormatString=_pickingDurationFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> previewDurationFormatString; // @synthesize previewDurationFormatString=_previewDurationFormatString;
@property(readonly, nonatomic) NSArray *rideSelections; // @synthesize rideSelections=_rideSelections;
@property(readonly, retain, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage; // @synthesize transitRoutingIncidentMessage=_transitRoutingIncidentMessage;
@property(readonly, copy, nonatomic) NSArray *routePlanningArtworks; // @synthesize routePlanningArtworks=_routePlanningArtworks;
@property(readonly, nonatomic) GEOTransitSuggestedRoute *originalSuggestedRoute; // @synthesize originalSuggestedRoute=_originalSuggestedRoute;
@property(retain, nonatomic) GEOTransitSuggestedRoute *suggestedRoute; // @synthesize suggestedRoute=_suggestedRoute;
@property(readonly, nonatomic) double *pointLengths; // @synthesize pointLengths=_pointLengths;
@property(readonly, nonatomic) GEOMapRegion *boundingMapRegion; // @synthesize boundingMapRegion=_boundingMapRegion;
@property(readonly, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(readonly, nonatomic) unsigned int distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NSString *longTrafficDescription; // @synthesize longTrafficDescription=_longTrafficDescription;
@property(readonly, nonatomic) NSString *trafficDescription; // @synthesize trafficDescription=_trafficDescription;
@property(retain, nonatomic) NSArray *trafficIncidentOffsets; // @synthesize trafficIncidentOffsets=_trafficIncidentOffsets;
@property(retain, nonatomic) NSArray *trafficIncidents; // @synthesize trafficIncidents=_trafficIncidents;
@property(retain, nonatomic) NSData *routeID; // @synthesize routeID=_routeID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSArray *legs; // @synthesize legs=_legs;
@property(readonly, nonatomic) NSArray *steps; // @synthesize steps=_steps;
@property(readonly, nonatomic) BOOL usesZilch; // @synthesize usesZilch=_usesZilch;
@property(nonatomic) unsigned long long selectedLegIndex; // @synthesize selectedLegIndex=_selectedLegIndex;
@property(nonatomic) unsigned int firstVisiblePoint; // @synthesize firstVisiblePoint=_firstVisiblePoint;
@property(readonly, nonatomic) unsigned int maneuverDisplayCount; // @synthesize maneuverDisplayCount=_maneuverDisplayCount;
@property(retain, nonatomic) NSArray *maneuverDisplaySteps; // @synthesize maneuverDisplaySteps=_maneuverDisplaySteps;
@property(nonatomic) BOOL maneuverDisplayEnabled; // @synthesize maneuverDisplayEnabled=_maneuverDisplayEnabled;
@property(nonatomic) unsigned long long currentDisplayStep; // @synthesize currentDisplayStep=_currentDisplayStep;
@property(nonatomic) __weak GEORouteSet *routeSet; // @synthesize routeSet=_routeSet;
@property(readonly, nonatomic) GEORoute *geoRoute; // @synthesize geoRoute=_geoRoute;
@property(readonly, nonatomic) BOOL allowsNetworkTileLoad;
- (void)updateRouteWithRideSelections:(id)arg1;
- (void)_rebuildRouteForRideChange;
- (void)selectRide:(unsigned long long)arg1 forBoardStep:(id)arg2;
- (void)selectRide:(unsigned long long)arg1 forTripLeg:(id)arg2;
- (id)boardStepForSection:(id)arg1;
- (id)sectionOptionForTripLeg:(id)arg1;
- (id)sectionOptionForTripIndex:(unsigned long long)arg1;
- (unsigned long long)_tripIndexForTripLeg:(id)arg1;
- (void)_updateSectionOptions;
- (void)initRideSelections;
- (id)_nextOptionForOption:(id)arg1 rideIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) BOOL hasRideClusters;
- (BOOL)isStopInTerminalStructure:(id)arg1;
- (id)getStationForStop:(id)arg1;
- (id)getStationForHall:(id)arg1;
- (id)getHallForStop:(id)arg1;
- (BOOL)isSnapping;
- (void)forEachSnappedPath:(CDUnknownBlockType)arg1;
- (void)clearSnappedPathsForObserver:(id)arg1;
- (void)clearPoints;
- (id)getSnappedPathsForLocation:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 observer:(id)arg3;
- (id)getSnappedPathsForVisibleRect:(CDStruct_90e2a262)arg1 rectsToSnap:(CDStruct_90e2a262 *)arg2 rectsToSnapCount:(unsigned long long)arg3 observer:(id)arg4;
- (BOOL)supportsSnapping;
- (void)_addPaths:(id)arg1 forObserver:(id)arg2;
- (void)_snapPaths:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addSnappedPolylinePathsForSection:(id)arg1 toPaths:(id)arg2 rects:(CDStruct_90e2a262 *)arg3 rectsCount:(unsigned long long)arg4;
- (BOOL)_meetsMinimumPathLengthBetweenStart:(unsigned int)arg1 end:(unsigned int)arg2;
- (void)roadFeaturesForRouteCoordinate:(struct PolylineCoordinate)arg1 distanceAhead:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)setupRoadSegmentIdsForRouteHintFromMatch:(id)arg1 distanceAhead:(double)arg2 roadSegmentIdGenerator:(CDUnknownBlockType)arg3 handler:(CDUnknownBlockType)arg4;
- (struct PolylineCoordinate)_findRouteCoordinateWithOffset:(float)arg1 aPos:(const Matrix_8746f91e *)arg2 aCoord:(const struct PolylineCoordinate *)arg3 bCoord:(const struct PolylineCoordinate *)arg4 pointOnSegment:(const Matrix_8746f91e *)arg5 bounds:(const CDStruct_90e2a262 *)arg6;
- (id)routeMatchAtDistance:(double)arg1 from:(id)arg2 stopAtEndOfTunnel:(BOOL)arg3 stopAtEndOfManeuver:(BOOL)arg4 date:(id)arg5;
- (CDStruct_c3b9c2ee)locationAtDistance:(double)arg1 from:(id)arg2;
- (double)courseAtRouteCoordinateIndex:(unsigned int)arg1;
- (BOOL)checkDrivingArrivalForCoordinate:(CDStruct_c3b9c2ee)arg1 coordinateOnRoute:(CDStruct_c3b9c2ee)arg2 routePointIndex:(unsigned int)arg3 distanceFromRoute:(double)arg4 arrivalMapRegion:(id)arg5 checkArrivalRadius:(BOOL)arg6 checkDistanceAlongRoute:(BOOL)arg7 checkRoadAccessPoints:(BOOL)arg8 isOnRoute:(BOOL)arg9;
- (double)remainingDistanceAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)remainingTimeAlongRouteFromStepIndex:(unsigned long long)arg1 currentStepRemainingDistance:(double)arg2;
- (double)distanceBetweenStep:(id)arg1 andStep:(id)arg2;
- (double)distanceBetweenLocation:(CDStruct_c3b9c2ee)arg1 nextPointIndex:(unsigned int)arg2 toPointIndex:(unsigned int)arg3;
- (double)distanceBetweenRoutePointIndex:(unsigned int)arg1 toPointIndex:(unsigned int)arg2;
@property(readonly, nonatomic) int routeType;
- (id)zilchDataFromStepIndex:(unsigned long long)arg1;
- (int)transportTypeForStep:(id)arg1;
@property(readonly, nonatomic) NSArray *routeNames;
- (CDStruct_ffa96740 *)roadFeatureAtPointIndex:(unsigned int)arg1;
- (double)approximateRoadWidthAtPointIndex:(unsigned int)arg1;
- (int)formOfWayAt:(unsigned int)arg1;
- (void)getFormOfWay:(int *)arg1 roadClass:(int *)arg2 at:(unsigned int)arg3;
- (void)maneuverDisplayHasChanged;
@property(nonatomic) unsigned int historicTravelTime;
@property(readonly, nonatomic) BOOL hasHistoricTravelTime;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(readonly, nonatomic) BOOL hasExpectedTime;
- (void)notifyTrafficUpdated;
- (unsigned long long)trafficColorOffsetAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int *trafficColorOffsets;
@property(readonly, nonatomic) unsigned long long trafficColorOffsetsCount;
@property(readonly, nonatomic) unsigned int *trafficColors;
@property(readonly, nonatomic) unsigned long long trafficColorsCount;
- (id)legForPointIndex:(unsigned int)arg1;
- (id)legForStepIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForStepIndex:(unsigned long long)arg1;
- (unsigned long long)legIndexForPointIndex:(unsigned long long)arg1;
- (unsigned long long)stepIndexForPointIndex:(unsigned long long)arg1;
- (id)stepForPointIndex:(unsigned int)arg1;
- (id)stepAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long stepsCount;
- (double)stepDistanceFromPoint:(struct PolylineCoordinate)arg1 toPoint:(struct PolylineCoordinate)arg2;
- (double)distanceFromPointIndex:(unsigned long long)arg1 toPointIndex:(unsigned long long)arg2;
- (double)distanceFromPoint:(struct PolylineCoordinate)arg1 toPoint:(struct PolylineCoordinate)arg2;
- (struct PolylineCoordinate)routeCoordinateAtDistance:(double)arg1 beforeRouteCoordinate:(struct PolylineCoordinate)arg2;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRouteCoordinate:(struct PolylineCoordinate)arg2;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1 fromRoutePoint:(unsigned long long)arg2;
- (CDStruct_c3b9c2ee)pointAtRouteCoordinate:(struct PolylineCoordinate)arg1;
- (struct PolylineCoordinate)coordinateAtOffset:(double)arg1;
- (CDStruct_c3b9c2ee)pointAt:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int pointCount;
@property(readonly, nonatomic) void *controlPoints;
@property(readonly, nonatomic) unsigned long long indexOfSuggestedRoute;
@property(readonly, nonatomic) GEOTransitDecoderData *decoderData; // @synthesize decoderData=_decoderData;
- (CDStruct_dc7a564b)maneuverDisplayEndpointsAtIndex:(unsigned long long)arg1;
- (_Bool)_needsCornerOffsetAt:(unsigned int)arg1;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1 startOffsetInPoints:(double)arg2 endOffsetInPoints:(double)arg3 roadWidthInPoints:(double)arg4;
- (void)updateManeuverDisplayEndpointsAtMetersPerPoint:(double)arg1;
- (void)initializePointLengths;
- (void)_initializeManeuverDisplaySteps;
@property(readonly, nonatomic) NSArray *baseTransitFares;
@property(readonly, nonatomic) unsigned long long numberOfTransitStops;
@property(readonly, nonatomic) NSArray *routeDescriptions;
@property(readonly, nonatomic) NSArray *advisoryNotices;
- (void)setBoundingMapRegion:(id)arg1;
- (void)setSections:(id)arg1;
- (id)pointData;
- (void)setPointData:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setLegs:(id)arg1;
- (void)setUsesZilch:(BOOL)arg1;
- (void)setIsWalkingOnlyTransitRoute:(BOOL)arg1;
@property(readonly, nonatomic) NSData *directionsResponseID;
@property(readonly, nonatomic) BOOL isNavigable;
@property(readonly, nonatomic) GEOStyleAttributes *styleAttributes;
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) int transportType;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (void)_populateArtworkForSuggestedRoute:(id)arg1 decoderData:(id)arg2;
- (id)initWithSuggestedRoute:(id)arg1 decoderData:(id)arg2;
- (id)initWithRoute:(id)arg1;
- (id)initWithCompanionRoute:(id)arg1;
- (id)firstDepartureTimeOfNextRouteStepAfterCurrentStep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

