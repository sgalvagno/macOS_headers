//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDuet/_DKObject.h>

#import <CoreDuet/_DKHasComparableValue-Protocol.h>
#import <CoreDuet/_DKHasObjectType-Protocol.h>
#import <CoreDuet/_DKHasPrimaryValue-Protocol.h>

@class NSString, _DKIdentifierType;

@interface _DKIdentifier : _DKObject <_DKHasComparableValue, _DKHasPrimaryValue, _DKHasObjectType>
{
    NSString *_stringValue;
    _DKIdentifierType *_identifierType;
}

+ (BOOL)supportsSecureCoding;
+ (id)identifierWithString:(id)arg1 type:(id)arg2;
+ (id)_identifierFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)objectFromManagedObject:(id)arg1 readMetadata:(BOOL)arg2 cache:(id)arg3;
+ (id)entityName;
@property(retain) _DKIdentifierType *identifierType; // @synthesize identifierType=_identifierType;
@property(retain) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void).cxx_destruct;
- (long long)integerValue;
- (double)doubleValue;
- (id)primaryValue;
- (long long)compareValue:(id)arg1;
- (id)objectType;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 type:(id)arg2;
- (BOOL)copyToManagedObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

