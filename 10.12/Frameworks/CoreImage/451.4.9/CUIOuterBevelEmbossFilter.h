//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterBevelEmbossFilter : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputSize;
    NSNumber *inputSoften;
    NSNumber *inputAngle;
    CIColor *inputHighlightColor;
    CIColor *inputShadowColor;
}

+ (id)customAttributes;
@property(retain, nonatomic) CIColor *inputShadowColor; // @synthesize inputShadowColor;
@property(retain, nonatomic) CIColor *inputHighlightColor; // @synthesize inputHighlightColor;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputSoften; // @synthesize inputSoften;
@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelC;
- (id)_kernel;

@end

