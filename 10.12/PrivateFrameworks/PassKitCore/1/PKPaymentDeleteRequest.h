//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass;

@interface PKPaymentDeleteRequest : PKPaymentWebServiceRequest
{
    PKPaymentPass *_pass;
}

@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)initWithPaymentPass:(id)arg1;

@end

