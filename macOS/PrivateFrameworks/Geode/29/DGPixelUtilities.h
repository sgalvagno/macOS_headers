//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface DGPixelUtilities : NSObject
{
}

+ (void)dumpPixelsToFile:(id)arg1 UTI:(id)arg2 format:(int)arg3 colorSpace:(struct CGColorSpace *)arg4 width:(unsigned long long)arg5 height:(unsigned long long)arg6 srcPtr:(void *)arg7 rowBytes:(long long)arg8;
+ (void)applyOpacityToMask:(struct PFIntRect_st)arg1 maskBufferPtr:(char *)arg2 maskRowBytes:(long long)arg3 opacity:(double)arg4;
+ (void)getScaledPaddedRGBAfTile:(struct PFIntRect_st)arg1 srcPtr:(struct DGRGBAf_t *)arg2 srcPtrRowBytes:(long long)arg3 scaledDestRect:(struct PFIntRect_st)arg4 scale:(double)arg5 destPtr:(struct DGRGBAf_t *)arg6 destPtrRowBytes:(long long)arg7 padValue:(struct DGRGBAf_t)arg8;
+ (void)getScaledPaddedTile:(struct PFIntRect_st)arg1 srcPtr:(char *)arg2 srcPtrRowBytes:(long long)arg3 scaledDestRect:(struct PFIntRect_st)arg4 scale:(double)arg5 destPtr:(char *)arg6 destPtrRowBytes:(long long)arg7 padValue:(unsigned char)arg8;
+ (void)blendRect:(struct PFIntRect_st)arg1 ARGB8FillValue:(struct DGARGB8_t)arg2 bufferBounds:(struct PFIntRect_st)arg3 bufferPtr:(struct DGARGB8_t *)arg4 rowBytes:(long long)arg5;
+ (void)fillRect:(struct PFIntRect_st)arg1 RGBAfFillValue:(struct DGRGBAf_t)arg2 bufferBounds:(struct PFIntRect_st)arg3 bufferPtr:(struct DGRGBAf_t *)arg4 rowBytes:(long long)arg5;
+ (void)fillRect:(struct PFIntRect_st)arg1 uint8FillValue:(unsigned char)arg2 bufferBounds:(struct PFIntRect_st)arg3 bufferPtr:(char *)arg4 rowBytes:(long long)arg5;
+ (void)fillRect:(struct PFIntRect_st)arg1 RGBA16FillValue:(struct DGRGBA16_t)arg2 bufferBounds:(struct PFIntRect_st)arg3 bufferPtr:(struct DGRGBA16_t *)arg4 rowBytes:(long long)arg5;
+ (void)fillRect:(struct PFIntRect_st)arg1 ARGB8FillValue:(struct DGARGB8_t)arg2 bufferBounds:(struct PFIntRect_st)arg3 bufferPtr:(struct DGARGB8_t *)arg4 rowBytes:(long long)arg5;

@end

