//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSTimer;

@interface GKBubbleMeshAnimator : NSObject
{
    int _currentOSThermalPressureLevel;
    int _thermalNotificationToken;
    NSMutableSet *_animatingViews;
    NSTimer *_timer;
    double _lastUpdateTime;
}

+ (id)sharedAnimator;
@property(nonatomic) int thermalNotificationToken; // @synthesize thermalNotificationToken=_thermalNotificationToken;
@property(nonatomic) int currentOSThermalPressureLevel; // @synthesize currentOSThermalPressureLevel=_currentOSThermalPressureLevel;
@property(nonatomic) double lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableSet *animatingViews; // @synthesize animatingViews=_animatingViews;
- (void)monitorThermalPressureLevelChanges;
- (void)setInitialThermalPressureLevel;
- (BOOL)isThermalPressureLevelOk;
- (unsigned char)_gkThermalLevelForOSThermalLevel:(int)arg1;
- (void)update:(id)arg1;
- (void)removeAnimatingBubbleView:(id)arg1;
- (void)addAnimatingBubbleView:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)updateTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)dealloc;
- (id)init;

@end

