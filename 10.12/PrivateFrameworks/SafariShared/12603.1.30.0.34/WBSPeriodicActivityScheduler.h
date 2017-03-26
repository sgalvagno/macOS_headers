//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSBackgroundActivityScheduler;
@protocol OS_dispatch_queue;

@interface WBSPeriodicActivityScheduler : NSObject
{
    CDUnknownBlockType _block;
    BOOL _invalidated;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSBackgroundActivityScheduler *_backgroundActivityScheduler;
}

- (void).cxx_destruct;
- (void)_performActivity;
- (void)_scheduleActivityWithInterval:(double)arg1;
- (void)invalidate;
- (id)initWithInterval:(double)arg1 minimumDelay:(double)arg2 lastFireDate:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)init;

@end

