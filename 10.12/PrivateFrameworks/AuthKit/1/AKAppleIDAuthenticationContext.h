//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/AKAppleIDAuthenticationLimitedUIProvider-Protocol.h>
#import <AuthKit/CDPAuthProvider-Protocol.h>
#import <AuthKit/NSSecureCoding-Protocol.h>

@class AKAnisetteData, AKDevice, CDPRecoveryController, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSUUID;
@protocol AKAnisetteServiceProtocol, CDPStateUIProvider, OS_dispatch_queue;

@interface AKAppleIDAuthenticationContext : NSObject <AKAppleIDAuthenticationLimitedUIProvider, CDPAuthProvider, NSSecureCoding>
{
    id <CDPStateUIProvider> _cdpUiProvider;
    NSString *_generatedCode;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSString *_deviceClass;
    NSString *_deviceColor;
    NSString *_deviceEnclosureColor;
    struct __CFUserNotification *_activeSecondFactoryEntryPrompt;
    CDUnknownBlockType _secondFactoryEntryCompletion;
    NSObject<OS_dispatch_queue> *_secondFactorQueue;
    CDPRecoveryController *_recoveryController;
    AKDevice *_proxiedDevice;
    AKDevice *_companionDevice;
    NSDictionary *_recoveryInfo;
    BOOL _isProxyingForApp;
    BOOL _shouldSendIdentityTokenForRemoteUI;
    BOOL _isPasswordEditable;
    BOOL _isUsernameEditable;
    BOOL _shouldAllowAppleIDCreation;
    BOOL _needsCredentialRecovery;
    BOOL _needsNewAppleID;
    BOOL _needsPasswordChange;
    BOOL _isTriggeredByNotification;
    BOOL _isEphemeral;
    BOOL _shouldOfferSecurityUpgrade;
    BOOL _shouldPromptForPasswordOnly;
    BOOL _shouldUpdatePersistentServiceTokens;
    BOOL _shouldPreventInteractiveAuth;
    BOOL _shouldForceInteractiveAuth;
    BOOL _shouldRequestRecoveryPET;
    BOOL _shouldRequestShortLivedToken;
    BOOL _shouldRequestConfigurationInfo;
    BOOL _supportsPiggybacking;
    BOOL _anticipateEscrowAttempt;
    BOOL _isFirstTimeLogin;
    BOOL _shouldSkipSettingsLaunchAlert;
    NSString *_proxiedAppBundleID;
    NSUUID *_identifier;
    NSString *_passwordPromptTitle;
    NSString *_proxiedAppName;
    NSString *_password;
    unsigned long long _capabilityForUIDisplay;
    NSString *_shortLivedToken;
    NSString *_message;
    NSString *_username;
    long long _serviceType;
    NSString *_reason;
    NSString *_defaultButtonString;
    long long _maximumLoginAttempts;
    NSArray *_serviceIdentifiers;
    NSString *_DSID;
    NSString *_altDSID;
    NSDictionary *_httpHeadersForRemoteUI;
    id _clientInfo;
    NSString *_title;
    NSString *_helpAnchor;
    NSString *_helpBook;
    id <AKAnisetteServiceProtocol> _anisetteDataProvider;
    NSNumber *_isAppleIDLoginEnabled;
    NSNumber *_hasEmptyPassword;
    NSSet *_desiredInternalTokens;
    AKAnisetteData *_proxiedDeviceAnisetteData;
    AKAnisetteData *_companionDeviceAnisetteData;
    NSString *_displayString;
    NSString *_displayTitle;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=_displayString;
@property(retain) AKAnisetteData *companionDeviceAnisetteData; // @synthesize companionDeviceAnisetteData=_companionDeviceAnisetteData;
@property(retain) AKAnisetteData *proxiedDeviceAnisetteData; // @synthesize proxiedDeviceAnisetteData=_proxiedDeviceAnisetteData;
@property BOOL shouldSkipSettingsLaunchAlert; // @synthesize shouldSkipSettingsLaunchAlert=_shouldSkipSettingsLaunchAlert;
@property(setter=setFirstTimeLogin:) BOOL isFirstTimeLogin; // @synthesize isFirstTimeLogin=_isFirstTimeLogin;
@property(copy) NSSet *desiredInternalTokens; // @synthesize desiredInternalTokens=_desiredInternalTokens;
@property BOOL anticipateEscrowAttempt; // @synthesize anticipateEscrowAttempt=_anticipateEscrowAttempt;
@property BOOL supportsPiggybacking; // @synthesize supportsPiggybacking=_supportsPiggybacking;
@property BOOL shouldRequestConfigurationInfo; // @synthesize shouldRequestConfigurationInfo=_shouldRequestConfigurationInfo;
@property BOOL shouldRequestShortLivedToken; // @synthesize shouldRequestShortLivedToken=_shouldRequestShortLivedToken;
@property BOOL shouldRequestRecoveryPET; // @synthesize shouldRequestRecoveryPET=_shouldRequestRecoveryPET;
@property(copy, setter=setHasEmptyPassword:) NSNumber *hasEmptyPassword; // @synthesize hasEmptyPassword=_hasEmptyPassword;
@property(copy, setter=setAppleIDLoginEnabled:) NSNumber *isAppleIDLoginEnabled; // @synthesize isAppleIDLoginEnabled=_isAppleIDLoginEnabled;
@property(copy) id <AKAnisetteServiceProtocol> anisetteDataProvider; // @synthesize anisetteDataProvider=_anisetteDataProvider;
@property BOOL shouldForceInteractiveAuth; // @synthesize shouldForceInteractiveAuth=_shouldForceInteractiveAuth;
@property BOOL shouldPreventInteractiveAuth; // @synthesize shouldPreventInteractiveAuth=_shouldPreventInteractiveAuth;
@property BOOL shouldUpdatePersistentServiceTokens; // @synthesize shouldUpdatePersistentServiceTokens=_shouldUpdatePersistentServiceTokens;
@property BOOL shouldPromptForPasswordOnly; // @synthesize shouldPromptForPasswordOnly=_shouldPromptForPasswordOnly;
@property(copy) NSString *helpBook; // @synthesize helpBook=_helpBook;
@property(copy) NSString *helpAnchor; // @synthesize helpAnchor=_helpAnchor;
@property(retain) NSString *title; // @synthesize title=_title;
@property BOOL shouldOfferSecurityUpgrade; // @synthesize shouldOfferSecurityUpgrade=_shouldOfferSecurityUpgrade;
@property(retain) id clientInfo; // @synthesize clientInfo=_clientInfo;
@property(copy) NSDictionary *httpHeadersForRemoteUI; // @synthesize httpHeadersForRemoteUI=_httpHeadersForRemoteUI;
@property(copy) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(copy) NSString *DSID; // @synthesize DSID=_DSID;
@property BOOL isEphemeral; // @synthesize isEphemeral=_isEphemeral;
@property(copy) NSArray *serviceIdentifiers; // @synthesize serviceIdentifiers=_serviceIdentifiers;
@property long long maximumLoginAttempts; // @synthesize maximumLoginAttempts=_maximumLoginAttempts;
@property(copy, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(copy) NSString *reason; // @synthesize reason=_reason;
@property long long serviceType; // @synthesize serviceType=_serviceType;
@property(setter=setTriggeredByNotification:) BOOL isTriggeredByNotification; // @synthesize isTriggeredByNotification=_isTriggeredByNotification;
@property BOOL needsPasswordChange; // @synthesize needsPasswordChange=_needsPasswordChange;
@property BOOL needsNewAppleID; // @synthesize needsNewAppleID=_needsNewAppleID;
@property BOOL needsCredentialRecovery; // @synthesize needsCredentialRecovery=_needsCredentialRecovery;
@property BOOL shouldAllowAppleIDCreation; // @synthesize shouldAllowAppleIDCreation=_shouldAllowAppleIDCreation;
@property BOOL isUsernameEditable; // @synthesize isUsernameEditable=_isUsernameEditable;
@property(copy) NSString *username; // @synthesize username=_username;
@property(retain) id <CDPStateUIProvider> cdpUiProvider; // @synthesize cdpUiProvider=_cdpUiProvider;
@property(copy, nonatomic, setter=_setMessage:) NSString *_message; // @synthesize _message;
@property(copy, setter=_setShortLivedToken:) NSString *_shortLivedToken; // @synthesize _shortLivedToken;
@property BOOL _isPasswordEditable; // @synthesize _isPasswordEditable;
@property(copy, setter=_setPassword:) NSString *_password; // @synthesize _password;
@property(copy, setter=_setProxiedAppName:) NSString *_proxiedAppName; // @synthesize _proxiedAppName;
@property(copy) NSString *_passwordPromptTitle; // @synthesize _passwordPromptTitle;
@property(nonatomic) BOOL _shouldSendIdentityTokenForRemoteUI; // @synthesize _shouldSendIdentityTokenForRemoteUI;
@property(readonly, nonatomic) NSUUID *_identifier; // @synthesize _identifier;
@property(copy, setter=_setProxiedAppBundleID:) NSString *_proxiedAppBundleID; // @synthesize _proxiedAppBundleID;
@property(setter=_setProxyingForApp:) BOOL _isProxyingForApp; // @synthesize _isProxyingForApp;
- (void).cxx_destruct;
- (void)presentSecondFactorAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentSecondFactorUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)dismissBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentBasicLoginUIWithCompletion:(CDUnknownBlockType)arg1;
- (id)_mapICSCRecoveryResultsToAuthKit:(id)arg1;
- (void)cdpContext:(id)arg1 performSilentRecoveryTokenRenewal:(CDUnknownBlockType)arg2;
- (void)dismissICSCRecoveryUIWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentICSCRecoveryUIWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy) AKDevice *companionDevice;
@property(copy) AKDevice *proxiedDevice;
@property(copy) NSString *serviceIdentifier;
@property(readonly, nonatomic) unsigned long long _capabilityForUIDisplay; // @synthesize _capabilityForUIDisplay;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_detailedDescription;
- (BOOL)_localUserHasEmptyPassword;
- (void)_updateWithValuesFromContext:(id)arg1;
- (id)_sanitizedCopy;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
@property(copy) NSString *generatedCode;
@property(copy) NSString *deviceEnclosureColor;
@property(copy) NSString *deviceColor;
@property(copy) NSString *deviceClass;
@property(copy) NSNumber *longitude;
@property(copy) NSNumber *latitude;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

