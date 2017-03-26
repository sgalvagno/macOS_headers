//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNActionable-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNBoundingVolume-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNNodeComponent, SCNOrderedDictionary, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;
@protocol SCNNodeRendererDelegate;

@interface SCNNode : NSObject <NSCopying, NSSecureCoding, SCNAnimatable, SCNActionable, SCNBoundingVolume>
{
    // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1QB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}, name: _node
    SCNNode *_parent;
    NSMutableArray *_childNodes;
    SCNNode *_presentationInstance;
    unsigned int _isPresentationInstance:1;
    unsigned int _lightLoaded:1;
    unsigned int _geometryLoaded:1;
    unsigned int _cameraLoaded:1;
    unsigned int _skinnerLoaded:1;
    unsigned int _morpherLoaded:1;
    unsigned int _paused:1;
    unsigned int _pausedByInheritance:1;
    unsigned int _affineUpToDate:1;
    unsigned int _transformUpToDate:1;
    unsigned int _hasPivot:1;
    unsigned int _usesEuler:1;
    unsigned int _movability:1;
    unsigned int _hidden:1;
    unsigned int _castsShadow:1;
    unsigned int _ignoreAnimationWhenCopying_tmp:1;
    unsigned int _hasComponentBitmask:10;
    struct CATransform3D _transform;
    unsigned int _authoringEnvironmentNode:1;
    struct SCNVector3 _position;
    struct SCNVector4 _rotation;
    struct SCNVector3 _scale;
    float _opacity;
    unsigned long long _categoryBitMask;
    SCNNodeComponent *_components;
    SCNOrderedDictionary *_animations;
    SCNOrderedDictionary *_actions;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    long long _renderingOrder;
    NSString *_name;
    NSMutableDictionary *_valueForKey;
    id _rendererDelegate;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (id)keyPathsForValuesAffectingScale;
+ (id)keyPathsForValuesAffectingOrientation;
+ (id)keyPathsForValuesAffectingEulerAngles;
+ (id)keyPathsForValuesAffectingRotation;
+ (id)keyPathsForValuesAffectingTransform;
+ (id)keyPathsForValuesAffectingPosition;
+     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1QB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}16, name: nodeWithNodeRef:
+ (id)nodeWithGeometry:(id)arg1;
+ (id)node;
+ (id)nodeWithMDLObject:(id)arg1 masterObjects:(id)arg2;
+ (id)nodeWithMDLObject:(id)arg1;
+ (id)nodeWithMDLAsset:(id)arg1;
- (void)setAuthoringEnvironmentPresentationNode:(id)arg1;
- (id)authoringEnvironmentPresentationNode;
- (void)setAuthoringEnvironmentCompanionNode:(id)arg1;
- (id)authoringEnvironmentCompanionNode;
- (void)setAuthoringEnvironmentNode:(BOOL)arg1;
- (BOOL)authoringEnvironmentNode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)_didDecodeSCNNode:(id)arg1;
- (void)_customDecodingOfSCNNode:(id)arg1;
- (void)_customEncodingOfSCNNode:(id)arg1;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 fromNode:(id)arg2;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 toNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(id)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(id)arg2;
- (void)replaceObjectInAudioPlayerAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromAudioPlayersAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inAudioPlayersAtIndex:(unsigned long long)arg2;
- (id)objectInAudioPlayersAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfAudioPlayers;
- (void)removeAudioPlayer:(id)arg1;
- (void)removeAllAudioPlayers;
- (void)addAudioPlayer:(id)arg1;
- (id)audioPlayers;
- (id)_audioPlayers;
- (void)replaceObjectInParticleSystemsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromParticleSystemsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inParticleSystemsAtIndex:(unsigned long long)arg2;
- (id)objectInParticleSystemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfParticleSystems;
- (void)removeParticleSystem:(id)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(id)arg1;
- (id)particleSystems;
- (void)_removeDeadParticleSystem:(struct __C3DParticleSystem *)arg1;
- (id)_particleSystems;
@property(retain, nonatomic) SCNPhysicsField *physicsField;
@property(retain, nonatomic) SCNPhysicsBody *physicsBody;
@property(copy) NSArray *constraints;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (void)_removeAction:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
@property(readonly, nonatomic) BOOL hasActions;
- (id)actions;
@property(readonly, nonatomic) NSArray *actionKeys;
- (void)runAction:(id)arg1 forKey:(id)arg2;
- (void)runAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runAction:(id)arg1;
- (void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(nonatomic, getter=isPaused) BOOL paused;
- (BOOL)isPausedOrPausedByInheritance;
- (void)_setPaused:(BOOL)arg1;
- (void)_actionsTimeJump:(double)arg1;
- (id)_subdividedCopyWithSubdivisionLevel:(long long)arg1;
- (id)flattenedCopy;
- (id)flattenedClone;
- (id)getBoundingBox;
- (id)getBoundingSphere;
- (BOOL)getFrustum:(struct C3DPlane *)arg1 withViewport: /* Error: Ran out of types for this method. */;
- (BOOL)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (BOOL)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (void)replaceChildNode:(id)arg1 with:(id)arg2;
- (void)insertChildNode:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeAllChilds;
- (unsigned long long)indexOfChildNode:(id)arg1;
- (void)removeFromParentNode;
- (void)replaceObjectInChildNodesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (void)__removeObjectFromChildNodesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (void)__insertObject:(id)arg1 inChildNodesAtIndex:(unsigned long long)arg2;
- (void)addChildNode:(id)arg1;
- (BOOL)canAddChildNode:(id)arg1;
- (void)_reSyncModelTree;
- (void)_initChildNodesArray;
- (id)objectInChildNodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfChildNodes;
- (void)_setParent:(id)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (BOOL)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (BOOL)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (struct __C3DAnimationChannel *)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;
- (void)renderInContext:(void *)arg1;
@property(nonatomic) id <SCNNodeRendererDelegate> rendererDelegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSArray *filters;
@property(retain, nonatomic) SCNGeometry *geometry;
@property(retain, nonatomic) SCNCamera *camera;
@property(retain, nonatomic) SCNMorpher *morpher;
@property(retain, nonatomic) SCNSkinner *skinner;
- (void)setGizmo:(BOOL)arg1;
- (BOOL)isGizmo;
- (BOOL)isJoint;
@property(retain, nonatomic) SCNLight *light;
- (void)_setComponent:(id)arg1 withType:(long long)arg2;
- (id)mutableChildNodes;
@property(readonly, nonatomic) NSArray *childNodes;
@property(readonly, nonatomic) SCNNode *parentNode;
- (BOOL)hidden;
@property(nonatomic) long long renderingOrder;
@property(nonatomic) double opacity;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) BOOL castsShadow;
@property(nonatomic) long long movabilityHint;
@property(nonatomic) struct CATransform3D pivot;
@property(readonly, nonatomic) struct CATransform3D worldTransform;
- (void)setWorldTransform:(struct CATransform3D)arg1;
@property(nonatomic) struct CATransform3D transform;
@property(nonatomic) struct SCNVector4 rotation;
@property(nonatomic) struct SCNVector3 scale;
- (void)_setScale:(struct SCNVector3)arg1;
@property(nonatomic) struct SCNVector3 position;
- (void)_setPosition:(struct SCNVector3)arg1;
@property(nonatomic) struct SCNVector3 eulerAngles;
- (struct SCNVector3)_euler;
@property(nonatomic) struct SCNVector4 orientation;
- (void)_setQuaternion:(struct SCNVector4)arg1;
- (void)setQuaternion:(struct SCNVector4)arg1;
- (struct SCNVector4)quaternion;
- (struct SCNVector4)_quaternion;
- (BOOL)_usesEulerRepresentation;
- (void)_updateAffine;
- (void)_updateTransform;
- (void)_registerAsObserver;
- (id)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(id)arg3;
-     // Error parsing type: ^{__C3DNode={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1QB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}16@0:8, name: nodeRef
- (id)__morpher;
- (id)__skinner;
- (id)__geometry;
- (id)__camera;
- (id)__light;
- (void)_assignComponent:(id)arg1 toContainerWithType:(long long)arg2;
- (void)_removeComponentWithType:(long long)arg1;
- (id)_findComponentWithType:(long long)arg1;
- (id)jsChildNodesWithAttribute:(id)arg1;
- (id)childNodeWithName:(id)arg1;
- (id)objectInChildNodesWithAttribute:(id)arg1 firstOnly:(BOOL)arg2;
- (id)childNodesWithAttribute:(Class)arg1 recursively:(BOOL)arg2;
- (void)_childNodesWithAttribute:(Class)arg1 output:(id)arg2 recursively:(BOOL)arg3;
- (void)enumerateNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHierarchyUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)_enumerateChildNodesUsingBlock:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1;
- (id)childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2;
- (BOOL)_childNodesPassingTest:(CDUnknownBlockType)arg1 recursively:(BOOL)arg2 output:(id)arg3;
- (id)objectInChildNodesWithName:(id)arg1;
- (id)childNodeWithName:(id)arg1 recursively:(BOOL)arg2;
- (void)_expandChildArrayIfNeeded;
- (BOOL)_isAReference;
- (id)clone;
- (id)_copyRecursively;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setAttributes:(id)arg1;
- (void)dump;
- (void)_dump:(id)arg1;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)presentationInstance;
@property(readonly, nonatomic) SCNNode *presentationNode;
- (BOOL)isPresentationInstance;
- (void)_syncObjCModel;
- (id)attributeForKey:(id)arg1;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1QB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}16, name: initWithNodeRef:
-     // Error parsing type: @24@0:8^{__C3DNode={__C3DEntity={__CFRuntimeBase=Q[4C]I}^v^{__CFString}^{__CFString}^{__CFDictionary}qq}^{__C3DNode}^{__C3DNode}^{__C3DNode}{?={?=SS}I}^{?}^{__C3DGeometry}b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1b1QB^{__C3DTransforms}(C3DMatrix4x4=[16f][4])ff{__C3DAABB=}}16, name: initPresentationNodeWithNodeRef:
- (id)init;
- (void)_bakeNodes:(id)arg1 folderPath:(id)arg2 inVertex:(BOOL)arg3 bakeAO:(BOOL)arg4 quality:(float)arg5 attenuation:(float)arg6 geomSetter:(CDUnknownBlockType)arg7 terminateSetter:(CDUnknownBlockType)arg8;
- (id)_associatedMDLObject;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

