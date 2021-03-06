//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AddressBookCore/ABMultiValue.h>

@interface ABMultiValueCoreDataWrapper : ABMultiValue
{
}

+ (BOOL)populateIdentifiers:(id)arg1 values:(id)arg2 labels:(id)arg3 primaryIdentifier:(id *)arg4 withDataFromRecord:(id)arg5 customPropertyDescription:(id)arg6;
+ (id)newWithMultiValueClass:(Class)arg1 managedObject:(id)arg2 property:(id)arg3;
+ (BOOL)populateIdentifiers:(id)arg1 values:(id)arg2 labels:(id)arg3 primaryIdentifier:(id *)arg4 withDataFromManagedObject:(id)arg5 property:(id)arg6;
+ (BOOL)populateIdentifiers:(id)arg1 values:(id)arg2 labels:(id)arg3 primaryIdentifier:(id *)arg4 withDataFromRecord:(id)arg5 property:(id)arg6;
+ (id)primaryIdentifierForEntities:(id)arg1;
+ (BOOL)applyMultiValue:(id)arg1 withCustomProperty:(id)arg2 toRecord:(id)arg3 managedObject:(id)arg4;
+ (BOOL)applyMultiValue:(id)arg1 withProperty:(id)arg2 toManagedObject:(id)arg3;
+ (BOOL)applyMultiValue:(id)arg1 withProperty:(id)arg2 toRecord:(id)arg3;
+ (void)rewireDistributionListConfig:(id)arg1 withPropertyValue:(id)arg2 identifier:(id)arg3;
+ (void)deletePropertyValues:(id)arg1 withKey:(id)arg2 andSaveDistributionListConfigs:(id)arg3 inRecord:(id)arg4 withContext:(id)arg5;
+ (id)messagingAddressesWithService:(id)arg1 owner:(id)arg2;
+ (id)serviceWithName:(id)arg1 inManagedObjectContext:(id)arg2 inPersistentStore:(id)arg3;
+ (void)initialize;
- (id)initWithRecord:(id)arg1 customPropertyDescription:(id)arg2;
- (id)initWithRecord:(id)arg1 customProperty:(id)arg2;
- (id)initWithManagedObject:(id)arg1 property:(id)arg2;
- (id)initWithRecord:(id)arg1 managedObject:(id)arg2 property:(id)arg3;

@end

