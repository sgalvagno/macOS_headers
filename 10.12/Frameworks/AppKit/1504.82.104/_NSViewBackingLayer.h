//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSBackingLayer.h>

@class NSValue;

__attribute__((visibility("hidden")))
@interface _NSViewBackingLayer : _NSBackingLayer
{
    NSValue *_view;
    unsigned int _isPresentationLayer:1;
}

+ (id)defaultValueForKey:(id)arg1;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (BOOL)NS_contentsAligningEnabled;
- (void)NS_didChangeDefaultContentsScale:(double)arg1;
- (void)_NS_invalidateSuggestedContentsScale;
- (void)setSublayerTransform:(struct CATransform3D)arg1;
- (void)setTransform:(struct CATransform3D)arg1;
- (void)_NS_accumulateSuggestedScaleBelow:(double *)arg1:(double *)arg2;
- (void)_NS_accumulateSuggestedScale:(double *)arg1:(double *)arg2;
- (void)setNeedsLayout;
- (BOOL)NS_needsLinearMaskOverlayForFontSmoothing;
- (void)_renderSublayersInContext:(struct CGContext *)arg1;
- (void)_renderForegroundInContext:(struct CGContext *)arg1;
- (void)drawInContext:(struct CGContext *)arg1;
- (void)display;
- (void)NS_prepareContentRect:(struct CGRect)arg1;
- (void)NS_invalidatePreparedContentRect;
- (BOOL)NS_canDraw;
- (void)_appkitViewBackingLayerUniqueMethod;
- (void)NS_setView:(id)arg1;
- (id)NS_view;
- (void)setContentsScaling:(id)arg1;
- (void)setContentsCenter:(struct CGRect)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setContents:(id)arg1;
- (void)_alert;

@end

