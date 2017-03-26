//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKGlobeCameraController : VKScreenCameraController <VKGesturingCameraController>
{
    struct GlobeView {
        CDUnknownFunctionPointerType *;
        struct AnchorManagerPrivate *;
        struct Scene *;
        struct Context *;
        struct DtmCacheNode *;
        struct DtmRequestManager *;
        struct FreezeViewNode *;
        struct Projection;
        struct FrameLatLon;
        _Bool;
        basic_string_805fe43b;
        basic_string_805fe43b;
        struct vector<altitude::TileBound, std::__1::allocator<altitude::TileBound>>;
        struct vector<altitude::SimpleTileKey, std::__1::allocator<altitude::SimpleTileKey>>;
        _Bool;
        unsigned int;
        unsigned int;
        unsigned int;
        unsigned int;
        struct VKClassicGlobeCanvas *;
        _Bool;
        _Bool;
        int;
        struct AnimationManager;
        struct Timer;
        double;
        _Bool;
        double;
        double;
        double;
        struct FrameLatLon;
        struct C3mmRequestManager *;
        struct RenderableGroup *;
        unsigned int;
        double;
        _Bool;
        _Bool;
        struct LabelDataManagerPrivate *;
        _Bool;
        _Bool;
        _Bool;
        _Bool;
        struct RouteLineManager *;
        struct GlobeCleanupLoader *;
        struct CompleteGlobeTileSetCullingGraph *;
        struct CompleteGlobeTileSetLoader *;
        struct TileSetNode *;
        struct GlobeTileRenderManager *;
        struct CullingNode *;
        struct EarthAdjustedViewNode *;
        struct UserViewNode *;
        struct View *;
        struct BasicViewNode *;
        struct GlobeMainViewNode *;
        struct C3bRequestManager *;
        float;
        _Bool;
        struct shared_ptr<bool>;
        struct HeightRequestManager *;
        struct map<gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>, altitude::GlobeView::LessVector2i, std::__1::allocator<std::__1::pair<const gm::Matrix<int, 2, 1>, std::__1::pair<bool, altitude::Position3d>>>>;
        struct Mutex;
        struct shared_ptr<altitude::Stylesheet>;
        struct FlyoverTour *;
        _Bool;
        struct TriggerManager *;
        struct Viewport;
        struct AnimationReferenceTimer;
        _Bool;
        struct set<altitude::ManifestListener *, std::__1::less<altitude::ManifestListener *>, std::__1::allocator<altitude::ManifestListener *>>;
        struct GeoServicesLoader *;
        struct ManifestManager *;
        struct GlobeDispatch *;
    } *_globeView;
    struct CameraManager _cameraManager;
    double _currentDoublePanPitch;
    BOOL _isPitching;
    BOOL _isRotating;
    BOOL _wasPitched;
    BOOL _couldEnter3DMode;
    int _flyoverMode;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _lastRotation;
    struct CGPoint _panStartScreenPoint;
    struct CGPoint _panLastScreenPoint;
    double _beganDoublePanPitch;
}

@property(nonatomic) int flyoverMode; // @synthesize flyoverMode=_flyoverMode;
@property(nonatomic) struct GlobeView *globeView; // @synthesize globeView=_globeView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_fovAdjustment;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (CDStruct_c3b9c2ee)_centerCoordinateForMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (double)zoomForMapRegion:(id)arg1;
- (double)widestLatitudeForMapRegion:(id)arg1;
- (double)greatCircleMidPointLatitude:(double)arg1 deltaLongitude:(double)arg2;
- (double)earthRadiusAt:(double)arg1;
- (double)geocAngleBetween:(CDStruct_c3b9c2ee)arg1 andCoordinate:(CDStruct_c3b9c2ee)arg2;
- (id)mapRegion;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (double)presentationYaw;
- (void)updateCameraManager;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
- (void)setGesturing:(BOOL)arg1;
- (void)updateState;
- (void)_updateCanEnter3DMode;
- (void)_updateIsPitched;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (BOOL)canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (void)stopGlobeAnimations;
- (struct PositionGeo3d)cameraPosition;
- (void)adjustLoadingForAnimation:(float)arg1 progressFactor:(float)arg2;
- (float)slowDownFactorFromLoadProgress;
- (BOOL)isFlyoverTourStarted;
- (void)interruptFlyoverTourAnimation;
- (void)stopFlyoverTourAnimation;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)flyoverTourAnimation:(id)arg1 animateToStart:(BOOL)arg2 labelChanged:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)moveToZoomOutZoomInTransition:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (CDUnknownBlockType)createMoveToZoomOutZoomInFrameFunction:(struct FrameLatLon)arg1 toLatLon:(struct FrameLatLon)arg2;
- (Matrix_6e1d3589)geocentricFromPosition:(struct PositionLatLonAlt)arg1;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 height:(double)arg2 useHeight:(BOOL)arg3 zoom:(double)arg4 rotation:(double)arg5 tilt:(double)arg6 duration:(double)arg7 timingCurve:(CDUnknownBlockType)arg8 completion:(CDUnknownBlockType)arg9;
- (void)moveTo:(CDStruct_c3b9c2ee)arg1 zoom:(double)arg2 rotation:(double)arg3 tilt:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)transitionToFlyoverMode:(int)arg1 animated:(BOOL)arg2;
- (void)updateFlyoverMode;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3;
- (void)zoomToDistance:(struct CGPoint)arg1 distance:(double)arg2 time:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)tapZoom:(struct CGPoint)arg1 levels:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tiltTo:(double)arg1 animated:(BOOL)arg2 exaggerate:(BOOL)arg3;
- (void)rotateTo:(double)arg1 animated:(BOOL)arg2;
- (BOOL)snapMapIfNecessary:(BOOL)arg1;
- (void)setCenterCoordinate3D:(CDStruct_071ac149)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)pitch:(struct CGPoint)arg1 translation:(double)arg2;
- (void)rotate:(double)arg1 atScreenPoint:(struct CGPoint)arg2;
- (void)_updateGlobeFromCamera;
- (long long)tileSize;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

