//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SystemMigrationDaemonProtocol-Protocol.h>

@class NSString, NSURL;

@protocol SMDPScannerProtocol <SystemMigrationDaemonProtocol>
- (void)actualScannerState:(void (^)(unsigned long long))arg1;
- (void)unmount:(id)arg1;
- (void)mount:(id)arg1 withPassword:(NSString *)arg2;
- (void)mount:(id)arg1;
- (void)addNonBonjourRemoteShare:(NSURL *)arg1;
@end

