//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, UIImageView;

@interface _PKCheckerGridView : UIView
{
    double _gridSize;
    UIColor *_colorA;
    UIColor *_colorB;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIColor *colorB; // @synthesize colorB=_colorB;
@property(retain, nonatomic) UIColor *colorA; // @synthesize colorA=_colorA;
@property(nonatomic) double gridSize; // @synthesize gridSize=_gridSize;
- (void).cxx_destruct;
- (id)gridTileImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

