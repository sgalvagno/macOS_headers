//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABSearchOperationsFactory-Protocol.h>

@class ABAccount, NSString;

__attribute__((visibility("hidden")))
@interface ABDirectorySearchOperationsFactory : NSObject <ABSearchOperationsFactory>
{
    ABAccount *_account;
    Class _searchOperationClass;
}

- (id)searchOperationsForString:(id)arg1 addressBook:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)initWithAccount:(id)arg1 searchOperationClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

