//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSMutableDictionary, NSString, UNUserNotificationCenter;
@protocol CWAutoHotspotInterfaceActionDelegate, OS_dispatch_queue;

@interface CWAutoHotspotNotifications : NSObject <UNUserNotificationCenterDelegate>
{
    id <CWAutoHotspotInterfaceActionDelegate> _interfaceActionDelegate;
    UNUserNotificationCenter *_userNotificationCenter;
    NSMutableDictionary *_interfaceToCurrentConsideredTetherDeviceMap;
    NSMutableDictionary *_deviceIdentifierToCWTetherDeviceMap;
    NSObject<OS_dispatch_queue> *_serialQ;
    double _lastTetherDeviceJoinedAt;
}

@property(nonatomic) double lastTetherDeviceJoinedAt; // @synthesize lastTetherDeviceJoinedAt=_lastTetherDeviceJoinedAt;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQ; // @synthesize serialQ=_serialQ;
@property(retain, nonatomic) NSMutableDictionary *deviceIdentifierToCWTetherDeviceMap; // @synthesize deviceIdentifierToCWTetherDeviceMap=_deviceIdentifierToCWTetherDeviceMap;
@property(retain, nonatomic) NSMutableDictionary *interfaceToCurrentConsideredTetherDeviceMap; // @synthesize interfaceToCurrentConsideredTetherDeviceMap=_interfaceToCurrentConsideredTetherDeviceMap;
@property(retain, nonatomic) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(nonatomic) __weak id <CWAutoHotspotInterfaceActionDelegate> interfaceActionDelegate; // @synthesize interfaceActionDelegate=_interfaceActionDelegate;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)__userNotificationCenter:(id)arg1 didReceiveTurnOnAutoHotspotNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)__userNotificationCenter:(id)arg1 didReceiveLowBatteryNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)__userNotificationCenter:(id)arg1 didReceiveAskToJoinNotificationResponse:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)userNotificationCenter:(id)arg1 willPresentNotification:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (long long)_notificationActionIdentifierToResponseAction:(id)arg1;
- (id)_interfaceNameForCWTetherDevice:(id)arg1;
- (void)_purgeTetherDevice:(id)arg1;
- (void)systemWillSleep;
- (void)powerStateDidChange:(BOOL)arg1 forInterfaceWithName:(id)arg2;
- (void)bssidDidChange:(id)arg1 forInterfaceWithName:(id)arg2;
- (void)showTurnOnAutoHotspotNotification;
- (void)showLowBatteryNotificationForTetherDevice:(id)arg1 interfaceName:(id)arg2;
- (void)showAutoHotspotNotificationForTetherDevice:(id)arg1 retry:(BOOL)arg2 interfaceName:(id)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithInterfaceActionDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

