//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CWInterface, NSDateFormatter, NSFileHandle, NSString, SFAuthorization, WDXPCClient;
@protocol OS_dispatch_queue;

@interface WDLogger : NSObject
{
    WDXPCClient *_xpcClient;
    CWInterface *_interface;
    NSFileHandle *_fileHandle;
    NSString *_tempDirectory;
    NSDateFormatter *_formatter;
    SFAuthorization *_authorization;
    NSObject<OS_dispatch_queue> *_logMutex;
}

+ (struct apple80211_awdl_peer_database)awdlPeerDB:(char *)arg1;
+ (struct apple80211_awdl_election_params)awdlElectionParams:(char *)arg1;
+ (struct apple80211_awdl_strategy)awdlStrategy:(char *)arg1;
+ (struct apple80211_awdl_sync_channel_sequence)awdlSyncChannelSequence:(char *)arg1;
+ (struct apple80211_awdl_sync_state)awdlSyncState:(char *)arg1;
+ (struct apple80211_awdl_sync_enabled)awdlEnabled:(char *)arg1;
+ (id)awdlInterfaceWithParentInterfaceName:(id)arg1;
+ (id)descriptionForNetwork:(id)arg1;
+ (id)__descriptionForPHY:(id)arg1;
+ (id)__descriptionForChannel:(id)arg1;
+ (id)__descriptionForRSNIE:(id)arg1;
+ (id)__descriptionForRSNAuthSel:(int)arg1;
+ (id)__descriptionForRSNCipher:(int)arg1;
+ (id)__descriptionForWPAIE:(id)arg1;
+ (id)__descriptionForWPAAuthSel:(int)arg1;
+ (id)__descriptionForWPACipher:(int)arg1;
+ (BOOL)tarWithSource:(id)arg1 destination:(id)arg2;
+ (void)dittoWithSource:(id)arg1 destination:(id)arg2;
+ (BOOL)runTaskWithLaunchPath:(id)arg1 arguments:(id)arg2 timeout:(double)arg3 error:(id *)arg4 standardErrData:(id *)arg5 standardOutData:(id *)arg6;
+ (void)initialize;
- (id)createDiagnosticsReportWithOutputPath:(id)arg1;
- (id)createMiniDiagnosticsReportWithOutputPath:(id)arg1;
- (id)__logAWDLInfo;
- (BOOL)logAirPortRouterInfo;
- (id)__appleProductNameForProductID:(unsigned char)arg1;
- (id)__logScanResults;
- (void)getInfo;
- (void)logNetworkConfigurationInfo;
- (void)logWirelessEnvironmentInfo;
- (void)logBluetoothInfo;
- (void)logAirDropInfo;
- (id)airDropDiscoverableMode;
- (void)logWiFiInterfaceInfo;
- (void)setSystemDebugLoggingEnabled:(BOOL)arg1;
- (BOOL)systemDebugLoggingEnabled;
- (void)setOpenDirectoryLoggingEnabled:(BOOL)arg1;
- (void)setDNSLoggingEnabled:(BOOL)arg1;
- (void)setDHCPLoggingEnabled:(BOOL)arg1;
- (void)setEAPOLLoggingEnabled:(BOOL)arg1;
- (void)setWiFiLoggingEnabled:(BOOL)arg1 interfaceName:(id)arg2;
- (void)setSharingLoggingEnabled:(BOOL)arg1;
- (BOOL)sharingLoggingEnabled;
- (BOOL)openDirectoryLoggingEnabled;
- (BOOL)dnsLoggingEnabled;
- (BOOL)dhcpLoggingEnabled;
- (BOOL)eapolLoggingEnabled;
- (BOOL)wifiLoggingEnabledWithInterfaceName:(id)arg1;
- (id)machineSerialNumber;
- (void)logTimestampedMessage:(id)arg1;
- (void)logMessage:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithXPCClient:(id)arg1 interface:(id)arg2 authorization:(id)arg3;

@end

