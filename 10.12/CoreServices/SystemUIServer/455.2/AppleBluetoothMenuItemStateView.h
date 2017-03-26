//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage, NSMenuItem;

@interface AppleBluetoothMenuItemStateView : NSView
{
    float _level;
    NSMenuItem *_menuItem;
    NSImage *_image;
    NSImage *_batteryImage;
}

@property float level; // @synthesize level=_level;
@property(retain) NSImage *batteryImage; // @synthesize batteryImage=_batteryImage;
@property(retain) NSImage *image; // @synthesize image=_image;
@property(retain) NSMenuItem *menuItem; // @synthesize menuItem=_menuItem;
- (void)drawRect:(struct CGRect)arg1;
- (id)foregroundColor;
- (void)setBatteryLevel:(id)arg1;
- (id)lowBatteryColor;
- (id)lowBatteryMaskImage;
- (id)batteryImageForLevel:(float)arg1;
- (id)initWithMenuItem:(id)arg1 image:(id)arg2 batteryLevel:(id)arg3;

@end

