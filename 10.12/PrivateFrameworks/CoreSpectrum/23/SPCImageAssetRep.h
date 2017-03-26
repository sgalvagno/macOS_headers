//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

#import <CoreSpectrum/NSCopying-Protocol.h>

@class NSString, SPCImageAssetFile, SPCImageAssetKey, SPCImageAssetRenderer;

@interface SPCImageAssetRep : SPCObject <NSCopying>
{
    SPCImageAssetKey *_imageAssetKey;
    NSString *_absoluteFilePath;
    SPCImageAssetFile *_assetFile;
    SPCImageAssetRenderer *_assetRenderer;
    struct CGSize _imageSizeInPixels;
}

@property(retain, nonatomic) SPCImageAssetRenderer *assetRenderer; // @synthesize assetRenderer=_assetRenderer;
@property(retain) SPCImageAssetFile *assetFile; // @synthesize assetFile=_assetFile;
@property(readonly) NSString *absoluteFilePath; // @synthesize absoluteFilePath=_absoluteFilePath;
@property(readonly) struct CGSize imageSizeInPixels; // @synthesize imageSizeInPixels=_imageSizeInPixels;
@property(retain) SPCImageAssetKey *imageAssetKey; // @synthesize imageAssetKey=_imageAssetKey;
- (void)drawInContext:(struct CGContext *)arg1 atSize:(struct CGSize)arg2;
- (Class)assetRendererClass;
- (id)imageForSize:(struct CGSize)arg1;
@property(readonly) struct CGSize imageSize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

