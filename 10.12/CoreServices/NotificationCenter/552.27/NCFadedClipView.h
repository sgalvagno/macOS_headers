//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CAGradientLayer;

@interface NCFadedClipView : NSView
{
    CAGradientLayer *_horizontalMaskGradient;
    double _clipWidth;
}

@property(nonatomic) double clipWidth; // @synthesize clipWidth=_clipWidth;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)layout;
- (void)_recalculateGradient;
- (void)awakeFromNib;

@end

