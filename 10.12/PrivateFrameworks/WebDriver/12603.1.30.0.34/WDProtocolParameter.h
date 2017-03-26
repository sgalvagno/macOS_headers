//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WDProtocolType;

__attribute__((visibility("hidden")))
@interface WDProtocolParameter : NSObject
{
    BOOL _optional;
    BOOL _array;
    NSString *_name;
    WDProtocolType *_type;
}

+ (id)parameterFromPayload:(id)arg1 usingTypeDictionary:(id)arg2;
@property(readonly, nonatomic, getter=isArray) BOOL array; // @synthesize array=_array;
@property(readonly, nonatomic, getter=isOptional) BOOL optional; // @synthesize optional=_optional;
@property(readonly, nonatomic) WDProtocolType *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (BOOL)isEqualToParameter:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)decodedInstanceFromPayload:(id)arg1;
- (RefPtr_47980b30)encodedValueForInstance:(id)arg1;
- (BOOL)instanceIsValid:(id)arg1;
- (id)initWithName:(id)arg1 type:(id)arg2 isOptional:(BOOL)arg3 isArray:(BOOL)arg4;

@end

