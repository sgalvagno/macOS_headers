//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUProgressObserver : NSObject
{
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mHandler;
    double mLastHandledValue;
    BOOL mLastHandledIndeterminate;
}

@property(readonly, nonatomic) double valueInterval; // @synthesize valueInterval=mValueInterval;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

