//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccount.h>

@class NSNumber, NSString, NSURL;

@interface ACAccount (CNAdditions)
+ (id)_cardDAVDataclassProperties;
+ (id)defaultServerURLForChildAccountsOfAccount:(id)arg1;
+ (id)cardDAVChildForParentAccount:(id)arg1;
- (BOOL)_useSSLForSchemeString:(id)arg1;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (id)_valueForAccountPropertyKey:(id)arg1;
- (void)_setValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (id)_schemeStringForUseSSL:(BOOL)arg1;
- (void)_removeAccountPropertyForKey:(id)arg1;
@property(copy, setter=setCNRootFolderID:) NSString *cnRootFolderID;
@property(copy, setter=setCNIdentityEmailAddress:) NSString *cnIdentityEmailAddress;
@property(copy, setter=setCNExternalURL:) NSURL *cnExternalURL;
@property(setter=setCNServerSyncHasTakenPlace:) BOOL cnServerSyncHasTakenPlace;
@property(setter=setCNLocalDataMigrationHasTakenPlace:) BOOL cnLocalDataMigrationHasTakenPlace;
@property(setter=setCNUseSSL:) BOOL cnUseSSL;
@property(copy, setter=setCNServerURL:) NSURL *cnServerURL;
@property(copy, setter=setCNPort:) NSNumber *cnPort;
@property(retain, setter=setCNHostname:) NSString *cnHostname;
@property(readonly) BOOL cnNeedsDiscovery;
@property(readonly) BOOL cnIsLDAPAccount;
@property(readonly) BOOL cnIsiCloudAccount;
@property(readonly) BOOL cnIsGoogleAccount;
@property(readonly) BOOL cnIsExchangeAccount;
@property(readonly) BOOL cnIsEnabledForContactsSearch;
@property(readonly) BOOL cnIsEnabledForContacts;
@property(setter=setCNIsEnabled:) BOOL cnIsEnabled;
@property(readonly) BOOL cnIsGenericCardDAVAccount;
@property(readonly) BOOL cnIsCardDAVAccount;
@property(readonly) BOOL cnHasParentAccount;
@property(readonly) BOOL cnIsDirty;
@end

