//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABMultiValue, NSArray, NSString, WPODRecord;

@interface WPMultiValue : NSObject
{
    ABMultiValue *_abMultiValue;
    WPODRecord *_wpODRecord;
    id _mappedProperty;
    NSString *_property;
    NSString *_prefix;
    NSArray *_odLabels;
    NSArray *_values;
}

+ (id)wpMultiValueWithLabels:(id)arg1 values:(id)arg2;
+ (id)wpMultiValue:(id)arg1 withoutPrefix:(id)arg2;
+ (id)wpMultiValueWithODRecord:(id)arg1 forProperty:(id)arg2;
+ (id)wpMultiValueWithABMultiValue:(id)arg1 forProperty:(id)arg2;
- (id)odLabels;
- (id)property;
- (id)odRecord;
- (void)setValues:(id)arg1 forLabel:(id)arg2;
- (unsigned long long)count;
- (id)allValuesWithPrefix;
- (id)allValues;
- (id)valuesForLabel:(id)arg1;
- (id)allLabels;
- (id)prefix;
- (id)mappedProperty;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWPMultiValueWithLabels:(id)arg1 values:(id)arg2;
- (id)initWPMultiValueWithMultivalue:(id)arg1 withoutPrefix:(id)arg2;
- (id)initWPMultiValueWithODRecord:(id)arg1 forProperty:(id)arg2;
- (id)initWPMultiValueWithABMultiValue:(id)arg1 forProperty:(id)arg2;

@end

