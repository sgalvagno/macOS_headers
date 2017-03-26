//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <VectorKit/GGLRenderQueueSource-Protocol.h>
#import <VectorKit/MDMapControllerDelegate-Protocol.h>
#import <VectorKit/VKInteractiveMapDelegate-Protocol.h>
#import <VectorKit/VKNavCameraControllerObserver-Protocol.h>
#import <VectorKit/VKPuckAnimatorDelegate-Protocol.h>

@class GEOMapRegion, GEOResourceManifestConfiguration, GGLDisplayLink, MDDisplayLayer, NSArray, NSMutableArray, NSString, VKClassicGlobeCanvas, VKLabelMarker, VKMapCameraController, VKMapCanvas, VKMemoryObserver, VKNavCameraController, VKNavContext, VKPolylineOverlayPainter, VKPuckAnimator, VKSceneConfiguration, VKTimedAnimation;
@protocol GEORoutePreloadSession, VKMapViewDelegate;

@interface VKMapView : CALayer <VKInteractiveMapDelegate, MDMapControllerDelegate, GGLRenderQueueSource, VKPuckAnimatorDelegate, VKNavCameraControllerObserver>
{
    long long _mapType;
    VKMapCanvas *_canvas;
    VKClassicGlobeCanvas *_globe;
    MDDisplayLayer *_mapLayer;
    id <VKMapViewDelegate> _mapDelegate;
    BOOL _loaderOpen;
    BOOL _additionalManifestConfigurationLoaderOpen;
    NSString *_tileLoaderClientID;
    CDStruct_51745937 _mapDisplayStyle;
    VKTimedAnimation *_mapDisplayStyleAnimation;
    VKTimedAnimation *_edgeInsetAnimation;
    struct VKEdgeInsets _animatingToEdgeInsets;
    BOOL _isChangingMapType;
    unsigned long long _regionChangeCount;
    BOOL _containsOverlay;
    double _verticalYaw;
    VKLabelMarker *_selectedLabelMarker;
    unsigned char _applicationState;
    unsigned char _displayedSearchResultsType;
    VKMemoryObserver *_memoryObserver;
    VKPuckAnimator *_userLocationAnimator;
    GGLDisplayLink *_displayLink;
    long long _displayRate;
    long long _navigationDisplayRate;
    long long _requestedRate;
    shared_ptr_06328420 _renderQueue;
    NSMutableArray *_annotationMarkersToAddToNewCanvas;
    BOOL _isInBackground;
    GEOResourceManifestConfiguration *_manifestConfiguration;
    GEOResourceManifestConfiguration *_additionalManifestConfiguration;
    struct vector<OnscreenTimestampData, std::__1::allocator<OnscreenTimestampData>> _onscreenTimestamps;
    VKMapCameraController *_mapCameraController;
    VKNavCameraController *_navigationCameraController;
    VKNavContext *_navContext;
    Mercator3_d8bb135c _lastAnimatedUserPosition;
    double _lastAnimatedCourse;
}

