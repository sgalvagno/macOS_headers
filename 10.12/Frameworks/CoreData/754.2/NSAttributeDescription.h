//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSPropertyDescription.h>

@class NSData, NSString;

@interface NSAttributeDescription : NSPropertyDescription
{
    unsigned short _type;
    Class _attributeValueClass;
    NSString *_valueTransformerName;
    NSString *_attributeValueClassName;
    id _defaultValue;
}

+ (id)_classNameForType:(unsigned long long)arg1;
+ (void)initialize;
@property BOOL allowsExternalBinaryDataStorage;
- (id)validationWarnings;
- (id)validationPredicates;
@property(readonly, copy) NSData *versionHash;
@property(copy) NSString *valueTransformerName;
- (BOOL)isIndexed;
@property(retain) id defaultValue;
@property unsigned long long attributeType;
@property(copy) NSString *attributeValueClassName;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_sortOutDefaultNumericValuesBecauseDoublesAndFloatsDontCompareEqualAndThatBreaksTests;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (void)setStoresBinaryDataExternally:(BOOL)arg1;
- (BOOL)storesBinaryDataExternally;
- (unsigned long long)_propertyType;
- (Class)_attributeValueClass;
- (id)_initWithType:(unsigned long long)arg1;
- (id)_initWithName:(id)arg1 type:(unsigned long long)arg2;
- (void)_versionHash:(char *)arg1 inStyle:(unsigned long long)arg2;
- (BOOL)_nonPredicateValidateValue:(id *)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id *)arg4;
- (void)_createCachesAndOptimizeState;
- (BOOL)_comparePredicatesAndWarnings:(id)arg1;
- (BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1;
- (long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2;
- (id)_rawValidationWarnings;
- (id)_rawValidationPredicates;
- (BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3;

@end

