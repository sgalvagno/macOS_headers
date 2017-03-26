//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/JSExport-Protocol.h>

@class CAAnimation, MDLObject, NSArray, NSDictionary, NSString, SCNAction, SCNAudioPlayer, SCNCamera, SCNGeometry, SCNLight, SCNMorpher, SCNNode, SCNParticleSystem, SCNPhysicsBody, SCNPhysicsField, SCNSkinner;
@protocol SCNNodeRendererDelegate;

@protocol SCNNodeJSExport <JSExport>
+ (id)nodeWithMDLObject:(MDLObject *)arg1;
+ (SCNNode *)nodeWithGeometry:(SCNGeometry *)arg1;
+ (id)node;
@property(readonly) NSArray *particleSystems;
@property(nonatomic) unsigned long long categoryBitMask;
@property(nonatomic) id <SCNNodeRendererDelegate> rendererDelegate;
@property(nonatomic, getter=isPaused) BOOL paused;
@property(readonly, nonatomic) SCNNode *presentationNode;
@property(copy, nonatomic) NSArray *filters;
@property(copy) NSArray *constraints;
@property(retain, nonatomic) SCNPhysicsField *physicsField;
@property(retain, nonatomic) SCNPhysicsBody *physicsBody;
@property(readonly, nonatomic) NSArray *childNodes;
@property(readonly, nonatomic) SCNNode *parentNode;
@property(nonatomic) long long movabilityHint;
@property(nonatomic) BOOL castsShadow;
@property(nonatomic) long long renderingOrder;
@property(nonatomic) double opacity;
@property(nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic) struct CATransform3D worldTransform;
@property(nonatomic) struct CATransform3D pivot;
@property(nonatomic) struct SCNVector3 scale;
@property(nonatomic) struct SCNVector3 eulerAngles;
@property(nonatomic) struct SCNVector4 orientation;
@property(nonatomic) struct SCNVector4 rotation;
@property(nonatomic) struct SCNVector3 position;
@property(nonatomic) struct CATransform3D transform;
@property(retain, nonatomic) SCNMorpher *morpher;
@property(retain, nonatomic) SCNSkinner *skinner;
@property(retain, nonatomic) SCNGeometry *geometry;
@property(retain, nonatomic) SCNCamera *camera;
@property(retain, nonatomic) SCNLight *light;
@property(copy, nonatomic) NSString *name;
@property(readonly, nonatomic) NSArray *audioPlayers;
- (void)removeAllActions;
- (void)removeActionForKey:(NSString *)arg1;
- (SCNAction *)actionForKey:(NSString *)arg1;
- (BOOL)hasActions;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(void))arg3;
- (void)runAction:(SCNAction *)arg1 forKey:(NSString *)arg2;
- (void)runAction:(SCNAction *)arg1 completionHandler:(void (^)(void))arg2;
- (void)runAction:(SCNAction *)arg1;
- (SCNNode *)childNodeWithName:(NSString *)arg1;
- (id)valueForKeyPath:(NSString *)arg1;
- (id)valueForKey:(NSString *)arg1;
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)setValue:(id)arg1 forKeyPath:(NSString *)arg2;
- (id)getBoundingSphere;
- (id)getBoundingBox;
- (id)copy;
- (void)resumeAnimationForKey:(NSString *)arg1;
- (void)pauseAnimationForKey:(NSString *)arg1;
- (CAAnimation *)animationForKey:(NSString *)arg1;
- (NSArray *)animationKeys;
- (void)removeAnimationForKey:(NSString *)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(CAAnimation *)arg1 forKey:(NSString *)arg2;
- (void)removeParticleSystem:(SCNParticleSystem *)arg1;
- (void)removeAllParticleSystems;
- (void)addParticleSystem:(SCNParticleSystem *)arg1;
- (NSArray *)hitTestWithSegmentFromPoint:(struct SCNVector3)arg1 toPoint:(struct SCNVector3)arg2 options:(NSDictionary *)arg3;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 fromNode:(SCNNode *)arg2;
- (struct CATransform3D)convertTransform:(struct CATransform3D)arg1 toNode:(SCNNode *)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 fromNode:(SCNNode *)arg2;
- (struct SCNVector3)convertPosition:(struct SCNVector3)arg1 toNode:(SCNNode *)arg2;
- (void)enumerateHierarchyUsingBlock:(void (^)(SCNNode *, char *))arg1;
- (void)enumerateChildNodesUsingBlock:(void (^)(SCNNode *, char *))arg1;
- (NSArray *)childNodesPassingTest:(BOOL (^)(SCNNode *, char *))arg1;
- (SCNNode *)childNodeWithName:(NSString *)arg1 recursively:(BOOL)arg2;
- (void)replaceChildNode:(SCNNode *)arg1 with:(SCNNode *)arg2;
- (void)removeFromParentNode;
- (void)insertChildNode:(SCNNode *)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildNode:(SCNNode *)arg1;
- (id)flattenedClone;
- (id)clone;
- (void)removeAudioPlayer:(SCNAudioPlayer *)arg1;
- (void)removeAllAudioPlayers;
- (void)addAudioPlayer:(SCNAudioPlayer *)arg1;
@end

