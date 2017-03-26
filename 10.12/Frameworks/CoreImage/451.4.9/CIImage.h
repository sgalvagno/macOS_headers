//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreImage/NSCopying-Protocol.h>
#import <CoreImage/NSSecureCoding-Protocol.h>

@class CIFilterShape, NSDictionary, NSURL;

@interface CIImage : NSObject <NSSecureCoding, NSCopying>
{
    void *_state;
    void *_priv;
}

+ (id)imageWithInternalRepresentation:(void *)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)imageWithArrayOfImages:(id)arg1 selector:(CDUnknownBlockType)arg2;
+ (id)imageWithContentsOfFile:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithContentsOfURL:(id)arg1 options:(id)arg2;
+ (id)imageWithContentsOfURL:(id)arg1;
+ (id)imageWithData:(id)arg1 options:(id)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)emptyImage;
+ (id)noiseImagePadded;
+ (id)noiseImageNearest;
+ (id)noiseImage;
+ (id)imageWithColor:(id)arg1;
+ (id)imageWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithCVImageBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
+ (id)imageWithCVPixelBuffer:(struct __CVBuffer *)arg1;
+ (id)imageWithMTLTexture:(id)arg1 options:(id)arg2;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
+ (id)imageWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
+ (id)imageWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
+ (id)imageWithCGLayer:(struct CGLayer *)arg1 options:(id)arg2;
+ (id)imageWithCGLayer:(struct CGLayer *)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
+ (id)imageWithIOSurface:(struct __IOSurface *)arg1;
+ (id)nullImage;
+ (id)imageWithImageProvider:(id)arg1 size:(unsigned long long)arg2:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
+ (id)imageWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(struct CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
+ (id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3;
+ (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (struct CGRect)regionOfInterestForImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void *)_internalRepresentation;
- (id)_initWithInternalRepresentation:(void *)arg1;
- (id)TIFFRepresentation;
- (void)printTree;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeToTIFF:(id)arg1;
- (id)imageByApplyingFilter:(id)arg1 withInputParameters:(id)arg2;
- (id)filteredImage:(id)arg1 keysAndValues:(id)arg2;
- (BOOL)cacheHint;
- (void)setCacheHint:(BOOL)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
@property(readonly) NSURL *url;
- (BOOL)isOpaque;
@property(readonly) struct CGColorSpace *colorSpace;
@property(readonly) NSDictionary *properties;
- (id)debugDescription;
- (id)description;
- (void)finalize;
- (void)dealloc;
@property(readonly) CIFilterShape *definition;
@property(readonly) struct CGRect extent;
- (id)initWithArrayOfImages:(id)arg1 selector:(CDUnknownBlockType)arg2;
- (id)imageBySettingProperties:(id)arg1;
- (id)_imageBySamplingLinear;
- (id)_imageBySamplingNearest;
- (id)_imageByRenderingToIntermediate;
- (id)imageByTaggingWithColorSpace:(struct CGColorSpace *)arg1;
- (id)imageByColorMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)_imageByMatchingColorSpaceToWorkingSpace:(struct CGColorSpace *)arg1;
- (id)imageByColorMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg1;
- (id)_imageByMatchingWorkingSpaceToColorSpace:(struct CGColorSpace *)arg1;
- (id)imageByApplyingGaussianBlurWithSigma:(double)arg1;
- (id)_imageByApplyingBlur:(double)arg1;
- (id)_imageByApplyingGamma:(double)arg1;
- (id)imageBySettingAlphaOneInExtent:(struct CGRect)arg1;
- (id)imageByUnpremultiplyingAlpha;
- (id)_imageByUnpremultiplying;
- (id)imageByPremultiplyingAlpha;
- (id)_imageByPremultiplying;
- (id)imageByCompositingOverImage:(id)arg1;
- (id)imageByClampingToExtent;
- (id)imageByClampingToRect:(struct CGRect)arg1;
- (id)imageByCroppingToRect:(struct CGRect)arg1;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1 highQualityDownsample:(BOOL)arg2;
- (id)imageByApplyingTransform:(struct CGAffineTransform)arg1;
- (id)initWithContentsOfFile:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 options:(id)arg2;
- (id)initWithContentsOfURL:(id)arg1;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithData:(id)arg1;
- (id)imageByApplyingOrientation:(int)arg1;
- (struct CGAffineTransform)imageTransformForOrientation:(int)arg1;
- (id)init;
- (id)initWithColor:(id)arg1;
- (id)initWithColorR:(double)arg1 G:(double)arg2 B:(double)arg3 A:(double)arg4;
- (id)initWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCVImageBuffer:(struct __CVBuffer *)arg1;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
- (id)initWithCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)_initWithCVImageBuffer:(struct __CVBuffer *)arg1 options:(id)arg2;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
- (struct __CVBuffer *)_originalCVPixelBuffer;
- (void)_setOriginalCVPixelBuffer:(struct __CVBuffer *)arg1;
- (id)initWithMTLTexture:(id)arg1 options:(id)arg2;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 options:(id)arg3;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 options:(id)arg4;
- (id)initWithTexture:(unsigned int)arg1 size:(struct CGSize)arg2 flipped:(BOOL)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (id)_initWithBitmapData:(id)arg1 bytesPerRow:(unsigned long long)arg2 size:(struct CGSize)arg3 format:(int)arg4 options:(id)arg5;
- (id)initWithCGLayer:(struct CGLayer *)arg1 options:(id)arg2;
- (id)initWithCGLayer:(struct CGLayer *)arg1;
- (id)initWithCGImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 options:(id)arg3;
- (id)initWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)_initNaiveWithCGImage:(struct CGImage *)arg1 options:(id)arg2;
- (id)initWithCGImage:(struct CGImage *)arg1;
@property(readonly, nonatomic) struct CGImage *CGImage;
- (struct CGImage *)_originalCGImage;
- (void)_setOriginalCGImage:(struct CGImage *)arg1;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 plane:(unsigned long long)arg2 format:(int)arg3 options:(id)arg4;
- (id)initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2;
- (id)initWithIOSurface:(struct __IOSurface *)arg1;
- (id)_initWithIOSurface:(struct __IOSurface *)arg1 options:(id)arg2 owner:(void *)arg3;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 options:(id)arg2;
- (id)autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 options:(id)arg3;
- (id)_autoRedEyeFilterWithFeatures:(id)arg1 imageProperties:(id)arg2 context:(id)arg3 options:(id)arg4;
- (id)_dictForFeature:(id)arg1 scale:(double)arg2 imageHeight:(float)arg3;
- (id)autoAdjustmentFiltersWithOptions:(id)arg1;
- (id)autoAdjustmentFilters;
- (id)autoAdjustmentFiltersWithImageProperties:(id)arg1 options:(id)arg2;
- (id)_scaleImageToMaxDimension:(unsigned int)arg1;
- (id)_initWithImageProvider:(CDUnknownBlockType)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 surfaceCache:(_Bool)arg6 options:(id)arg7;
- (id)initWithImageProvider:(CDUnknownBlockType)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)initWithImageProvider:(id)arg1 size:(unsigned long long)arg2:(unsigned long long)arg3 format:(int)arg4 colorSpace:(struct CGColorSpace *)arg5 options:(id)arg6;
- (id)initWithImageProvider:(id)arg1 userInfo:(id)arg2 size:(struct CGSize)arg3 format:(int)arg4 flipped:(BOOL)arg5 colorSpace:(struct CGColorSpace *)arg6;
- (id)smartBlackAndWhiteAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartBlackAndWhiteStatistics;
- (id)smartColorAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartToneAdjustmentsForValue:(double)arg1 localLightAutoValue:(double)arg2 andStatistics:(id)arg3;
- (id)smartToneAdjustmentsForValue:(double)arg1 andStatistics:(id)arg2;
- (id)smartColorStatistics;
- (id)smartToneStatistics;
- (id)imageWithExtent:(struct CGRect)arg1 processorDescription:(id)arg2 argumentDigest:(unsigned long long)arg3 inputFormat:(int)arg4 outputFormat:(int)arg5 options:(id)arg6 roiCallback:(CDUnknownBlockType)arg7 processor:(CDUnknownBlockType)arg8;
- (id)localLightStatisticsNoProxy;
- (id)localLightStatistics;
- (id)localLightStatisticsWithProxy:(BOOL)arg1;
- (void)getAutocropRect:(id)arg1 rotateXfrm:(struct CGAffineTransform)arg2 inputImageRect:(struct CGRect)arg3 clipRect:(struct CGRect *)arg4;
- (id)autoRotateFilterFFT:(id)arg1 image:(struct CGImage *)arg2 inputRect:(struct CGRect)arg3;
- (id)getAutoRotateFilter:(id)arg1 ciImage:(id)arg2 rgbRows:(id)arg3 inputRect:(struct CGRect)arg4 rotateCropRect:(struct CGRect *)arg5;
- (struct CGPoint)calcIntersection:(struct CGPoint)arg1 slope1:(struct CGPoint)arg2 pt2:(struct CGPoint)arg3 slope2:(struct CGPoint)arg4;

@end

