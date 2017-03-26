//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSValueTransformer.h>

@interface TIconSizeSliderValueTransformer : NSValueTransformer
{
    double _minSliderValue;
    double _maxSliderValue;
    double _minIconSize;
    double _maxIconSize;
    double _offset;
}

+ (BOOL)allowsReverseTransformation;
+ (Class)transformedValueClass;
- (void)setOffset:(double)arg1;
- (void)setIconSizeMin:(double)arg1 max:(double)arg2;
- (void)setSliderValueMin:(double)arg1 max:(double)arg2;
- (id)reverseTransformedValue:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)init;

@end

