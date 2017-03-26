//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MacBuddyManager-Protocol.h"

@class NSDictionary, NSString, NSURL;

@interface RegistrationServerManager : NSObject <MacBuddyManager>
{
    NSURL *_registrationURL;
    NSString *_sessionKey;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_postalCode;
    NSString *_city;
    NSString *_state;
    NSString *_emailAddress;
    NSString *_dsID;
    BOOL _userMigrated;
    BOOL _wasNetworkMigration;
    NSString *_countryCode;
    NSString *_keyboardInputDefault;
    BOOL _userSetUpiCloud;
}

@property BOOL userSetUpiCloud; // @synthesize userSetUpiCloud=_userSetUpiCloud;
@property(retain) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain) NSString *dsID; // @synthesize dsID=_dsID;
@property(retain) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(retain) NSString *keyboardInputDefault; // @synthesize keyboardInputDefault=_keyboardInputDefault;
@property(retain) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property BOOL wasNetworkMigration; // @synthesize wasNetworkMigration=_wasNetworkMigration;
@property BOOL userMigrated; // @synthesize userMigrated=_userMigrated;
@property(retain) NSString *state; // @synthesize state=_state;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *postalCode; // @synthesize postalCode=_postalCode;
- (void).cxx_destruct;
- (void)sendRegistrationInfoWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) BOOL signedIn;
@property(readonly, getter=isReachable) BOOL reachable;
- (id)initWithCountryCode:(id)arg1;
- (id)init;
- (id)_stringForNVRAMKey:(id)arg1;
@property(readonly) BOOL _hasAppleIPAddress;
@property(readonly, copy) NSString *_getKeyboardInputSelected;
@property(readonly, copy) NSString *_getKeyboardInputSources;
- (id)_currentLanguageCode;
- (id)_AMDLanguageCodeForISOLanguageCode:(id)arg1;
@property(readonly, copy) NSDictionary *_countryCodeToCountryInfoDictionary;
- (id)_ISOCountryNumberForISOCountryCode:(id)arg1;
@property(readonly, copy) NSString *_getInstallType;
@property(readonly, copy) NSString *_macAddress;
@property(readonly, copy) NSDictionary *_machineInfo;
@property(readonly, copy) NSDictionary *_customerInfo;
@property(readonly, copy) NSString *_clientVersionString;
- (void)_sendRegInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

