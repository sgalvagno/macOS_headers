//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, VKPolylineOverlay, VKPolylineOverlayRenderRegion;
@protocol VKRouteLineObserverProtocol;

__attribute__((visibility("hidden")))
@interface VKRouteLine : NSObject
{
    BOOL _matchToRoads;
    BOOL _hasNewRoadMatches;
    Box_3d7e3c2c _bounds;
    Matrix_08d701e4 _inverseMatrix;
    VKPolylineOverlay *_overlay;
    double _boundsUnitsPerMeter;
    double _metersPerPoint;
    double _boundsInWorldUnit;
    double _simplificationEpsilonPoints;
    double _viewUnitsPerPoint;
    id <VKRouteLineObserverProtocol> _observer;
    vector_8449fd58 _sections;
    struct fast_shared_ptr<md::RouteLineSection> _userLocationSection;
    struct PolylineCoordinate _userLocationIndex;
    Matrix_8746f91e _userLocation;
    double _lastTrafficTimeStamp;
    NSSet *_retainedTiles;
    VKPolylineOverlayRenderRegion *_renderRegion;
}

@property(nonatomic) id <VKRouteLineObserverProtocol> observer; // @synthesize observer=_observer;
@property(nonatomic) double simplificationEpsilonPoints; // @synthesize simplificationEpsilonPoints=_simplificationEpsilonPoints;
@property BOOL hasNewRoadMatches; // @synthesize hasNewRoadMatches=_hasNewRoadMatches;
@property(nonatomic) VKPolylineOverlay *overlay; // @synthesize overlay=_overlay;
@property(readonly, nonatomic) Box_3d7e3c2c bounds; // @synthesize bounds=_bounds;
@property(readonly, nonatomic) vector_8449fd58 sections; // @synthesize sections=_sections;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateBounds:(id)arg1;
- (void)forEachSection:(CDUnknownBlockType)arg1;
- (void)splitRouteLineAtAnnotation:(id)arg1;
@property(readonly, nonatomic) BOOL needsUpdate;
- (BOOL)isTrafficUptoDate:(double)arg1;
- (BOOL)isTrafficUpToDate;
- (void)createMeshIfNecessary:(long long)arg1;
- (void)generateArrowsForManeuverDisplayMode:(int)arg1 routeLineWidth:(double)arg2;
- (BOOL)buildRouteLineForPainter:(id)arg1 keysInView:(id)arg2 tiles:(id)arg3 containerModel:(id)arg4 viewUnitsPerPoint:(double)arg5 force:(BOOL)arg6 selected:(BOOL)arg7;
- (void)_updateTilesCovered:(id)arg1;
- (void)dealloc;

@end

