//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface CIContext : NSObject
{
    void *_priv;
}

+ (struct CGColorSpace *)defaultGrayColorSpace;
+ (struct CGColorSpace *)defaultRGBColorSpace;
+ (struct CGColorSpace *)defaultWorkingColorSpace;
+ (int)_crashed_because_nonaddressable_memory_was_passed_to_render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
+ (id)contextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (id)contextWithMTLDevice:(id)arg1;
+ (id)contextWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 options:(id)arg3;
+ (id)contextWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextWithOptions:(id)arg1;
+ (id)context;
+ (id)_singletonContext;
+ (struct Context *)internalCLContextWithOptions:(id)arg1;
+ (struct Context *)internalCLContextWithOptions:(id)arg1 glContext:(void *)arg2;
+ (struct Context *)internalContextWithMTLDevice:(id)arg1 options:(id)arg2;
+ (struct Context *)internalContextWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 options:(id)arg3;
+ (struct Context *)internalGLContextWithOptions:(id)arg1;
+ (id)offlineGPUAtIndex:(unsigned int)arg1;
+ (id)offlineGPUAtIndex:(unsigned int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 sharedContext:(struct _CGLContextObject *)arg4;
+ (id)contextForOfflineGPUAtIndex:(unsigned int)arg1;
+ (id)contextForOfflineGPUAtIndex:(unsigned int)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3 sharedContext:(struct _CGLContextObject *)arg4;
+ (unsigned int)offlineGPUCount;
+ (id)_offlineGPUs;
- (id)createColorCubeDataForFilters:(id)arg1 dimension:(int)arg2;
- (id)description;
- (struct CGRect)bounds;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGAffineTransform)CTM;
- (void)setCTM:(struct CGAffineTransform)arg1;
- (BOOL)measureRequirementsOf:(id)arg1 query:(int)arg2:(id *)arg3 results:(struct CGRect *)arg4;
- (id)flatten:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)clearCaches;
- (void)reclaimResources;
@property(readonly, nonatomic) int workingFormat;
@property(readonly, nonatomic) struct CGColorSpace *workingColorSpace;
- (struct CGColorSpace *)_outputColorSpace;
- (struct CGSize)outputImageMaximumSize;
- (struct CGSize)inputImageMaximumSize;
- (unsigned long long)maximumOutputImageSize;
- (unsigned long long)maximumInputImageSize;
- (struct CGLayer *)createCGLayerWithSize:(struct CGSize)arg1 info:(struct __CFDictionary *)arg2;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(BOOL)arg5;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3;
- (struct CGImage *)createCGImage:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)render:(id)arg1 toIOSurface:(struct __IOSurface *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)render:(id)arg1 toMTLTexture:(id)arg2 commandBuffer:(id)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 target:(unsigned int)arg3 bounds:(struct CGRect)arg4 colorSpace:(struct CGColorSpace *)arg5;
- (void)render:(id)arg1 toTexture:(unsigned int)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)drawImage:(id)arg1 inRect:(struct CGRect)arg2 fromRect:(struct CGRect)arg3;
- (void)drawImage:(id)arg1 atPoint:(struct CGPoint)arg2 fromRect:(struct CGRect)arg3;
- (void)render:(id)arg1;
- (void)_insertEventMarker:(const char *)arg1;
- (_Bool)_isCGBackedContext;
- (_Bool)_isEAGLBackedContext;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2 bounds:(struct CGRect)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (void)render:(id)arg1 toCVPixelBuffer:(struct __CVBuffer *)arg2;
- (void)render:(id)arg1 toBitmap:(void *)arg2 rowBytes:(long long)arg3 bounds:(struct CGRect)arg4 format:(int)arg5 colorSpace:(struct CGColorSpace *)arg6;
- (id)initWithMTLDevice:(id)arg1 options:(id)arg2;
- (id)initWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;
- (id)initWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2 options:(id)arg3;
- (id)initWithCGLContext:(struct _CGLContextObject *)arg1 pixelFormat:(struct _CGLPixelFormatObject *)arg2;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)abort;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (void)_gpuContextCheck;
- (id)_initWithInternalRepresentation:(void *)arg1;
@property(readonly) struct Context *_internalContext;
- (struct CGImage *)_createCGImage:(id)arg1 fromRect:(struct CGRect)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 deferred:(BOOL)arg5 textureLimit:(unsigned long long)arg6;
- (BOOL)writeJPEGRepresentationOfImage:(id)arg1 toURL:(id)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4 error:(id *)arg5;
- (BOOL)writeTIFFRepresentationOfImage:(id)arg1 toURL:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 options:(id)arg5 error:(id *)arg6;
- (id)JPEGRepresentationOfImage:(id)arg1 colorSpace:(struct CGColorSpace *)arg2 options:(id)arg3;
- (id)TIFFRepresentationOfImage:(id)arg1 format:(int)arg2 colorSpace:(struct CGColorSpace *)arg3 options:(id)arg4;

@end

