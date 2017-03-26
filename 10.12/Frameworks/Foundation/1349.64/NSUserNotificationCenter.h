//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;
@protocol NSUserNotificationCenterDelegate, _NSUserNotificationCenterDelegatePrivate;

@interface NSUserNotificationCenter : NSObject
{
    id _internal;
}

+ (id)_identifiersForCenterType:(unsigned long long)arg1;
+ (id)_searchPathForCenterType:(unsigned long long)arg1;
+ (id)_webNotificationIdentifiers;
+ (id)_webNotificationCenterSearchPath;
+ (BOOL)_doNotDisturbEnabled;
+ (id)_centerForBundleIdentifier:(id)arg1;
+ (void)_registerForOnDemandCallback:(CDUnknownBlockType)arg1;
+ (id)_centerForIdentifier:(id)arg1 type:(unsigned long long)arg2;
+ (id)defaultUserNotificationCenter;
- (void)_setProgress:(double)arg1 forNotificationWithIdentifier:(id)arg2;
- (void)_invalidateAndUnregister;
- (void)_unRegisterForRemotePushNotifications;
- (void)_registerForRemotePushNotificationsWithEnvironment:(id)arg1 types:(unsigned long long)arg2;
- (void)_registerForRemotePushNotificationTypes:(unsigned long long)arg1;
- (void)_removeAllPresentedAlerts;
- (void)_removePresentedAlert:(id)arg1;
- (void)_removeAllDisplayedNotifications;
- (void)_removeDisplayedNotification:(id)arg1;
- (void)removeAllDeliveredNotifications;
- (void)removeDeliveredNotification:(id)arg1;
- (void)_setDeliveredNotifications:(id)arg1;
- (void)deliverNotification:(id)arg1;
- (void)removeScheduledNotification:(id)arg1;
- (void)scheduleNotification:(id)arg1;
- (id)init;
- (void)_setAppDelegate:(id)arg1 connect:(BOOL)arg2;

// Remaining properties
@property(nonatomic) id <_NSUserNotificationCenterDelegatePrivate> _appDelegate; // @dynamic _appDelegate;
@property(readonly) NSArray *_displayedNotifications; // @dynamic _displayedNotifications;
@property(readonly) unsigned long long _maxPresentedNotifications; // @dynamic _maxPresentedNotifications;
@property(readonly) unsigned long long _notificationPreferences; // @dynamic _notificationPreferences;
@property(readonly) BOOL _notificationsDisabled; // @dynamic _notificationsDisabled;
@property(readonly) NSArray *_presentedAlerts; // @dynamic _presentedAlerts;
@property(setter=_setPreventApplicationLaunching:) BOOL _preventApplicationLaunching; // @dynamic _preventApplicationLaunching;
@property(readonly, copy) NSData *_registeredPushToken; // @dynamic _registeredPushToken;
@property(setter=_setReverseDeliveredNotifications:) BOOL _reverseDeliveredNotifications; // @dynamic _reverseDeliveredNotifications;
@property(copy) NSArray *_todaySummaryNotifications; // @dynamic _todaySummaryNotifications;
@property(copy) NSArray *_tomorrowSummaryNotifications; // @dynamic _tomorrowSummaryNotifications;
@property id <NSUserNotificationCenterDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSArray *deliveredNotifications; // @dynamic deliveredNotifications;
@property(copy) NSArray *scheduledNotifications; // @dynamic scheduledNotifications;

@end

