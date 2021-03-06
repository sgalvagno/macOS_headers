//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class NSString;
@protocol HMDSettingTransaction, HMDSettingTransactionReceiverProtocol;

@protocol HMDSettingsBackingStoreController <NSObject>
- (void)runSettingTransaction:(id <HMDSettingTransaction>)arg1 waitForCloudPush:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)runSettingTransaction:(id <HMDSettingTransaction>)arg1 completion:(void (^)(NSError *))arg2;
- (id <HMDSettingTransaction>)settingTransactionWithName:(NSString *)arg1;
- (void)start;
- (void)registerForSettingsTransactions:(id <HMDSettingTransactionReceiverProtocol>)arg1;
@end

