//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSPeriodicInvoker.h>

@class NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NSThreadedPeriodicInvoker : _NSPeriodicInvoker
{
    NSObject<OS_dispatch_queue> *queue;
}

- (void)dealloc;
- (void)cancel;
- (void)setWorkBlock:(CDUnknownBlockType)arg1;
- (void)setDelayFunction:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1;

@end

