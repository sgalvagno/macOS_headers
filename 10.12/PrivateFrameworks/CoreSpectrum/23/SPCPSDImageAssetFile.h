//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCImageAssetFile.h>

@class CUIPSDImageRef, NSArray, NSString;

@interface SPCPSDImageAssetFile : SPCImageAssetFile
{
    CUIPSDImageRef *_psdFileRef;
}

@property(retain) CUIPSDImageRef *psdFileRef; // @synthesize psdFileRef=_psdFileRef;
- (id)childKeyPathSegmentsForParent:(id)arg1 usingPrefix:(id)arg2;
- (id)nameForLayerIndex:(unsigned long long)arg1;
@property(readonly) NSString *layerScheme;
@property(readonly) unsigned long long sliceCount;
@property(readonly) NSArray *layerKeyPaths;
- (struct CGSize)imageSizeInPixels;
- (unsigned long long)layerCount;
- (id)availableAssetKeysUsingLayerIndexes;
- (id)availableAssetKeysUsingLayerGroups;
- (id)_orientationFromQualifiers;
- (id)availableAssetKeys;
- (void)loadData;
- (void)dealloc;

@end

