//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSImage;

@interface WPBadgePicture : NSObject
{
    NSImage *originalImage;
    NSImage *badgeImage;
    struct CGSize targetSize;
    double blurRadius;
    double shadowAlpha;
    double shadowOffsetX;
    double shadowOffsetY;
    double scalingRatio;
    NSColor *backgroundColor;
}

+ (id)badgePictureWithImage:(id)arg1 size:(struct CGSize)arg2;
+ (id)badgePictureWithImageNamed:(id)arg1 size:(struct CGSize)arg2;
- (id)imageWithSize:(struct CGSize)arg1 toFitSize:(struct CGSize)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)backgroundColor;
- (void)setScalingRatio:(double)arg1;
- (double)scalingRatio;
- (void)setShadowOffsetY:(double)arg1;
- (double)shadowOffsetY;
- (void)setShadowOffsetX:(double)arg1;
- (double)shadowOffsetX;
- (void)setShadowAlpha:(double)arg1;
- (double)shadowAlpha;
- (void)setBlurRadius:(double)arg1;
- (double)blurRadius;
- (void)setBadgeImage:(id)arg1;
- (id)badgeImageWithSize:(struct CGSize)arg1;
- (id)badgeImage;
- (void)setOriginalImage:(id)arg1;
- (id)originalImage;
- (void)dealloc;
- (id)initWithImage:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithImageNamed:(id)arg1 size:(struct CGSize)arg2;

@end

