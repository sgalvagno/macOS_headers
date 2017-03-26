//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCNPropertyDescription.h>

#import <AddressBook/ABCNAbstractPropertyDescription-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABCNUrlAddressesDescription : ABCNPropertyDescription <ABCNAbstractPropertyDescription>
{
}

- (BOOL)isValue:(id)arg1 equivalentToValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)copyFromContact:(id)arg1 to:(id)arg2;
- (BOOL)isEqualForContact:(id)arg1 other:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

