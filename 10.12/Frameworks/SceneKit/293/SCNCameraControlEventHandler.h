//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/SCNEventHandler.h>

@class SCNNode;

@interface SCNCameraControlEventHandler : SCNEventHandler
{
    SCNNode *_freeViewCameraNode;
    struct CGPoint _initialPoint;
    // Error parsing type: (C3DMatrix4x4="components"[16f]"m"[4]), name: _initialMatrix
    float _initialZoom;
    float _originalFovX;
    float _originalFovY;
    float _originalOrthoScale;
    float _zoomFactor;
    // Error parsing type: , name: _clickOrigin
    BOOL _stickyMove;
    struct CGPoint _stickyDirection;
    long long _currentStickyAxis;
    struct CGPoint _lastDragLocation;
    double _lastDragTime;
    long long _stickyAxis;
    // Error parsing type: {C3DSphere="vector"}, name: _viewedObjectSphere
    unsigned int _isViewedObjectSphereComputed:1;
    unsigned int _hasAutomaticCameraTarget:1;
    unsigned int _automaticCameraTargetUpToDate:1;
    unsigned int _inertia:1;
    unsigned int _didEverFocusNode:1;
    unsigned int _allowsTranslation:1;
    unsigned int _pinchShouldMoveCamera:1;
    unsigned int _alternateMode:1;
    unsigned int _upDirIsSet:1;
    unsigned int _gimbalLockMode:1;
    unsigned int _inertiaRunning:1;
    long long _browseMode;
    // Error parsing type: , name: _upDir
    struct SCNVector3 _cameraTarget;
    struct SCNVector3 _autoCameraTarget;
    float _browseScaleFactor;
    double _friction;
    struct CGPoint _totalDragWithInertia;
    struct CGPoint _inertiaVelocity;
    double _lastSimulationTime;
}

+ (struct CATransform3D)matrixWithNoRoll:(struct CATransform3D)arg1;
+     // Error parsing type: 24@0:8@16, name: frontVectorWithPointOfView:
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (void)_computeStickyAxisIfNeeded:(struct CGPoint)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)rotateWithEvent:(id)arg1;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (float)_scrollWheelMultiplier;
- (void)_translateTo:(struct CGPoint)arg1;
- (void)_rotateWithDrag:(struct CGPoint)arg1 mode:(long long)arg2 stickyAxis:(long long)arg3;
- (void)clearRoll;
- (void)_beginTranslateAtLocation:(struct CGPoint)arg1;
-     // Error parsing type: 16@0:8, name: frontVector
- (struct C3DSphere)viewedObjectSphere;
- (BOOL)computeBoundingSphereOmittingFloorsForNode:(struct __C3DNode *)arg1 sphere:(struct C3DSphere *)arg2;
- (void)_startBrowsingIfNeeded:(struct CGPoint)arg1;
- (void)endDragging;
- (void)_didDragTo:(struct CGPoint)arg1;
- (void)endDraggingWithVelocity:(struct CGPoint)arg1;
- (BOOL)wantsRedraw;
- (void)viewWillDraw;
- (void)rotateWithVector:(long long)arg1 mode: /* Error: Ran out of types for this method. */;
- (void)_onInertiaTimer;
- (void)_stopInertiaIfNeeded;
- (void)cameraDidChange;
- (void)cameraWillChange;
- (void)sceneDidChange;
- (void)sceneWillChange;
- (void)translateByX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)setZoomFactor:(double)arg1;
- (double)zoomFactor;
- (void)zoomBy:(float)arg1;
- (void)zoomBy:(float)arg1 animate:(BOOL)arg2;
- (void)rotateOf:(double)arg1;
- (void)updateBrowseScaleFactor;
- (void)_resetBrowseScaleFactor;
- (double)_browseScale;
- (float)_translationCoef;
- (void)computeAutomaticTargetPoint;
- (struct SCNVector3)cameraAutomaticTargetPoint;
- (void)_switchToFreeViewCamera;
- (void)_installFreeViewCameraIfNeeded;
- (void)_prepareFreeViewCamera;
- (BOOL)_freeCameraActivated;
- (void)_resetFreeViewCamera;
- (void)activateFreeCamera;
- (void)setEnableFreeCamera:(BOOL)arg1;
@property long long stickyAxis;
- (void)focusNode:(id)arg1;
- (id)freeCamera;
@property struct SCNVector3 cameraTarget;
@property BOOL automaticCameraTarget;
- (void)invalidateCameraTarget;
@property struct SCNVector3 gimbalLockVector;
@property BOOL gimbalLockMode;
@property double friction;
@property BOOL enableInertia;
@property BOOL allowsTranslation;
- (void)dealloc;
- (id)init;

@end

