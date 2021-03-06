//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsThemeView.h"

@class NSString, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface TrafficFeatureTitleView : MapsThemeView
{
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (struct CGSize)intrinsicContentSize;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

