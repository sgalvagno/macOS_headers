//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AppleMenuItem.h"

@class AppleBluetoothMenuItemView;

@interface AppleBluetoothMenuItem : AppleMenuItem
{
    AppleBluetoothMenuItemView *_itemView;
    long long _deviceType;
}

@property long long deviceType; // @synthesize deviceType=_deviceType;
@property(readonly) AppleBluetoothMenuItemView *itemView; // @synthesize itemView=_itemView;
- (void)setOtherBatteryLevel:(id)arg1;
- (void)setW1BatteryLevel:(id)arg1;
- (void)setBatteryLevelLeft:(id)arg1 right:(id)arg2 case:(id)arg3;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;

@end

