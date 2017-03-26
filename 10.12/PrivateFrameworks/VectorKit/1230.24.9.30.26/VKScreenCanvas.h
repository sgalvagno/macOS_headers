//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKAnimationRunner-Protocol.h>
#import <VectorKit/VKCameraControllerDelegate-Protocol.h>
#import <VectorKit/VKCameraDelegate-Protocol.h>
#import <VectorKit/VKWorldDelegate-Protocol.h>

@class NSMutableArray, NSString, VKCamera, VKCameraController, VKDispatch, VKScene, VKWorld;
@protocol MDMapControllerDelegate, MDRenderTarget;

__attribute__((visibility("hidden")))
@interface VKScreenCanvas : NSObject <VKWorldDelegate, VKAnimationRunner, VKCameraControllerDelegate, VKCameraDelegate>
{
    VKDispatch *_dispatch;
    VKWorld *_world;
    VKCamera *_camera;
    VKScene *_scene;
    id <MDRenderTarget> _displayTarget;
    BOOL _needsLayout;
    unsigned int _wantsLayout;
    unsigned int _needsRepaint;
    BOOL _userIsGesturing;
    BOOL _iconsShouldAlignToPixels;
    VKCameraController *_cameraController;
    float _debugFramesPerSecond;
    BOOL _rendersInBackground;
    NSMutableArray *_animations[2];
    BOOL _isInBackground;
    BOOL _isHidden;
    struct VKEdgeInsets _edgeInsets;
    struct VKEdgeInsets _fullyOccludedEdgeInsets;
    struct VKEdgeInsets _labelEdgeInsets;
    BOOL _deallocing;
    BOOL _needsInitialization;
    struct unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue>> _renderQueue;
    struct RenderTree *_mapScene;
    struct LayoutContext *_layoutContext;
    Matrix_5173352a _bgColor;
    id <MDMapControllerDelegate> _mapDelegate;
    struct PerspectiveView<double> _view;
}

@property(readonly, nonatomic) Matrix_5173352a bgColor; // @synthesize bgColor=_bgColor;
@property(readonly, nonatomic) BOOL needsInitialization; // @synthesize needsInitialization=_needsInitialization;
@property(nonatomic) id <MDMapControllerDelegate> mapDelegate; // @synthesize mapDelegate=_mapDelegate;
@property(nonatomic) struct VKEdgeInsets fullyOccludedEdgeInsets; // @synthesize fullyOccludedEdgeInsets=_fullyOccludedEdgeInsets;
@property(nonatomic) BOOL iconsShouldAlignToPixels; // @synthesize iconsShouldAlignToPixels=_iconsShouldAlignToPixels;
@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;
@property(nonatomic) float debugFramesPerSecond; // @synthesize debugFramesPerSecond=_debugFramesPerSecond;
@property(readonly, nonatomic) VKWorld *world; // @synthesize world=_world;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)puckAnimator:(id)arg1 updatedPosition:(const Mercator3_d8bb135c *)arg2 course:(double)arg3;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)transferStateFromCanvas:(id)arg1;
- (void)didReceiveMemoryWarning:(BOOL)arg1 beAggressive:(BOOL)arg2;
- (shared_ptr_a3c46825)styleManager;
- (shared_ptr_664b6d77)stylesheet;
- (shared_ptr_144c31f6)styleForFeature:(const shared_ptr_430519ce *)arg1;
- (vector_8bf6b0e5)roadMarkersForSelectionAtScreenPoint:(struct CGPoint)arg1;
- (shared_ptr_430519ce)featureMarkerAtScreenPoint:(struct CGPoint)arg1;
- (shared_ptr_430519ce)buildingMarkerAtScreenPoint:(struct CGPoint)arg1;
@property(nonatomic) BOOL rendersInBackground;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(id)arg1;
- (void)cameraController:(id)arg1 canZoomOutDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 canZoomInDidChange:(BOOL)arg2;
- (id)cameraController:(id)arg1 presentationForAnnotation:(id)arg2;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(id)arg1;
- (void)cameraControllerRequestsLayout:(id)arg1;
- (void)cameraController:(id)arg1 flyoverModeWillChange:(int)arg2;
- (void)cameraController:(id)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(id)arg1 canEnter3DModeDidChange:(BOOL)arg2;
- (void)cameraController:(id)arg1 didBecomePitched:(BOOL)arg2;
- (void)cameraController:(id)arg1 didChangeRegionAnimated:(BOOL)arg2;
- (void)cameraController:(id)arg1 willChangeRegionAnimated:(BOOL)arg2;
- (void)cameraControllerDidChangeCameraState:(id)arg1;
- (void)cameraController:(id)arg1 requestsDisplayRate:(long long)arg2;
- (id)cameraController;
- (void)setCameraController:(id)arg1;
@property(nonatomic) unsigned char applicationUILayout;
@property(nonatomic) struct VehicleState vehicleState;
@property(nonatomic) unsigned char targetDisplay;
@property(nonatomic, getter=isGesturing) BOOL gesturing;
- (void)cameraDidChange:(id)arg1;
- (void)animationDidResume:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)runOrAdoptAnimation:(id)arg1 run:(BOOL)arg2;
- (void)runAnimation:(id)arg1;
- (void)worldDisplayDidChange:(id)arg1;
- (void)worldLayoutDidChange:(id)arg1;
- (void)_queueUpdateDisplayLinkStatus;
- (void)setContentsScale:(double)arg1;
- (void)forceLayout;
- (void)resetRenderQueue:(shared_ptr_06328420)arg1;
- (void)updateCameraForFrameResize;
- (void)didPresent;
- (void)layoutRenderQueue:(shared_ptr_06328420)arg1;
- (void)gglWillDrawWithTimestamp;
- (void)animateWithTimestamp:(double)arg1;
@property(nonatomic) struct VKEdgeInsets labelEdgeInsets;
@property(nonatomic) struct VKEdgeInsets edgeInsets;
- (void)updateWithTimestamp:(double)arg1;
- (void)didEnterBackground;
- (void)willEnterForeground;
- (BOOL)currentSceneRequiresMSAA;
- (void)setNeedsDisplay;
- (void)setNeedsLayout;
- (BOOL)isHidden;
- (void)setHidden:(BOOL)arg1;
- (BOOL)updateDisplayLinkStatus;
- (BOOL)wantsTimerTick;
- (BOOL)wantsRender;
- (BOOL)canRender;
- (void)clearSceneIsEffectivelyHidden:(BOOL)arg1;
- (void)stopNonTransferableAnimations;
- (void)transferAnimationsTo:(id)arg1;
- (void)adoptAnimation:(id)arg1;
- (void)dealloc;
- (void)initializeWithRenderer:(struct Renderer *)arg1;
- (id)initWithTarget:(id)arg1 inBackground:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

