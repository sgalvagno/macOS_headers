//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IOBluetooth/IOBluetoothNSUserNotification.h>

@interface IOBluetoothNSObjCUserNotification : IOBluetoothNSUserNotification
{
    id mObserver;
    SEL mSelector;
}

+ (id)withObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
- (void)deliverNotification:(id)arg1;
- (id)initWithObserver:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;

@end

