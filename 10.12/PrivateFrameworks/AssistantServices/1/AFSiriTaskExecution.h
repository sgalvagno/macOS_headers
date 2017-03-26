//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSiriRequestFailureHandling-Protocol.h>
#import <AssistantServices/AFSiriResponseHandling-Protocol.h>
#import <AssistantServices/NSXPCListenerDelegate-Protocol.h>

@class AFSiriRequest, AFWatchdogTimer, NSString, NSXPCListener;
@protocol AFSiriTaskDelivering, OS_dispatch_queue;

@interface AFSiriTaskExecution : NSObject <AFSiriResponseHandling, NSXPCListenerDelegate, AFSiriRequestFailureHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    AFSiriRequest *_request;
    id <AFSiriTaskDelivering> _taskDeliverer;
    NSXPCListener *_usageResultListener;
    CDUnknownBlockType _deliveryHandler;
    CDUnknownBlockType _completionHandler;
    long long _state;
    AFWatchdogTimer *_taskResponseWatchdogTimer;
    NSXPCListener *_taskResponseListener;
}

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (void)_completeWithResponse:(id)arg1;
- (void)_completeWithResponse:(id)arg1 error:(id)arg2;
- (void)setCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDeliveryHandler:(CDUnknownBlockType)arg1;
- (void)start;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleFailureOfRequest:(id)arg1 error:(id)arg2 atTime:(unsigned long long)arg3;
- (void)handleSiriResponse:(id)arg1 atTime:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithRequest:(id)arg1 taskDeliverer:(id)arg2 usageResultListener:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

