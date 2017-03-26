//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <TimeSync/NSObject-Protocol.h>

@class TSClock;

@protocol TSClockClient <NSObject>

@optional
- (void)didProcessSync:(TSClock *)arg1;
- (void)didEndClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didBeginClockGrandmasterChangeForClock:(TSClock *)arg1;
- (void)didChangeLockStateTo:(int)arg1 forClock:(TSClock *)arg2;
- (void)didChangeClockMasterForClock:(TSClock *)arg1;
- (void)didResetClock:(TSClock *)arg1;
@end

