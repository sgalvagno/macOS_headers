//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SetupAssistantSupport/MBIAActivity.h>

@class MBAppleRegTransaction, MBConnection, MBCookieConfiguration, MBNewiToolsAccountTransaction;

@interface MBNewiToolsAccountActivity : MBIAActivity
{
    MBAppleRegTransaction *_appleRegTransaction;
    MBNewiToolsAccountTransaction *_newiToolsAccountTransaction;
    MBConnection *_connection;
    MBCookieConfiguration *_cookieMaker;
}

+ (const char *)dotMacURL;
- (void)debugWriteIncomingData:(id)arg1;
- (void)setupDotMacCookies:(id)arg1;
- (void)setupAppleIDCookies:(id)arg1;
- (BOOL)_configureItools:(id)arg1;
- (id)_getHostName;
- (void)_configureDotMacWithExistingSettings;
- (BOOL)_setupValuesForClient:(id)arg1;
- (BOOL)configureiTools:(id)arg1;
- (void)notifyConnectionStatus:(id)arg1;
- (void)cancel;
- (void)didFailWithError:(id)arg1 fromTransaction:(id)arg2;
- (void)didSucceedWithDictionary:(id)arg1 fromTransaction:(id)arg2;
- (void)activityMain:(id)arg1;

@end

