//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface _NSInlineButtonBezelView : NSView
{
    CAShapeLayer *_shapeLayer;
    long long _backgroundStyle;
    long long _bezelState;
}

+ (id)keyPathsForValuesInvalidatingDisplay;
@property long long bezelState; // @synthesize bezelState=_bezelState;
@property long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

