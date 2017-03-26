//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSMachPortDelegate-Protocol.h>

@class NSString, NSTimer;

@interface _NSScrollerStyleRecommender : NSObject <NSMachPortDelegate>
{
    long long lastRecommendedScrollerStyle;
    NSTimer *scrollerStyleRecommendationUpdateTimer;
    BOOL isListeningForDevicesChangedNotification;
}

+ (id)sharedScrollerStyleRecommender;
- (void)dealloc;
- (void)_cleanup;
- (id)init;
- (void)pointingDeviceGestureScrollSettingChanged:(id)arg1;
- (void)showScrollBarsSettingChanged:(id)arg1;
- (void)noteSessionDevicesChanged;
- (void)scheduleScrollerStyleRecommendationUpdate:(double)arg1;
- (void)cancelScrollerStyleRecommendationUpdate;
- (void)scrollerStyleRecommendationUpdateTimerFired:(id)arg1;
- (void)setRecommendedScrollerStyleAndNotify:(long long)arg1;
- (long long)recommendedScrollerStyle;
- (void)stopListeningForUserPreferenceNotifications;
- (void)startListeningForUserPreferenceNotifications;
- (void)stopListeningForPointingDeviceConnectAndDisconnect;
- (BOOL)startListeningForPointingDeviceConnectAndDisconnect;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

