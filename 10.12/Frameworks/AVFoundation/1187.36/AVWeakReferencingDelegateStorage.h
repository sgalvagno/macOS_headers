//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVDelegateStorage-Protocol.h>

@class AVWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>
{
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;
    AVWeakReference *_weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (void)initialize;
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)getRetainedDelegate:(id *)arg1 retainedDelegateQueue:(id *)arg2;
- (void)_setDelegate:(id)arg1;
- (id)_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id delegate;
- (void)finalize;
- (void)dealloc;
- (void)_collectUncollectables;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

