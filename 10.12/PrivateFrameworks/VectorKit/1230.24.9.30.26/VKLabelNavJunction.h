//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSArray, NSMutableArray, NSString, VKLabelNavRoad, VKLabelNavRoadLabel, VKLabelTile;

__attribute__((visibility("hidden")))
@interface VKLabelNavJunction : NSObject <VKLabelNavFeature>
{
    VKLabelTile *_tile;
    Matrix_8746f91e _tileCoordinate;
    CDStruct_3b01f0aa *_geoJunction;
    struct PolylineCoordinate _routeOffset;
    NSMutableArray *_roads;
    VKLabelNavRoad *_incomingRoad;
    VKLabelNavRoad *_outgoingRoad;
    float _distanceFromPreviousShieldLabel;
    int _preferredLabelPlacement;
    BOOL _isOnDualCarriageway;
    BOOL _hasSharedRouteDirection;
    Matrix_8746f91e _sharedRouteDirection;
    BOOL _foundRoads;
    BOOL _isOverpass;
    BOOL _isRouteOverpass;
    int _largestRoadClass;
    struct {
        CDStruct_e41bf108 _field1;
        CDStruct_b2fbf00d _field2;
        CDStruct_b2fbf00d _field3;
        CDStruct_183601bc *_field4;
        float _field5;
        unsigned int _field6;
        unsigned char _field7;
        char _field8;
        char _field9;
    } *_labelFeature;
    NSString *_name;
    VKLabelNavRoadLabel *_junctionSign;
    BOOL _areLabelsDisabled;
    unsigned long long _depthFromRoute;
    double _worldUnitsPerMeter;
    VKLabelNavJunction *_overpassJunction;
    char _cachedSignVisibility[2];
    char _isVisibilityCached[2];
    BOOL _isVisible;
    Matrix_6e1d3589 _worldCoordinate;
    double _sortValue;
    BOOL _isRouteRefineJunction;
}

@property(readonly, nonatomic) VKLabelNavRoadLabel *junctionSign; // @synthesize junctionSign=_junctionSign;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL isRouteRefineJunction; // @synthesize isRouteRefineJunction=_isRouteRefineJunction;
@property(nonatomic) BOOL isRouteOverpass; // @synthesize isRouteOverpass=_isRouteOverpass;
@property(readonly, nonatomic) BOOL isOverpass; // @synthesize isOverpass=_isOverpass;
@property(nonatomic) VKLabelNavJunction *overpassJunction; // @synthesize overpassJunction=_overpassJunction;
@property(nonatomic) unsigned long long depthFromRoute; // @synthesize depthFromRoute=_depthFromRoute;
@property(nonatomic) Matrix_8746f91e sharedRouteDirection; // @synthesize sharedRouteDirection=_sharedRouteDirection;
@property(readonly, nonatomic) BOOL hasSharedRouteDirection; // @synthesize hasSharedRouteDirection=_hasSharedRouteDirection;
@property(nonatomic) BOOL isOnDualCarriageway; // @synthesize isOnDualCarriageway=_isOnDualCarriageway;
@property(nonatomic) float distanceFromPreviousShieldLabel; // @synthesize distanceFromPreviousShieldLabel=_distanceFromPreviousShieldLabel;
@property(nonatomic) int preferredLabelPlacement; // @synthesize preferredLabelPlacement=_preferredLabelPlacement;
@property(readonly, nonatomic) VKLabelNavRoad *incomingRoad; // @synthesize incomingRoad=_incomingRoad;
@property(readonly, nonatomic) VKLabelNavRoad *outgoingRoad; // @synthesize outgoingRoad=_outgoingRoad;
@property(nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) Matrix_8746f91e tileCoordinate; // @synthesize tileCoordinate=_tileCoordinate;
@property(readonly, nonatomic) const CDStruct_3b01f0aa *geoJunction; // @synthesize geoJunction=_geoJunction;
@property(readonly, nonatomic) VKLabelTile *tile; // @synthesize tile=_tile;
- (id).cxx_construct;
@property(readonly, nonatomic) BOOL isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) BOOL isInGuidance;
@property(readonly, nonatomic) BOOL isStartOfRoadName;
- (void)createLabelWithNavContext:(struct NavContext *)arg1 isDrivingSideRight:(BOOL)arg2 artworkCache:(struct VKLabelNavArtworkCache *)arg3;
- (void)prepareStyleVarsWithContext:(struct NavContext *)arg1;
@property(readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
- (void)layoutWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1;
- (void)_updateWithNavContext:(struct NavContext *)arg1 threshold:(double)arg2;
- (Matrix_6e1d3589)_anchorCoordinateForSignOrientation:(unsigned char)arg1;
- (unsigned char)_signOrientationWithDrivingSide:(BOOL)arg1;
@property(readonly, nonatomic) double worldUnitsPerMeter; // @synthesize worldUnitsPerMeter=_worldUnitsPerMeter;
@property(readonly, nonatomic) int requiredLabelPlacement;
- (void)evaluateCrossStreetsUsingRouteJunction:(id)arg1;
- (void)evaluateCrossStreets;
- (void)addRouteEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(BOOL)arg2;
- (void)findRoads;
@property(readonly, nonatomic) int largestRoadClass;
@property(readonly, nonatomic) NSArray *roads; // @synthesize roads=_roads;
@property(readonly, nonatomic) BOOL isMultiRoadIntersection;
@property(readonly, nonatomic) BOOL isIntraRamp;
@property(readonly, nonatomic) BOOL isOffRouteGraph;
@property(readonly, nonatomic) BOOL isAwayFromRoute;
@property(readonly, nonatomic) BOOL isRamp;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) BOOL isIntersection;
@property(readonly, nonatomic) BOOL isOnRoute;
@property(readonly, nonatomic) BOOL isRoadTerminus;
@property(readonly, nonatomic) BOOL isTileEdgeJunction;
- (BOOL)matchesLocationForJunction:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithRoadEdge:(const CDStruct_91f75a7f *)arg1 atA:(BOOL)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;
- (id)initWithGEOJunction:(CDStruct_3b01f0aa *)arg1 routeOffset:(struct PolylineCoordinate)arg2 tile:(id)arg3;

@end

