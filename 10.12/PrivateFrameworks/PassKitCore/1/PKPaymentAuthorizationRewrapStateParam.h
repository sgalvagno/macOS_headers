//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSData, PKWrappedPayment;

@interface PKPaymentAuthorizationRewrapStateParam : PKPaymentAuthorizationStateParam
{
    PKWrappedPayment *_wrappedPayment;
    NSData *_nonceData;
}

+ (id)paramWithWrappedPayment:(id)arg1 nonce:(id)arg2;
@property(retain, nonatomic) NSData *nonceData; // @synthesize nonceData=_nonceData;
@property(retain, nonatomic) PKWrappedPayment *wrappedPayment; // @synthesize wrappedPayment=_wrappedPayment;
- (void).cxx_destruct;
- (id)description;

@end

