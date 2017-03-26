//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKPaymentRequest, PKRemoteDevice;

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding>
{
    PKRemoteDevice *_device;
    PKPaymentRequest *_paymentRequest;
    NSString *_selectedApplicationIdentifier;
    NSString *_identifier;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *selectedApplicationIdentifier; // @synthesize selectedApplicationIdentifier=_selectedApplicationIdentifier;
@property(retain, nonatomic) PKPaymentRequest *paymentRequest; // @synthesize paymentRequest=_paymentRequest;
@property(readonly, nonatomic) PKRemoteDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqualToRemoteRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (id)initWithDevice:(id)arg1;

@end

