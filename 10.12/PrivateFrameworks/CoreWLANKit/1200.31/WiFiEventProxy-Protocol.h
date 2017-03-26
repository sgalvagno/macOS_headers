//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSSet, NSString;

@protocol WiFiEventProxy
- (void)foundTetherDevices:(NSSet *)arg1;
- (void)scanCompletedWithInterfaceName:(NSString *)arg1 displayedScanResults:(NSSet *)arg2;
- (void)scanStartedWithInterfaceName:(NSString *)arg1;
- (void)realTimeModeDidEndForWiFiInterfaceWithName:(NSString *)arg1;
- (void)realTimeModeDidStartForWiFiInterfaceWithName:(NSString *)arg1;
- (void)autoJoinDidCompleteForWiFiInterfaceWithName:(NSString *)arg1;
- (void)autoJoinDidStartForWiFiInterfaceWithName:(NSString *)arg1;
- (void)interfaceRemovedWithName:(NSString *)arg1;
- (void)interfaceAddedWithName:(NSString *)arg1;
- (void)scanCacheUpdatedForWiFiInterfaceWithName:(NSString *)arg1;
- (void)modeDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(NSString *)arg1 rssi:(long long)arg2 transmitRate:(double)arg3;
- (void)linkDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)bssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)ssidDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)powerStateDidChangeForWiFiInterfaceWithName:(NSString *)arg1;
- (void)clientConnectionInvalidated;
- (void)clientConnectionInterrupted;
@end

