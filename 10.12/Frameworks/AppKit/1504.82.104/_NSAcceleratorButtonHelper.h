//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCell, NSTimer;
@protocol _NSAcceleratorCell;

__attribute__((visibility("hidden")))
@interface _NSAcceleratorButtonHelper : NSObject
{
    NSCell<_NSAcceleratorCell> *_cellStorage;
    NSTimer *_timer;
    double _lastTime;
    double _accumulatedActions;
    double _timerTarget;
    double _initialDelay;
    float _minRate;
    float _maxRate;
    float _currentRate;
    BOOL _weakCellHelperFlag;
    BOOL _satisfiedInitialDelay;
}

+ (float)defaultPeriodicInterval;
+ (float)defaultPeriodicDelay;
+ (double)accelerationForGestureAmount:(double)arg1;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
- (void)_scheduleTimer;
- (void)_acceleratorTimerFired:(id)arg1;
- (void)accelerationChanged:(double)arg1;
- (void)levelChanged:(unsigned long long)arg1 withMaximum:(unsigned long long)arg2;
- (void)pressComplete;
- (void)pressStarted:(BOOL)arg1;
@property(readonly) __weak NSCell<_NSAcceleratorCell> *cell;
- (void)dealloc;
- (id)initWithCell:(id)arg1;

@end

