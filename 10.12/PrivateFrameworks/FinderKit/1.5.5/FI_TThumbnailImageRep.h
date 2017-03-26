//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSBitmapImageRep.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface FI_TThumbnailImageRep : NSBitmapImageRep
{
    double _scaleFactor;
    struct TNSRef<FI_TInlinePreviewData *, void> _inlinePreviewData;
}

@property(readonly) double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain) NSDictionary *clientProperties; // @dynamic clientProperties;
@property struct CGRect contentRect; // @dynamic contentRect;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithCIImage:(id)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithBitmapDataPlanes:(char **)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(BOOL)arg6 isPlanar:(BOOL)arg7 colorSpaceName:(id)arg8 bitmapFormat:(unsigned long long)arg9 bytesPerRow:(long long)arg10 bitsPerPixel:(long long)arg11;
- (id)initWithBitmapDataPlanes:(char **)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 bitsPerSample:(long long)arg4 samplesPerPixel:(long long)arg5 hasAlpha:(BOOL)arg6 isPlanar:(BOOL)arg7 colorSpaceName:(id)arg8 bytesPerRow:(long long)arg9 bitsPerPixel:(long long)arg10;
- (id)initWithFocusedViewRect:(struct CGRect)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scaleFactor:(double)arg2;

@end

