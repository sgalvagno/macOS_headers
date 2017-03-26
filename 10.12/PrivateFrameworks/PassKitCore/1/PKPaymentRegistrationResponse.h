//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface PKPaymentRegistrationResponse : PKPaymentWebServiceResponse
{
    NSString *_deviceIdentifier;
    NSNumber *_cardsOnFile;
    NSNumber *_maxCards;
    NSString *_primaryRegion;
    NSDictionary *_regions;
    NSString *_environmentName;
    NSURL *_brokerURL;
    NSURL *_trustedServiceManagerURL;
    NSURL *_paymentServicesURL;
    NSArray *_certificates;
}

@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(copy, nonatomic) NSURL *paymentServicesURL; // @synthesize paymentServicesURL=_paymentServicesURL;
@property(copy, nonatomic) NSURL *trustedServiceManagerURL; // @synthesize trustedServiceManagerURL=_trustedServiceManagerURL;
@property(copy, nonatomic) NSURL *brokerURL; // @synthesize brokerURL=_brokerURL;
@property(copy, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(copy, nonatomic) NSDictionary *regions; // @synthesize regions=_regions;
@property(readonly, copy, nonatomic) NSString *primaryRegion; // @synthesize primaryRegion=_primaryRegion;
@property(copy, nonatomic) NSNumber *maxCards; // @synthesize maxCards=_maxCards;
@property(copy, nonatomic) NSNumber *cardsOnFile; // @synthesize cardsOnFile=_cardsOnFile;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

