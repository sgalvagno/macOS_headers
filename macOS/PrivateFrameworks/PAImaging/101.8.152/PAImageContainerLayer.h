//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

@class NSObject, PAImageLayer, PALayerAnimationFactory;
@protocol OS_dispatch_queue;

@interface PAImageContainerLayer : CALayer
{
    NSObject<OS_dispatch_queue> *_animQueue;
    PALayerAnimationFactory *_animFactory;
    PAImageLayer *_imageLayer;
    struct CGSize _minSize;
}

@property(retain, nonatomic) PAImageLayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(nonatomic) struct CGSize minLayerSize; // @synthesize minLayerSize=_minSize;
- (void).cxx_destruct;
- (void)_notifyEndAnimate;
- (void)_notifyBeginAnimate;
- (void)_abortAnim;
- (void)_cleanupAnim;
- (id)_newAnimationFactory;
- (void)_animate:(CDUnknownBlockType)arg1;
- (BOOL)_isAnimating;
- (BOOL)_allowsImplicitAnimation;
- (BOOL)_shouldAnimate;
- (void)_animateSetImageTransform:(struct CGAffineTransform)arg1;
- (void)_setImageTransform:(struct CGAffineTransform)arg1;
@property(nonatomic) struct CGAffineTransform imageTransform;
- (void)_setPosition:(struct CGPoint)arg1;
- (void)_animateSetPosition:(struct CGPoint)arg1;
- (void)setPosition:(struct CGPoint)arg1;
- (struct CGRect)_minimumContentBoundsForBounds:(struct CGRect)arg1;
- (void)_setBounds:(struct CGRect)arg1;
- (void)_animateSetBounds:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (id)init;
- (void)PALayerDebug_decodeFromDictionary:(id)arg1;

@end

