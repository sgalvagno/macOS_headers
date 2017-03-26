//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSTimer.h>

@interface NSTimer (NSTimer)
+ (id)timerWithFireDate:(id)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)timerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)timerWithTimeInterval:(double)arg1 target:(id)arg2 selector:(SEL)arg3 userInfo:(id)arg4 repeats:(BOOL)arg5;
+ (id)scheduledTimerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)timerWithTimeInterval:(double)arg1 invocation:(id)arg2 repeats:(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (double)_cffireTime;
- (CDStruct_e097db04)context;
- (void)setFireTime:(double)arg1;
- (double)fireTime;
- (double)interval;
- (long long)order;
- (struct __CFString *)copyDebugDescription;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void)fire;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (double)timeInterval;
- (BOOL)isValid;
- (void)invalidate;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 repeats:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
@end

