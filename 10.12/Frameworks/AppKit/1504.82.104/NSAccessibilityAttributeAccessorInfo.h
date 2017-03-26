//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSAccessibilityAttributeAccessorInfo : NSObject
{
    NSString *_attribute;
    long long _returnType;
    BOOL _parameterized;
    SEL _getter;
    SEL _setter;
    long long _paramType;
}

+ (id)_stringForAttributeType:(long long)arg1;
+ (id)stringArrayForEnumType:(long long)arg1;
@property(getter=isParameterized) BOOL parameterized; // @synthesize parameterized=_parameterized;
@property SEL setter; // @synthesize setter=_setter;
@property SEL getter; // @synthesize getter=_getter;
@property long long paramType; // @synthesize paramType=_paramType;
@property long long returnType; // @synthesize returnType=_returnType;
@property(retain) NSString *attribute; // @synthesize attribute=_attribute;
- (void)dealloc;
- (id)debuggingDictionary;
- (BOOL)setAttributeValueForObject:(id)arg1 withValue:(id)arg2;
- (void)_setAttributeValueForObject:(id)arg1 withValue:(id)arg2;
- (BOOL)getAttributeValue:(id *)arg1 forObject:(id)arg2;
- (id)_getAttributeValueForObject:(id)arg1;
- (BOOL)getParameterizedAttributeValue:(id *)arg1 forObject:(id)arg2 withParameter:(id)arg3;
- (id)_getParameterizedAttributeForObject:(id)arg1 withParameter:(id)arg2;
- (id)description;
@property SEL action;
- (BOOL)objectSupportsSetter:(id)arg1;
- (BOOL)objectSupportsGetter:(id)arg1;
- (BOOL)_isSelector:(SEL)arg1 supportedByObject:(id)arg2;

@end

