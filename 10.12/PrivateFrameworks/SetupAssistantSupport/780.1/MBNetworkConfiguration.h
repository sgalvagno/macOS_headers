//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SetupAssistantSupport/MBNetworkConfigThreadOperations-Protocol.h>

@class NSDictionary;

@interface MBNetworkConfiguration : NSObject <MBNetworkConfigThreadOperations>
{
    struct __SCPreferences *_prefs;
    NSDictionary *_settings;
    BOOL _createdSet;
}

+ (id)regHost;
+ (BOOL)waitUntilRegHostReachable;
+ (BOOL)registrationHostReachable;
+ (BOOL)isPPPConfigured:(id *)arg1;
+ (void)setComputerNameWithDefaultsForFullName:(id)arg1;
+ (id)sharedConfiguration;
- (BOOL)hasUsableDHCPAddress;
- (void)_setNetworkTime:(BOOL)arg1;
- (int)_setManualAirPort:(struct __SCNetworkService *)arg1;
- (void)_setManualModem:(struct __SCNetworkService *)arg1;
- (void)_setManualPPP:(struct __SCNetworkService *)arg1 withSettings:(id)arg2;
- (struct __SCNetworkService *)_removePPPoE:(struct __SCNetworkService *)arg1;
- (void)_setPPPoE:(struct __SCNetworkService *)arg1;
- (void)_setDNSFromTCPDictionary:(id)arg1 forService:(struct __SCNetworkService *)arg2;
- (id)_ensureArrayForKey:(id)arg1 inDictionary:(id)arg2;
- (void)_setManualDNS:(struct __SCNetworkService *)arg1 dns:(id)arg2;
- (void)_setManualDHCPIP4:(struct __CFDictionary *)arg1;
- (void)_setDHCPIP4:(struct __CFDictionary *)arg1;
- (void)_setManualIP4:(struct __CFDictionary *)arg1;
- (id)_configureMethodNetCfgFromIA:(id)arg1 withHardwareKey:(id)arg2;
- (id)_hardwareKeyNetCfgFromIA:(id)arg1;
- (int)getNetworkConfiguredNess;
- (BOOL)pppoeServerAvailable;
- (BOOL)hasUsableDynamicEthernetConfiguration;
- (BOOL)isEthernetCablePluggedIn;
- (struct __CFArray *)servicesWithEthernetPluggedIn;
- (void)enablePPPoEService;
- (void)setPPPoEUsername:(id)arg1 password:(id)arg2;
- (void)enableEthernetAdapters;
- (void)enableAirport;
- (void)registerNewNetworkServices;
- (void)startLookingForHotPluggableEthernetInterfaces;
- (void)setNetInfo;
- (void)setBluetoothMouseName:(id)arg1;
- (void)setComputerNameForFullName:(id)arg1;
- (id)firstNameFromFullName:(id)arg1;
- (void)setModemScript:(id)arg1 forPort:(id)arg2;
- (void)switchToPulse:(BOOL)arg1 forModem:(id)arg2;
- (id)getModemDNS;
- (BOOL)unconfigureModemDNS;
- (BOOL)configureModemDNS:(id)arg1;
- (void)configureForExistingNetworkSettings;
- (void)startSharedNetworkTimeClient;
- (BOOL)configureService:(struct __SCNetworkService *)arg1 withSettings:(id)arg2;
- (BOOL)configureWithSettings:(id)arg1;
- (id)safeSettingsForDisplay:(id)arg1;
- (BOOL)commitPrefs;
- (struct __SCPreferences *)systemPreferences;
- (void)setPrefs:(struct __SCPreferences *)arg1;
- (struct __SCPreferences *)prefs;

@end

