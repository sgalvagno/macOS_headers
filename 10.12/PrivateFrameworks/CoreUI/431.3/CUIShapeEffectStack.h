//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CUIShapeEffectStack : NSObject
{
    float shapeOpacity;
    float outputOpacity;
    unsigned int outputBlendMode;
    unsigned long long hueSaturationCount;
    CDStruct_2463d205 *hueSaturation;
    unsigned long long colorOverlayCount;
    CDStruct_2be49d17 *colorOverlay;
    unsigned long long innerGradientCount;
    CDStruct_bdea167c *innerGradient;
    unsigned long long innerGlowCount;
    CDStruct_3d979a67 *innerGlow;
    unsigned long long innerShadowCount;
    CDStruct_a5d4af33 *innerShadow;
    unsigned long long outerGlowCount;
    CDStruct_265c7ca9 *outerGlow;
    unsigned long long engraveShadowCount;
    CDStruct_ca46f23f *engraveShadow;
    unsigned long long extraShadowCount;
    CDStruct_ca46f23f *extraShadow;
    unsigned long long bevelEmbossCount;
    CDStruct_c78fd0c4 *emboss;
    float scalefactor;
    int renderStrategy;
}

+ (id)shapeEffectSingleBlurFrom:(id)arg1 withInteriorFill:(id)arg2 offset:(struct CGPoint)arg3 blurSize:(float)arg4 innerGlowRed:(float)arg5 innerGlowGreen:(float)arg6 innerGlowBlue:(float)arg7 innerGlowOpacity:(float)arg8 innerShadowRed:(float)arg9 innerShadowGreen:(float)arg10 innerShadowBlue:(float)arg11 innerShadowOpacity:(float)arg12 outerGlowRed:(float)arg13 outerGlowGreen:(float)arg14 outerGlowBlue:(float)arg15 outerGlowOpacity:(float)arg16 outerShadowRed:(float)arg17 outerShadowGreen:(float)arg18 outerShadowBlue:(float)arg19 outerShadowOpacity:(float)arg20 hasInsideShadowBlur:(BOOL)arg21 hasOutsideShadowBlur:(BOOL)arg22;
+ (id)hueSaturationFrom:(id)arg1 withCenterAngle:(double)arg2 width:(double)arg3 tintRed:(float)arg4 tintGreen:(float)arg5 tintBlue:(float)arg6;
+ (id)bevelEmbossFrom:(id)arg1 withSize:(unsigned int)arg2 soften:(unsigned int)arg3 angle:(float)arg4 altitude:(float)arg5 highlightRed:(float)arg6 highlightGreen:(float)arg7 highlightBlue:(float)arg8 highlightOpacity:(float)arg9 shadowRed:(float)arg10 shadowGreen:(float)arg11 shadowBlue:(float)arg12 shadowOpacity:(float)arg13 bevelStyle:(unsigned int)arg14;
+ (id)outerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 size:(unsigned int)arg3 spread:(unsigned int)arg4 red:(float)arg5 green:(float)arg6 blue:(float)arg7 opacity:(float)arg8;
+ (id)outerGlowFrom:(id)arg1 withSize:(unsigned int)arg2 spread:(unsigned int)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerShadowFrom:(id)arg1 withOffset:(struct CGPoint)arg2 radius:(float)arg3 red:(float)arg4 green:(float)arg5 blue:(float)arg6 opacity:(float)arg7;
+ (id)innerGlowFrom:(id)arg1 withRadius:(float)arg2 red:(float)arg3 green:(float)arg4 blue:(float)arg5 opacity:(float)arg6;
+ (id)imageFromBlendWithMask:(id)arg1 foreground:(id)arg2 background:(id)arg3;
+ (id)shadowFrom:(id)arg1 red:(float)arg2 green:(float)arg3 blue:(float)arg4 opacity:(float)arg5;
+ (id)gradientWithParameters:(CDStruct_bdea167c *)arg1 inRect:(struct CGRect)arg2;
+ (id)rectangle:(struct CGRect)arg1 withRed:(float)arg2 green:(float)arg3 blue:(float)arg4 alpha:(float)arg5;
+ (id)colorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithGray:(float)arg1 alpha:(float)arg2;
+ (id)blur:(id)arg1 radius:(float)arg2;
+ (id)invert:(id)arg1;
+ (id)image:(id)arg1 withOpacity:(float)arg2;
+ (id)blend:(id)arg1 over:(id)arg2 blendKind:(unsigned int)arg3;
+ (id)composite:(id)arg1 atop:(id)arg2;
+ (id)composite:(id)arg1 outOf:(id)arg2;
+ (id)composite:(id)arg1 into:(id)arg2;
+ (id)composite:(id)arg1 over:(id)arg2;
+ (id)unsharpMask:(id)arg1 radius:(float)arg2 intensity:(float)arg3;
+ (id)pixelZoomed:(id)arg1 scale:(int)arg2 about:(struct CGPoint)arg3;
+ (id)adjustOpacity:(id)arg1 by:(float)arg2;
+ (id)offset:(id)arg1 by:(struct CGPoint)arg2;
+ (id)sharedCIContext;
+ (id)preferredCIContextOptions;
@property(readonly) unsigned int outputBlendMode; // @synthesize outputBlendMode;
- (id)cacheKey;
- (id)processedImageFromShapePath:(struct CGPath *)arg1 inRect:(struct CGRect)arg2;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 ciContext:(id)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2 cache:(BOOL)arg3;
- (struct CGImage *)newFlattenedImageFromShapeCGImage:(struct CGImage *)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1 withScale:(double)arg2;
- (id)processedImageFromShapeImage:(id)arg1;
- (CDStruct_3c058996)effectInsetsWithScale:(double)arg1;
- (struct CGRect)effectPaddingWithScale:(double)arg1;
- (id)compositeEffectStackWithShapeImage:(id)arg1 withScale:(double)arg2;
- (id)optimizedSingleBlurEffectCompositeWithShapeImage:(id)arg1;
- (id)standardEffectCompositeWithShapeImage:(id)arg1;
- (void)substituteTintableEffectsWithColor:(struct CGColor *)arg1;
- (void)adjustEffectColorsToTemperature:(int)arg1 onlyTintableColors:(BOOL)arg2;
- (void)scaleBrightnessOfEffectColorsByAmount:(double)arg1 onlyTintableColors:(BOOL)arg2;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1 tintEffectColors:(BOOL)arg2;
- (void)applyCustomForegroundColor:(struct CGColor *)arg1;
- (void)_normalizeEffectParameters;
- (void)scaleEffectParametersBy:(double)arg1;
- (void)updateOutputBlendingWithInteriorFillHeuristic;
- (int)cgBlendModeForOutputBlending;
- (id)imageWithBevelEmbossOfImage:(id)arg1 effect:(CDStruct_c78fd0c4)arg2;
- (id)imageWithExtraShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithEngraveShadowOfImage:(id)arg1 effect:(CDStruct_ca46f23f)arg2;
- (id)imageWithOuterGlowOfImage:(id)arg1 effect:(CDStruct_265c7ca9)arg2;
- (id)imageWithInteriorGradientFillOfImage:(id)arg1 effect:(CDStruct_bdea167c)arg2;
- (id)imageWithHueSaturationOfImage:(id)arg1 effect:(CDStruct_2463d205)arg2;
- (id)imageWithColorOverlayOfImage:(id)arg1 effect:(CDStruct_2be49d17)arg2;
- (id)imageWithAdjustedOutputOpacityOfImage:(id)arg1 opacity:(float)arg2;
- (id)imageWithAdjustedShapeOpacityOfImage:(id)arg1 opacity:(float)arg2;
- (id)imageWithInnerShadowOfImage:(id)arg1 effect:(CDStruct_a5d4af33)arg2;
- (id)imageWithInnerGlowOfImage:(id)arg1 effect:(CDStruct_3d979a67)arg2;
- (id)imageWithSingleBlurShapeEffectOfImage:(id)arg1 withInteriorFill:(id)arg2;
- (id)effectPreset;
- (id)initWithEffectPreset:(id)arg1;
- (void)_updateRenderStrategyFromEffect:(unsigned int)arg1;
- (BOOL)_precompositeColorOverlayInnerGradient;
- (BOOL)hasHueSaturation;
- (void)_setHueSaturationAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasBevelEmboss;
- (void)_setBevelEmbossAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasExtraShadow;
- (void)_setExtraShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasEngraveShadow;
- (void)_setEngraveShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasOuterGlow;
- (void)_setOuterGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasInnerShadow;
- (void)_setInnerShadowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (BOOL)hasInnerGlow;
- (void)_setInnerGlowAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (float)innerGradientOpacity;
- (BOOL)hasInnerGradient;
- (void)_setInteriorGradientAtIndex:(unsigned long long)arg1 fromPreset:(id)arg2 index:(unsigned int)arg3;
- (float)colorOverlayOpacity;
- (BOOL)hasColorOverlay;
- (void)_setColorFillAtIndex:(unsigned long long)arg1 FromPreset:(id)arg2 index:(unsigned int)arg3;
- (void)_setOutputOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_setShapeOpacityFromPreset:(id)arg1 atIndex:(unsigned int)arg2;
- (void)_cleanupEffectSettings;
- (void)dealloc;

@end

