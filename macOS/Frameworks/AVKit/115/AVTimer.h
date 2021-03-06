//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface AVTimer : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _invalidated;
    double _interval;
}

@property(readonly) double interval; // @synthesize interval=_interval;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (id)init;
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3 repeats:(BOOL)arg4;

@end

