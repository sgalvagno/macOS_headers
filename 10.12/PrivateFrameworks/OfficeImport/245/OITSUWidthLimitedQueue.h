//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface OITSUWidthLimitedQueue : NSObject
{
    int mReaderCount;
    int mLimit;
    NSObject<OS_dispatch_queue> *mManagerQueue;
    NSObject<OS_dispatch_queue> *mTargetQueue;
    int mSpinLock;
}

- (void)performAsync:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLimit:(unsigned long long)arg1;
- (id)init;

@end

