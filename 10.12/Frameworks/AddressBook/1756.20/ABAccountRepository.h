//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABAccountCollection-Protocol.h>

@class ABAccount, ABDefaultAccountPreference, NSArray, NSMutableDictionary, NSString;

@interface ABAccountRepository : NSObject <ABAccountCollection>
{
    NSMutableDictionary *_existingAccounts;
    BOOL _areExistingAccountsValid;
    id _futureAutocompletionAccounts;
    id _factory;
    id _defaultAccountPreference;
    BOOL _invalidatesAccountsOnTerminate;
    id _terminateNotificationObserver;
}

+ (id)dictionaryByObscuringPassword:(id)arg1;
+ (void)prepareLocalCacheForAccountWithIdentifier:(id)arg1 factory:(id)arg2;
+ (id)sharedRepository;
@property(readonly, retain) ABDefaultAccountPreference *defaultAccountPreference; // @synthesize defaultAccountPreference=_defaultAccountPreference;
@property(copy) NSString *tag;
- (BOOL)mergeDataFromAccount:(id)arg1 toAccount:(id)arg2 withOptions:(int)arg3 error:(id *)arg4;
- (BOOL)mergeDataFromAccount:(id)arg1 toAccount:(id)arg2 error:(id *)arg3;
- (void)dumpCache;
- (id)sortAccounts:(id)arg1;
- (void)postResetNotification;
- (void)postDidChangeNotificationWithAccounts:(id)arg1;
- (void)postRemovedExternallyNotificationWithAccount:(id)arg1;
- (void)postChangedExternallyNotificationWithAccountIdentifier:(id)arg1;
- (void)postAddedExternallyNotificationWithAccount:(id)arg1;
- (id)autocompletionAccountsFromEnabledAccounts;
- (id)newFutureAutocompletionAccounts;
- (id)futureAutocompletionAccounts;
- (id)autocompletionAccounts;
- (id)autocompletionSources;
- (void)runWithLockLoadingExistingAccountsIfNecessary:(CDUnknownBlockType)arg1;
- (id)sources;
- (void)makeNextAvailableAccountTheDefault;
- (void)setDefaultAccount:(id)arg1;
@property(readonly) ABAccount *defaultAccount;
- (BOOL)shouldAddedAccountBecomeDefault:(id)arg1;
- (id)defaultableAccounts;
- (id)accountComparerForExistingAccounts;
- (id)existingAccountIdentifierEquivalentToProposedConfig:(id)arg1;
@property(readonly, copy) NSArray *allAccounts;
- (id)accounts;
@property(readonly, copy) NSArray *enabledAccounts;
@property(readonly, copy) NSArray *persistentAccounts;
- (id)accountWithIdentifier:(id)arg1;
- (id)sourceWithUID:(id)arg1;
- (id)setEnabled:(BOOL)arg1 forAccountWithIdentifier:(id)arg2;
- (void)invalidateAllAccounts;
- (void)invalidateAutocompletionAccounts;
- (void)invalidateAutocompletionSources;
- (void)replaceAccountWithIdentifier:(id)arg1 shouldPostResetNotification:(BOOL)arg2;
- (void)replaceAccountWithIdentifier:(id)arg1;
- (void)removeSourceWithUid:(id)arg1;
- (BOOL)removeAccounts:(id)arg1 error:(id *)arg2;
- (BOOL)removeAccount:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)removeAccount:(id)arg1 error:(id *)arg2;
- (id)addAccountWithComponents:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)addAccountIfAbsent:(id)arg1 andPostDidChangeNotification:(BOOL)arg2;
- (void)addAccountWithIdentifierIfAbsent:(id)arg1;
- (BOOL)addAccountWithSource:(id)arg1 andPostDidChangeNotification:(BOOL)arg2;
- (BOOL)addAccountWithSource:(id)arg1;
- (id)nts_removeAllExistingAccounts;
- (void)nts_invalidateAutocompletionAccounts;
- (void)nts_removeAccountsFromArray:(id)arg1;
- (void)nts_removeAccount:(id)arg1;
- (void)nts_addAccountsFromArray:(id)arg1;
- (void)nts_addAccount:(id)arg1;
- (id)nts_accountForIdentifier:(id)arg1;
- (id)nts_allExistingAccounts;
- (void)replaceSourceWithUid:(id)arg1;
- (void)invalidateAllSources;
- (void)addSourceWithUidIfAbsent:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
- (void)nts_unregisterForTerminateNotification;
- (void)nts_registerForTerminateNotification;
- (void)setInvalidatesAccountsOnTerminate:(BOOL)arg1;
- (void)runWithLock:(CDUnknownBlockType)arg1;
- (void)refreshEnabledAccounts;
- (id)makeAddressBookWithOptions:(id)arg1;
@property(readonly, copy) NSString *basePath;
- (BOOL)configuredForSingleSource;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFactory:(id)arg1;
- (id)initWithBasePath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

