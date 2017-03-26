//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BridgeXPC/BridgeXPCConnection.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BridgeXPCSynchronousConnection : BridgeXPCConnection
{
    CDUnknownBlockType errorHandler;
    NSObject<OS_dispatch_semaphore> *send_queue_sema;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } reply_mutex;
    NSObject<OS_dispatch_semaphore> *reply_sema;
    id *reply_value;
}

+ (void)connectedPair:(id *)arg1:(id *)arg2;
- (void).cxx_destruct;
- (void)sendBarrier:(CDUnknownBlockType)arg1;
- (void)sendMessage:(id)arg1;
- (id)sendSynchronousMessage:(id)arg1;
- (void)activate;
- (CDUnknownBlockType)eventHandler;
- (void)setEventHandler:(CDUnknownBlockType)arg1;

@end

