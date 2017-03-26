//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSubscription.h>

@class EWSExchangeServiceBindingTask;

@interface EWSStreamingSubscription : EWSSubscription
{
    BOOL _shouldStream;
    EWSExchangeServiceBindingTask *_streamTask;
}

@property BOOL shouldStream; // @synthesize shouldStream=_shouldStream;
@property(retain) EWSExchangeServiceBindingTask *streamTask; // @synthesize streamTask=_streamTask;
- (void).cxx_destruct;
- (id)nextTask;
- (void)exchangeServiceBindingTaskCompleted:(id)arg1;
- (void)exchangeServiceBindingTask:(id)arg1 didFailWithError:(id)arg2;
- (void)exchangeServiceBindingTask:(id)arg1 didReceiveResponse:(id)arg2;
- (void)unsubscribe;
- (id)newSubscriptionRequest;
- (void)stop;
- (void)start;

@end

