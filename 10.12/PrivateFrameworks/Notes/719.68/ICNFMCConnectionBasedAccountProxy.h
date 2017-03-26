//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Notes/ICNFMCAccountProxy.h>

#import <Notes/ICNFMCAccount-Protocol.h>

@class ICNFMCAuthScheme, NSArray, NSString, NSURL;

@interface ICNFMCConnectionBasedAccountProxy : ICNFMCAccountProxy <ICNFMCAccount>
{
    NSString *_primitiveSessionPassword;
}

+ (id)accountTypeString;
+ (void)saveAccountInfoToDefaults;
@property(copy) NSString *primitiveSessionPassword; // @synthesize primitiveSessionPassword=_primitiveSessionPassword;
- (void).cxx_destruct;
- (BOOL)isServerReachable;
- (BOOL)canAuthenticateWithScheme:(id)arg1;
- (id)authenticatedConnection;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)arg1 withConnectTimeout:(double)arg2 readWriteTimeout:(double)arg3;
- (void)respondToHostBecomingReachable;
- (BOOL)connectAndAuthenticate:(id)arg1;
- (BOOL)shouldRetryConnectionWithoutCertificateCheckingAfterError:(id)arg1 host:(id)arg2 didPromptUser:(char *)arg3;
- (id)acAccount;
@property(retain) ICNFMCAuthScheme *preferredAuthScheme;
- (void)setTLSIdentity:(struct OpaqueSecIdentityRef *)arg1;
- (struct OpaqueSecIdentityRef *)copyTLSIdentity;
@property long long securityLayerType;
@property long long portNumber;
@property(copy) NSString *hostname;
- (void)updateFromSuccessfulConnectionPortNumber:(long long)arg1 securityLayerType:(long long)arg2;
@property(readonly, copy) NSString *subscriptionURLLabel;
@property(readonly) NSURL *subscriptionURL;
@property BOOL usesSSL;
@property BOOL shouldUseAuthentication;
@property(readonly, nonatomic) BOOL requiresAuthentication;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(copy) NSString *sessionPassword;
@property(copy) NSString *password;
@property(readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property(readonly, copy, nonatomic) NSArray *standardPorts;
- (BOOL)autodiscoverSettings:(id *)arg1;
@property BOOL configureDynamically;
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(readonly, copy) NSString *accountTypeString;
- (id)initWithManagedObject:(id)arg1;

// Remaining properties
@property BOOL allowInsecureAuthentication;
@property(copy) NSString *canonicalEmailAddress;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy) NSString *displayName;
@property(copy) NSString *externalHostname;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *identifier;
@property(readonly) Class superclass;
@property(copy) NSString *username;

@end

