//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface _PKInkAttributesOpacityLabel : UIView
{
    double _opacityValue;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double opacityValue; // @synthesize opacityValue=_opacityValue;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)isRTLLanguage;
- (id)initWithFrame:(struct CGRect)arg1;

@end

