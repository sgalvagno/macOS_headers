//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PCIconTextField.h"

__attribute__((visibility("hidden")))
@interface PCProgressTextField : PCIconTextField
{
}

+ (Class)cellClass;
+ (void)initialize;
- (BOOL)trackAccessoryCellWithEvent:(id)arg1;
- (void)stopAnimation:(id)arg1;
- (void)startAnimation:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)setPieHidden:(BOOL)arg1;
- (void)setMinValue:(double)arg1;
- (void)setMaxValue:(double)arg1;
- (void)setIndeterminate:(BOOL)arg1;
- (void)setDoubleValue:(double)arg1;
- (double)minValue;
- (double)maxValue;
- (BOOL)isIndeterminate;
- (BOOL)isAnimating;
- (double)doubleValue;
- (void)dealloc;

@end

