//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABAccountHidingPolicy-Protocol.h>

@class ABAddressBook, NSString;

@interface ABDefaultAccountHidingPolicy : NSObject <ABAccountHidingPolicy>
{
    ABAddressBook *_addressBook;
    unsigned long long _numberOfDefaultableAccounts;
}

- (BOOL)shouldHideAccount:(id)arg1;
- (BOOL)isAccountEmpty:(id)arg1;
- (BOOL)isAccountEligibleForHiding:(id)arg1;
- (BOOL)isDefaultAccount:(id)arg1;
- (void)analyzeAccount:(id)arg1;
- (void)dealloc;
- (id)initWithAddressBook:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

