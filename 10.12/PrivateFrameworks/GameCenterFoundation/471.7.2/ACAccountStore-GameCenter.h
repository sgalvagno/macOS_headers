//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (GameCenter)
- (void)_gkDeleteCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_gkSaveCredential:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_gkAccountForAppleID:(id)arg1;
- (id)_gkPrimaryCredentialForEnvironment:(long long)arg1;
- (id)_gkAllCredentialsForEnvironment:(long long)arg1;
- (id)_gkAllCredentials;
- (void)_gkSetScope:(unsigned int)arg1 forCredential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_gkCredentialForUsername:(id)arg1 environment:(long long)arg2;
- (id)_gkMapAccountsWithBlock:(CDUnknownBlockType)arg1;
@end

