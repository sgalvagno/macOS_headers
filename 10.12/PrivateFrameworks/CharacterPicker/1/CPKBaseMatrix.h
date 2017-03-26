//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface CPKBaseMatrix : NSMatrix
{
    NSView *_clippingView;
    int _fadeoutEdge;
    struct CGImage *_fadeoutMaskImage;
    BOOL _clickedByDragging;
}

@property BOOL clickedByDragging; // @synthesize clickedByDragging=_clickedByDragging;
@property int fadeoutEdge; // @synthesize fadeoutEdge=_fadeoutEdge;
@property NSView *clippingView; // @synthesize clippingView=_clippingView;
- (BOOL)allowsVibrancy;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (struct CGImage *)_createFadeoutMaskImage:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (id)AXDescriptionForCell:(id)arg1;
- (void)dealloc;

@end

