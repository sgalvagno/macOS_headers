//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NearField/NFSession.h>

#import <NearField/NFECommercePaymentSessionCallbacks-Protocol.h>

@class NSDictionary, NSString;

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks>
{
    NSDictionary *_appletsById;
}

- (id)performECommercePayment:(id)arg1 request:(id)arg2;
- (void)didStartSession:(id)arg1;
- (id)appletWithIdentifier:(id)arg1;
- (id)allApplets;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

