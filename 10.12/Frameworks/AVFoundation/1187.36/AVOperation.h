//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSObject;
@protocol OS_dispatch_queue;

@interface AVOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_ivarAccessQueue;
    long long _status;
    NSError *_error;
}

+ (void)initialize;
+ (long long)statusOfOperations:(id)arg1 error:(id *)arg2;
- (void)markAsCancelled;
- (void)markAsFailedWithError:(id)arg1;
- (void)markAsCompleted;
- (void)didEnterTerminalState;
- (BOOL)_setStatus:(long long)arg1 error:(id)arg2 resultingStatus:(long long *)arg3 failureReason:(id *)arg4;
- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isExecuting;
- (BOOL)evaluateDependenciesAndMarkAsExecuting;
@property(readonly) NSError *error;
@property(readonly) long long status;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

