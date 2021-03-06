//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol NSObject;

@interface PLPropertyValidationRule : NSObject
{
    long long _type;
    NSString *_keyPath;
    id <NSObject> _expectedValue;
    id <NSObject> _expectedValueRangeLow;
    id <NSObject> _expectedValueRangeHigh;
    NSArray *_expectedValues;
}

@property(retain, nonatomic) NSArray *expectedValues; // @synthesize expectedValues=_expectedValues;
@property(retain, nonatomic) id <NSObject> expectedValueRangeHigh; // @synthesize expectedValueRangeHigh=_expectedValueRangeHigh;
@property(retain, nonatomic) id <NSObject> expectedValueRangeLow; // @synthesize expectedValueRangeLow=_expectedValueRangeLow;
@property(retain, nonatomic) id <NSObject> expectedValue; // @synthesize expectedValue=_expectedValue;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)descriptionOfCurrentValuesOfObject:(id)arg1;
- (id)currentValuesOfObject:(id)arg1;
- (id)keyPaths;
- (id)predicate;
- (BOOL)evaluateWithObject:(id)arg1 outMessage:(id *)arg2;
- (id)reverseRule;

@end

