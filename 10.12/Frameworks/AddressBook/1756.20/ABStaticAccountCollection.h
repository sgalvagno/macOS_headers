//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABAccountCollection-Protocol.h>

@class ABAccount, NSArray, NSString;

@interface ABStaticAccountCollection : NSObject <ABAccountCollection>
{
    NSString *_basePath;
    NSArray *_accounts;
    unsigned long long _indexOfDefaultAccount;
    NSString *_tag;
}

+ (id)collectionWithBasePath:(id)arg1 accounts:(id)arg2;
@property(copy) NSString *tag; // @synthesize tag=_tag;
- (id)accountWithIdentifier:(id)arg1;
@property(readonly) ABAccount *defaultAccount;
@property(readonly, copy) NSArray *persistentAccounts;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly, copy) NSArray *allAccounts;
@property(readonly, copy) NSString *basePath;
- (void)dealloc;
- (id)initWithBasePath:(id)arg1 accounts:(id)arg2 indexOfDefaultAccount:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

