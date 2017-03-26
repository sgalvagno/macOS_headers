//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ExchangeWebServices/EWSSubscription.h>

@class EWSExchangeServiceBindingTask;

@interface EWSPullSubscription : EWSSubscription
{
    BOOL _shouldPull;
    EWSExchangeServiceBindingTask *_pullTask;
}

@property BOOL shouldPull; // @synthesize shouldPull=_shouldPull;
@property(retain) EWSExchangeServiceBindingTask *pullTask; // @synthesize pullTask=_pullTask;
- (void).cxx_destruct;
- (void)exchangeServiceBindingTaskCompleted:(id)arg1;
- (void)exchangeServiceBindingTask:(id)arg1 didFailWithError:(id)arg2;
- (void)exchangeServiceBindingTask:(id)arg1 didReceiveResponse:(id)arg2;
- (id)newSubscriptionRequest;
- (id)nextTask;
- (void)unsubscribe;
- (void)pull;

@end

