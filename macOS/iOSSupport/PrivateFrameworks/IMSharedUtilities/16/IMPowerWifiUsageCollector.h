//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CUTPowerMonitorDelegate-Protocol.h>
#import <IMSharedUtilities/CUTWiFiManagerDelegate-Protocol.h>

@class NSString;

@interface IMPowerWifiUsageCollector : NSObject <CUTPowerMonitorDelegate, CUTWiFiManagerDelegate>
{
    BOOL _shouldCollectInternalStats;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) BOOL shouldCollectInternalStats; // @synthesize shouldCollectInternalStats=_shouldCollectInternalStats;
- (void)cutWiFiManagerLinkDidChange:(id)arg1 context:(id)arg2;
- (void)cutPowerMonitorBatteryConnectedStateDidChange:(id)arg1;
- (void)disconnectedFromAResource_ExternalCollection;
- (void)reconnectedToBothResources_ExternalCollection;
- (BOOL)_shouldWriteDownPowerWifiChanges;
- (void)clearConnectedToPowerWifiOver20Hours;
- (BOOL)connectedToPowerAndWifiForOver20Hours;
- (void)updateConnectedToPowerWifiIntervalIfConnected;
- (void)_noteWifiLinkDidChangeForInternalCollection:(BOOL)arg1 isOnPower:(BOOL)arg2;
- (void)_notePowerDidChangeForInternalCollection:(BOOL)arg1 isOnWifi:(BOOL)arg2;
- (void)disconnectFromResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (void)reconnectToResourceForTotalDurationKey:(id)arg1 dateKey:(id)arg2 powerWifiDict:(id)arg3;
- (id)_getPowerAndWifiDictionaryForKey:(id)arg1;
- (id)todaysKey;
- (id)createTodaysStatisticDictionaryIfNeeded;
- (id)_getExternalLastConnectedDate;
- (void)_setExternalLastConnectedDate:(id)arg1;
- (double)_getExternalTotalDuration;
- (void)_setExternalTotalDuration:(id)arg1;
- (BOOL)_isOnPower;
- (BOOL)_isWifiUsable;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

