//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface FeatureAvailability : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _threadUnsafeUserSignedIntoICloud;
    BOOL _threadUnsafeSafariSyncEnabled;
    BOOL _threadUnsafeKeychainSyncEnabled;
    BOOL _threadUnsafeUserUsingManagedAppleID;
}

+ (id)_sharedInstance;
+ (BOOL)_safariIsInRecoverySystem;
+ (BOOL)isTouchBarSupportAvailable;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)canShowParsecITunesResults;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isKeychainSyncEnabled;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)isSafariSyncEnabled;
+ (BOOL)isUserSignedIntoICloud;
+ (void)startMonitoringForAvailabilityChanges;
@property(getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID; // @synthesize userUsingManagedAppleID=_threadUnsafeUserUsingManagedAppleID;
@property(getter=isKeychainSyncEnabled) BOOL keychainSyncEnabled; // @synthesize keychainSyncEnabled=_threadUnsafeKeychainSyncEnabled;
@property(getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud; // @synthesize userSignedIntoICloud=_threadUnsafeUserSignedIntoICloud;
- (void).cxx_destruct;
@property(getter=isSafariSyncEnabled) BOOL safariSyncEnabled; // @synthesize safariSyncEnabled=_threadUnsafeSafariSyncEnabled;
- (void)_updateKeychainSyncingStatus;
- (void)_iCloudServiceStatusChanged:(id)arg1;
- (void)_iCloudLoggedInStateDidChange:(id)arg1;
- (id)init;

@end

