//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface _CATArbitratorWaitToken : NSObject
{
    // Error parsing type: Ai, name: mState
    NSMutableDictionary *mTokenByKey;
    NSObject<OS_dispatch_queue> *mDelegateQueue;
    NSObject<OS_dispatch_group> *mGroup;
    CDUnknownBlockType mCompletionBlock;
}

- (void).cxx_destruct;
- (BOOL)whenStateIs:(int)arg1 atomicallySwapWith:(int)arg2;
- (void)cancel;
- (void)performCompletionBlock;
- (void)resume;
- (void)waitForRegistrationEntry:(id)arg1 forKey:(id)arg2 exclusive:(BOOL)arg3;
- (id)initWithDelegateQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

