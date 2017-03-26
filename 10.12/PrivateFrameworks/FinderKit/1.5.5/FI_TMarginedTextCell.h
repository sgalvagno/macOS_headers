//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TTextCell.h>

__attribute__((visibility("hidden")))
@interface FI_TMarginedTextCell : FI_TTextCell
{
    double _leftMargin;
    double _rightMargin;
    _Bool _subpixelAntialiasing;
}

@property(nonatomic) _Bool subpixelAntialiasing; // @synthesize subpixelAntialiasing=_subpixelAntialiasing;
@property(nonatomic) double rightMargin; // @synthesize rightMargin=_rightMargin;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGRect)titleRectForBounds:(struct CGRect)arg1;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)initCommon;

@end

