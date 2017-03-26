//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIPSDImageRef;

@interface CUIPSDLayerBaseRef : NSObject
{
    CUIPSDImageRef *_imageRef;
    unsigned int _layerIndex;
}

- (struct CGImage *)_createMaskFromAlphaChannel:(long long)arg1;
- (id)vectorMaskRef;
- (id)layerMaskRef;
@property(readonly) BOOL hasVectorMask;
@property(readonly) BOOL hasLayerMask;
@property(readonly) int blendMode;
@property(readonly) double fillOpacity;
@property(readonly) double opacity;
@property(readonly) BOOL visibility;
@property(readonly) struct CGRect bounds;
- (BOOL)isLayerGroup;
- (id)name;
- (id)_psdImageRef;
- (struct CPSDLayerRecord *)_psdLayerRecord;

@end

