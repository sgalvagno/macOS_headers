//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSUserNotificationCenterDelegate-Protocol.h"

@class NSString, NSUserNotification, NSUserNotificationCenter;
@protocol OS_dispatch_semaphore, OS_os_log;

@interface FirmwareUpdateHelper : NSObject <NSUserNotificationCenterDelegate>
{
    BOOL _firstAttach;
    int _devicesAttached;
    NSObject<OS_os_log> *_logHandle;
    NSUserNotificationCenter *_systemCenter;
    struct IONotificationPort *_ioNotificationPort;
    NSUserNotification *_deliveredNotification;
    NSObject<OS_dispatch_semaphore> *_attachSema;
}

@property int devicesAttached; // @synthesize devicesAttached=_devicesAttached;
@property BOOL firstAttach; // @synthesize firstAttach=_firstAttach;
@property(retain) NSObject<OS_dispatch_semaphore> *attachSema; // @synthesize attachSema=_attachSema;
@property(retain) NSUserNotification *deliveredNotification; // @synthesize deliveredNotification=_deliveredNotification;
@property struct IONotificationPort *ioNotificationPort; // @synthesize ioNotificationPort=_ioNotificationPort;
@property(retain) NSUserNotificationCenter *systemCenter; // @synthesize systemCenter=_systemCenter;
@property(retain) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
- (void).cxx_destruct;
- (void)userNotificationCenter:(id)arg1 didDismissAlert:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didActivateNotification:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didDeliverNotification:(id)arg2;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)exitAfterDelay;
- (void)allDevicesRemoved;
- (void)sendNotification;
- (BOOL)isDirectlyAttachedService:(unsigned long long)arg1;
- (void)deviceRemovedWithIterator:(unsigned int)arg1;
- (void)waitForAttach;
- (BOOL)run;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

