//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/IAsyncNodeOperationDelegateProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TTagOperationDelegate : NSObject <IAsyncNodeOperationDelegateProtocol>
{
    struct TMutex fLock;
    struct TConditionVariable fCondition;
    _Bool fFinished;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (int)asyncNodeOperation:(id)arg1 errorNotification:(const struct OperationMonitor *)arg2 error:(const struct OperationErrorRecord *)arg3 reply:(struct NodeEventReply *)arg4;
- (int)asyncNodeOperation:(id)arg1 statusNotification:(const struct OperationMonitor *)arg2;
- (void)waitForOperationToFinish;
- (int)asyncNodeOperation:(id)arg1 completedNotification:(const struct OperationMonitor *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

