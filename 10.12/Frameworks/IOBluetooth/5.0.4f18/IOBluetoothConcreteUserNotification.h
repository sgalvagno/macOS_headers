//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IOBluetooth/IOBluetoothUserNotification.h>

@interface IOBluetoothConcreteUserNotification : IOBluetoothUserNotification
{
    CDUnknownFunctionPointerType mCallback;
    void *mRefCon;
    SEL mSelector;
    int mNotificationType;
    id mWatchedObject;
    id mRegisteredObject;
    unsigned char mSelfRegistered;
    int mDirection;
    unsigned char mRFCOMMChannelID;
    unsigned short mL2CAPPSM;
}

@property int direction; // @synthesize direction=mDirection;
@property id registeredObject; // @synthesize registeredObject=mRegisteredObject;
@property id watchedObject; // @synthesize watchedObject=mWatchedObject;
@property int notificationType; // @synthesize notificationType=mNotificationType;
@property SEL selector; // @synthesize selector=mSelector;
@property CDUnknownFunctionPointerType callback; // @synthesize callback=mCallback;
@property void *refCon; // @synthesize refCon=mRefCon;
@property unsigned char RFCOMMChannelID; // @synthesize RFCOMMChannelID=mRFCOMMChannelID;
@property unsigned short L2CAPPSM; // @synthesize L2CAPPSM=mL2CAPPSM;
- (void)unregister;
- (void)setSelfRegistered;
- (void)objcL2CAPNotificationRoutine:(id)arg1;
- (void)objcRFCOMMNotificationRoutine:(id)arg1;
- (void)objcNotificationRoutine:(id)arg1;
- (void)rfcommNotificationRoutine:(id)arg1;
- (void)l2capNotificationRoutine:(id)arg1;
- (void)notificationRoutine:(id)arg1;

@end

