//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreUI/CUIPSDLayerBaseRef.h>

@class _CUIPSDSublayerInfo;

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
{
    _CUIPSDSublayerInfo *_sublayerInfo;
}

- (id)layerRefAtIndex:(unsigned int)arg1;
- (id)layerNames;
- (unsigned int)numberOfLayers;
- (BOOL)isGroupEnd;
- (BOOL)isGroupStart;
- (BOOL)isOpen;
- (BOOL)_isGroupType:(unsigned int)arg1;
- (struct CGRect)bounds;
- (BOOL)isLayerGroup;
- (void)dealloc;
- (id)initWithImageRef:(id)arg1 layerIndex:(unsigned int)arg2;
- (void)enumerateLayersUsingBlock:(CDUnknownBlockType)arg1;
- (id)layerEnumerator;

@end

