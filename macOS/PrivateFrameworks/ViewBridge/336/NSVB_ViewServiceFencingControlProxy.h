//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ViewBridge/NSVB_QueueingProxy.h>

@class NSVB_ViewServiceFencingController;

__attribute__((visibility("hidden")))
@interface NSVB_ViewServiceFencingControlProxy : NSVB_QueueingProxy
{
    NSVB_ViewServiceFencingController *_fencingController;
}

+ (id)proxyWithTarget:(id)arg1 fencingController:(id)arg2 exportedProtocol:(id)arg3;
- (void)__endFencingMessagesForSendRight:(id)arg1;
- (void)__beginFencingMessagesWithSendRight:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;

@end

