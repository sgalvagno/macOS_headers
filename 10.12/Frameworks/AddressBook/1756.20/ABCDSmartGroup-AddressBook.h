//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContactsPersistence/ABCDSmartGroup.h>

@interface ABCDSmartGroup (AddressBook)
+ (void)addMappedKeysToDictionary:(id)arg1 mappedEntities:(id)arg2 mappedEntitiesMainKeys:(id)arg3 entityWithValueConverter:(struct __CFDictionary *)arg4 valueWithEntityConverter:(struct __CFDictionary *)arg5;
- (id)affectedStoresInMembershipPredicate;
- (id)contactMembershipRecursivePredicate;
- (id)searchElement;
- (id)transformedSearchElement;
- (id)contactMembershipPredicate;
@end

