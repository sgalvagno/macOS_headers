//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSArray, NSData, NSString;

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest
{
    BOOL _devSigned;
    NSData *_frontImageData;
    NSData *_backImageData;
    NSString *_documentCountryCode;
    unsigned long long _documentType;
    NSArray *_certificates;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
@property(nonatomic) unsigned long long documentType; // @synthesize documentType=_documentType;
@property(copy, nonatomic) NSString *documentCountryCode; // @synthesize documentCountryCode=_documentCountryCode;
@property(copy, nonatomic) NSData *backImageData; // @synthesize backImageData=_backImageData;
@property(copy, nonatomic) NSData *frontImageData; // @synthesize frontImageData=_frontImageData;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;

@end