@property(readonly, nonatomic) VKPuckAnimator *userLocationAnimator; // @synthesize userLocationAnimator=_userLocationAnimator;
@property(retain, nonatomic) GEOResourceManifestConfiguration *additionalManifestConfiguration; // @synthesize additionalManifestConfiguration=_additionalManifestConfiguration;
@property(nonatomic) unsigned char displayedSearchResultsType; // @synthesize displayedSearchResultsType=_displayedSearchResultsType;
@property(nonatomic) unsigned char applicationState; // @synthesize applicationState=_applicationState;
@property(readonly, nonatomic) double verticalYaw; // @synthesize verticalYaw=_verticalYaw;
@property(nonatomic) id <VKMapViewDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)navigationCameraHasStoppedPanning;
- (void)navigationCameraHasStartedPanning;
@property(readonly, nonatomic) VKSceneConfiguration *sceneConfiguration;
- (void)puckAnimator:(id)arg1 updatedTargetPosition:(Matrix_6e1d3589)arg2;
- (void)puckAnimatorDidStop:(id)arg1;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Mercator3_d8bb135c *)arg2 course:(double)arg3;
- (void)puckAnimator:(id)arg1 runAnimation:(id)arg2;
- (void)clearOnscreenTimestamps;
- (void)pushNewOnscreenTimestamp:(id)arg1;
- (void)updateOnscreenTimestamps;
- (void)map:(id)arg1 didUpdateVerticalYawTo:(double)arg2;
- (void)removeExternalAnchor:(id)arg1;
- (void)addExternalAnchor:(id)arg1;
- (void)setCameraHorizontalOffset:(double)arg1 duration:(double)arg2 timingFunction:(id)arg3;
- (void)setRouteLineSplitAnnotation:(id)arg1;
@property(nonatomic) BOOL rendersInBackground;
- (void)goToTileX:(int)arg1 Y:(int)arg2 Z:(int)arg3 tileSize:(int)arg4;
- (BOOL)gridDisabled;
- (BOOL)rastersDisabled;
- (BOOL)buildingFootprintsDisabled;
- (BOOL)polygonsDisabled;
- (BOOL)labelsDisabled;
- (BOOL)roadsDisabled;
@property(readonly, nonatomic, getter=isFullyDrawn) BOOL fullyDrawn;
- (BOOL)roadClassDisabled:(int)arg1;
- (void)setDisableGrid:(BOOL)arg1;
- (void)setDisableRoadClass:(BOOL)arg1 forRoadClass:(int)arg2;
- (void)setDisableRasters:(BOOL)arg1;
- (void)setDisableBuildingFootprints:(BOOL)arg1;
- (void)setDisablePolygons:(BOOL)arg1;
- (void)setDisableLabels:(BOOL)arg1;
- (void)setDisableRoads:(BOOL)arg1;
- (void)stopSnappingAnimations;
- (BOOL)isPointValidForGesturing:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(BOOL)arg2;
- (void)startPanningAtPoint:(struct CGPoint)arg1;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)zoomToLevel:(double)arg1 withFocusPoint:(struct CGPoint)arg2;
- (void)didPresent;
- (RenderQueue_e4212455 *)renderQueue;
- (void)resetRenderQueue;
- (void)mapControllerNeedsInitialization:(id)arg1;
- (void)mapController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (void)mapControllerNeedsDisplay:(id)arg1;
- (BOOL)updateDisplayLinkStatus;
- (void)onTimerFired:(id)arg1;
- (void)_updateMapDisplayStyle;
- (void)mapDidFinishInitialTrackingAnimation:(id)arg1;
- (void)map:(id)arg1 didUpdateContainsOverlay:(BOOL)arg2;
- (void)map:(id)arg1 willTransitionFrom:(long long)arg2 to:(long long)arg3 duration:(double)arg4;
- (void)mapLabelsDidLayout:(id)arg1;
- (void)map:(id)arg1 selectedLabelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)map:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapDidFinishChangingMapDisplayStyle:(CDStruct_51745937)arg1;
- (void)map:(id)arg1 flyoverModeWillChange:(int)arg2;
- (void)map:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)map:(id)arg1 canShowFlyoverDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)map:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (void)map:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)mapDidBecomePartiallyDrawn:(id)arg1;
- (void)mapDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (id)map:(id)arg1 painterForOverlay:(id)arg2;
- (id)map:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)map:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)map:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)mapDidReloadStylesheet:(id)arg1;
- (void)mapDidChangeVisibleRegion:(id)arg1;
- (void)mapDidFailLoadingTiles:(id)arg1 withError:(id)arg2;
- (void)mapDidFinishLoadingTiles:(id)arg1;
- (void)mapDidStartLoadingTiles:(id)arg1;
@property(retain, nonatomic) VKPolylineOverlayPainter *focusedLabelsPolylinePainter;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)setNavContext:(id)arg1;
- (void)setRouteContext:(id)arg1;
- (void)setCurrentLocationText:(id)arg1;
- (void)setRouteUserOffset:(struct PolylineCoordinate)arg1;
- (void)insertRasterOverlay:(id)arg1 belowOverlay:(id)arg2;
- (void)insertRasterOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)removeRasterOverlay:(id)arg1;
- (void)addRasterOverlay:(id)arg1;
- (void)removePersistentOverlay:(id)arg1;
- (void)addPersistentOverlay:(id)arg1;
- (void)removeOverlay:(id)arg1;
- (void)addOverlay:(id)arg1;
@property(readonly, nonatomic, getter=isAnimatingToTrackAnnotation) BOOL animatingToTrackAnnotation;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3;
@property(nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) long long annotationTrackingZoomStyle;
@property(nonatomic) double trackingZoomScale;
@property(readonly, nonatomic) NSArray *labelMarkers;
@property(readonly, nonatomic) NSArray *annotationMarkers;
@property(readonly, nonatomic) VKLabelMarker *selectedLabelMarker;
- (BOOL)shouldHideOffscreenSelectedAnnotation;
- (CDUnknownBlockType)annotationCoordinateTest;
- (CDUnknownBlockType)annotationRectTest;
- (void)removeAnnotationMarker:(id)arg1;
- (void)addAnnotationMarker:(id)arg1;
- (void)panWithOffset:(struct CGPoint)arg1 relativeToScreenPoint:(struct CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(CDUnknownBlockType)arg5;
@property(readonly, nonatomic) BOOL canShowFlyover;
@property(readonly, nonatomic, getter=isShowingFlyover) BOOL showingFlyover;
@property(readonly, nonatomic) int flyoverMode;
- (void)setFlyoverMode:(int)arg1;
@property(readonly, nonatomic, getter=isFullyPitched) BOOL fullyPitched;
@property(readonly, nonatomic, getter=isPitched) BOOL pitched;
- (BOOL)canEnter3DModeFlyoverForTileSize:(long long)arg1;
@property(readonly, nonatomic) BOOL canEnter3DMode;
- (void)exit3DMode;
- (void)enter3DMode;
- (id)boundsContextForSelectedTransitLines;
- (void)deselectTransitLineMarker;
- (void)selectTransitLineMarker:(id)arg1;
- (id)selectedTransitLineIDs;
- (id)transitLineMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (id)transitLineMarkersInCurrentViewport;
- (void)setDisableTransitLines:(BOOL)arg1;
- (BOOL)transitLinesDisabled;
- (void)deselectLabelMarker;
- (void)selectLabelMarker:(id)arg1;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1;
- (id)labelMarkerForCustomFeatureAnnotation:(id)arg1 dataSource:(id)arg2;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint)arg1 selectableLabelsOnly:(BOOL)arg2;
- (void)removeCustomFeatureDataSource:(id)arg1;
- (void)addCustomFeatureDataSource:(id)arg1;
@property(retain, nonatomic) NSArray *externalTrafficIncidents;
@property(retain, nonatomic) id <GEORoutePreloadSession> routePreloadSession;
- (void)preloadNavigationSceneResources;
@property(nonatomic) BOOL trackingCameraShouldHandleGestures;
- (void)transitionToTracking:(BOOL)arg1 mapMode:(long long)arg2 startLocation:(CDStruct_c3b9c2ee)arg3 startCourse:(double)arg4 pounceCompletionHandler:(CDUnknownBlockType)arg5;
- (void)navigationCameraReturnToPuck;
- (void)pauseTracking;
- (void)stopTracking;
- (id)flyoverStatistics;
- (void)resetFlyoverStatistics;
- (void)disableFlyoverStatistics;
- (void)enableFlyoverStatistics;
- (void)resumeFlyoverTourAnimation;
- (void)pauseFlyoverTourAnimation;
- (void)stopFlyoverAnimation;
- (void)startFlyoverTourAnimation:(unsigned long long)arg1 animateToStart:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveToFlyoverTourStartPosition:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startFlyoverAnimation:(id)arg1 animateToStart:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_notifyDelegateFlyoverTourLabelChanged:(id)arg1;
- (void)_runFlyoverTourStateChange:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareFlyoverAnimation:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL canShowFlyoverAnimation;
- (void)setCameraFramingInsets:(struct VKEdgeInsets)arg1;
@property(nonatomic) struct VKEdgeInsets labelEdgeInsets;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets;
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (void)setEdgeInsets:(struct VKEdgeInsets)arg1 duration:(double)arg2 timingFunction:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (double)distanceFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 fromLayer:(id)arg3 withPrecision:(long long)arg4;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toCameraModelPointToLayer:(id)arg2;
- (struct CGPoint)convertCoordinate:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(id)arg2;
- (struct CGPoint)convertMapPoint:(CDStruct_c3b9c2ee)arg1 toPointToLayer:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toMapPointFromLayer:(id)arg2;
- (CDStruct_c3b9c2ee)convertPoint:(struct CGPoint)arg1 toCoordinateFromLayer:(id)arg2;
- (double)durationToAnimateToMapRegion:(id)arg1;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (void)runAnimation:(id)arg1;
- (void)renderInContext:(struct CGContext *)arg1;
- (void)setContentsScale:(double)arg1;
- (void)dealloc;
- (id)initWithGlobe:(BOOL)arg1 shouldRasterize:(BOOL)arg2 inBackground:(BOOL)arg3 manifestConfiguration:(id)arg4 contentScale:(double)arg5;
@property(nonatomic) BOOL allowDatelineWraparound;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 timingCurve:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
@property(readonly, nonatomic) CDStruct_071ac149 centerCoordinate;
- (id)consoleString:(BOOL)arg1;
@property(readonly, nonatomic) GEOMapRegion *mapRegion;
@property(readonly, nonatomic) double altitude;
@property(readonly, nonatomic) double pitch;
@property(readonly, nonatomic) double presentationYaw;
@property(readonly, nonatomic) double yaw;
- (struct CGRect)mapRegionBounds;
- (void)setBounds:(struct CGRect)arg1;
- (void)_setStyleTransitionProgress:(double)arg1 targetStyle:(CDStruct_51745937)arg2 step:(long long)arg3;
- (double)_styleTransitionProgress;
- (void)animateStylesWithDuration:(double)arg1 animations:(CDUnknownBlockType)arg2;
- (void)setMapDisplayStyle:(CDStruct_51745937)arg1 animated:(BOOL)arg2 duration:(double)arg3;
- (void)setMapDisplayStyle:(CDStruct_51745937)arg1 animated:(BOOL)arg2;
@property(nonatomic) CDStruct_51745937 mapDisplayStyle;
- (void)_updateBackgroundColor;
- (void)_clearAnalytics;
- (void)_updateAnalytics:(BOOL)arg1;
- (void)setMapType:(long long)arg1 animated:(BOOL)arg2;
@property(nonatomic) long long mapType;
- (BOOL)supportsNightMode;
- (BOOL)supportsMapType:(long long)arg1;
- (void)_createGlobe;
- (void)setCanonicalSkyHeight:(double)arg1;
- (void)setDesiredMapMode:(long long)arg1 immediate:(BOOL)arg2;
@property(nonatomic) BOOL showsBuildings;
@property(nonatomic) BOOL showsPointsOfInterest;
@property(nonatomic) long long shieldIdiom;
@property(nonatomic) long long navigationShieldSize;
@property(nonatomic) long long shieldSize;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (BOOL)canZoomOutForTileSize:(long long)arg1;
- (BOOL)canZoomInForTileSize:(long long)arg1;
@property(nonatomic) BOOL iconsShouldAlignToPixels;
@property(nonatomic, getter=isGesturing) BOOL gesturing;
- (id)detailedDescriptionDictionaryRepresentation;
- (id)detailedDescription;
@property(nonatomic) BOOL shouldLoadMapMargin;
@property(nonatomic) BOOL shouldLoadFallbackTiles;
- (id)closestRoadMarkerForSelectionAtPoint:(struct CGPoint)arg1;
- (id)debugLabelString:(BOOL)arg1;
- (void)debugHighlightLabelAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) BOOL enableDebugLabelHighlighting;
- (BOOL)isEffectivelyHidden;
- (void)didReceiveMemoryWarning:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)clearScene;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (void)debugRunPerformanceTestWithOutputHeader:(id)arg1;
@property(readonly, nonatomic) float debugFramesPerSecond;
@property(nonatomic) BOOL debugEnableMultisampling;
@property(nonatomic) BOOL debugLayoutContinuously;
@property(nonatomic) BOOL debugDrawContinuously;
@property(nonatomic) BOOL isPitchable;
@property(nonatomic) BOOL staysCenteredDuringRotation;
@property(nonatomic) BOOL staysCenteredDuringPinch;
@property(nonatomic) long long labelScaleFactor;
@property(nonatomic) BOOL localizeLabels;
- (BOOL)canRotate;
- (void)flushTileLoads;
- (void)didFinishSnapshotting;
- (void)updateAnalyticsOnEnteringForeground;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (BOOL)_createDisplayLayer;
- (void)_updateDisplayRate;
@property(nonatomic) long long navigationDisplayRate;
@property(nonatomic) long long displayRate;
@property(nonatomic) BOOL trafficIncidentsEnabled;
@property(nonatomic) BOOL trafficEnabled;
@property(nonatomic) long long applicationUILayout;
@property(nonatomic) CDStruct_2920cfb7 vehicleState;
@property(nonatomic) long long targetDisplay;
- (void)reloadStylesheet;
- (shared_ptr_a3c46825)styleManager;
- (BOOL)stylesheetIsDevResource;
- (void)setStylesheetName:(id)arg1;
- (BOOL)isShowingNoDataPlaceholders;
- (id)attributionsForCurrentRegion;
@property(readonly, nonatomic) NSArray *visibleTileSets;
- (void)forceLayout;
- (void)forceFrame;
- (void)_forceLayoutForSuspensionSnapShot;
- (id)secondaryCanvas;
- (id)currentCanvas;
- (void)_closeAdditionalManifestConfigurationLoaderConnection;
- (void)closeLoaderConnection;
- (void)_openAdditionalManifestConfigurationLoaderConnection;
- (void)openLoaderConnection;
- (void)forceSceneLoad;
@property(nonatomic, getter=isLabelMarkerSelectionEnabled) BOOL labelMarkerSelectionEnabled;
- (void)setApplicationState:(unsigned char)arg1 displayedSearchResultsType:(unsigned char)arg2;
- (long long)currentMapMode;
- (id)roadMarkersForSelectionAtPoint:(struct CGPoint)arg1;
- (shared_ptr_430519ce)buildingMarkerAtPoint:(struct CGPoint)arg1;
- (shared_ptr_430519ce)featureMarkerAtPoint:(struct CGPoint)arg1;
- (void)performStylesheetDidChange;
- (shared_ptr_144c31f6)styleForFeature:(shared_ptr_430519ce)arg1;
- (shared_ptr_664b6d77)stylesheet;
@property(readonly, nonatomic) VKMapCanvas *mapCanvas;
- (void)debugHighlightFeatureMarker:(const shared_ptr_430519ce *)arg1;
- (id)iconForStyleAttributes:(id)arg1 contentScale:(double)arg2 size:(long long)arg3 customIconID:(unsigned long long)arg4 transparent:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

