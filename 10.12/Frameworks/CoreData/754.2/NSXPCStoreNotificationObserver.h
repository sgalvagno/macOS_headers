//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSXPCStoreNotificationObserver : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    id _store;
}

- (void).cxx_destruct;
- (void)setStore:(id)arg1;
- (id)store;
- (void)dealloc;
- (id)initForObservationWithName:(id)arg1 store:(id)arg2;

@end

