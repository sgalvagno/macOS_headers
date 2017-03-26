//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Contacts/CNCompoundMultiValuePropertyDescription.h>

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNSocialProfilesDescription : CNCompoundMultiValuePropertyDescription <CNAbstractPropertyDescription>
{
}

- (id)summarizationKeys;
- (CDUnknownBlockType)fromDictionaryTransform;
- (CDUnknownBlockType)dictionaryTransform;
- (Class)labeledValueClass;
- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (id)CNValueForContact:(id)arg1;
- (BOOL)isNonnull;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;
- (void)copyValueFromRemotePerson:(id)arg1 toContact:(id)arg2;
- (void)copyValueFromContact:(id)arg1 toRemotePerson:(id)arg2;
- (void)copyFromLabeledValue:(id)arg1 toOwnedObject:(id)arg2;
- (void)copyFromCoreDataContact:(id)arg1 toContact:(id)arg2;
- (CDUnknownBlockType)ownedObjectToLabeledValueValueTransform;
- (id)coreDataRelationshipKeyPathsToFetch;
- (id)subCoreDataPredicatePropertiesByKey;
- (id)coreDataOwnedEntityName;
- (id)coreDataKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

