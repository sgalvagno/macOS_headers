//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AVKit/CALayerDelegate-Protocol.h>

@class CALayer, CAShapeLayer, NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface AVFunctionBarTrackView : NSView <CALayerDelegate>
{
    BOOL _hasRoundedCorners;
    NSMutableArray *_previewLayers;
    CALayer *_containerLayer;
    CALayer *_maskLayer;
    CAShapeLayer *_maskShapeLayer;
    CAShapeLayer *_backgroundShapeLayer;
    double _normalizedCurrentValue;
}

@property(readonly) NSArray *previewLayers; // @synthesize previewLayers=_previewLayers;
@property double normalizedCurrentValue; // @synthesize normalizedCurrentValue=_normalizedCurrentValue;
- (void).cxx_destruct;
- (struct CGPath *)_createPathWithRightCornersRoundedInRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property BOOL hasRoundedCorners;
- (void)updatePreviewLayerContent;
- (struct CGPoint)positionForPreviewLayerWithIndex:(long long)arg1;
- (long long)numberOfPreviewLayersForWidth:(double)arg1;
@property(readonly) struct CGSize previewLayerSize;
@property(readonly) double maximumWidth;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

