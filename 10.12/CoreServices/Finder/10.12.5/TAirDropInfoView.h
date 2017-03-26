//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TUpdateLayerView.h"

@class NSLayoutConstraint;

@interface TAirDropInfoView : TUpdateLayerView
{
    double _superviewHeightCache;
    double _initialBottomConstraintConstantCache;
    NSLayoutConstraint *_bottomConstraint;
    _Bool _isInArcMode;
}

- (void)updateConstraints;
- (void)resizeWithOldSuperviewSize:(struct CGSize)arg1;
- (id)fontSmoothingBackgroundColor;
@property(getter=isInArcMode) _Bool inArcMode; // @synthesize inArcMode=_isInArcMode;
- (void)dealloc;
- (void)awakeFromNib;

@end

