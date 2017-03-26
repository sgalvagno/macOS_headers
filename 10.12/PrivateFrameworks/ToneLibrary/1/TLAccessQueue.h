//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLAccessQueue : NSObject
{
    NSString *_label;
    NSString *_threadLocalStorageKey;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(nonatomic, setter=_setSerialQueue:) NSObject<OS_dispatch_queue> *_serialQueue; // @synthesize _serialQueue;
@property(copy, nonatomic, setter=_setThreadLocalStorageKey:) NSString *_threadLocalStorageKey; // @synthesize _threadLocalStorageKey;
@property(copy, nonatomic, setter=_setLabel:) NSString *label; // @synthesize label=_label;
- (void)_performSynchronousBlockInSerialQueue:(CDUnknownBlockType)arg1;
- (void)performAsynchronousBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 appendUUIDToLabel:(BOOL)arg2;

@end

