//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CUIOuterGlowOrShadowFilterLocal : CIFilter
{
    CIImage *inputImage;
    CIVector *inputOffset;
    NSNumber *inputRange;
    NSNumber *inputSize;
    NSNumber *inputSpread;
    CIColor *inputColor;
}

+ (id)customAttributes;
+ (id)filterWithName:(id)arg1;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputSpread; // @synthesize inputSpread;
@property(retain, nonatomic) NSNumber *inputSize; // @synthesize inputSize;
@property(retain, nonatomic) NSNumber *inputRange; // @synthesize inputRange;
@property(retain, nonatomic) CIVector *inputOffset; // @synthesize inputOffset;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (void)setDefaults;
- (id)_kernel;
- (id)_kernelWithImageMask;
- (void)dealloc;

@end

