//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSData, NSString, PKProtobufPaymentMethod;

@interface PKProtobufPaymentToken : PBCodable <NSCopying>
{
    NSString *_instrumentName;
    NSString *_network;
    NSData *_paymentData;
    PKProtobufPaymentMethod *_paymentMethod;
    NSString *_redeemURL;
    NSString *_retryNonce;
    NSString *_transactionIdentifier;
}

@property(retain, nonatomic) NSString *retryNonce; // @synthesize retryNonce=_retryNonce;
@property(retain, nonatomic) NSString *redeemURL; // @synthesize redeemURL=_redeemURL;
@property(retain, nonatomic) NSData *paymentData; // @synthesize paymentData=_paymentData;
@property(retain, nonatomic) NSString *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property(retain, nonatomic) NSString *network; // @synthesize network=_network;
@property(retain, nonatomic) NSString *instrumentName; // @synthesize instrumentName=_instrumentName;
@property(retain, nonatomic) PKProtobufPaymentMethod *paymentMethod; // @synthesize paymentMethod=_paymentMethod;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRetryNonce;
@property(readonly, nonatomic) BOOL hasRedeemURL;
@property(readonly, nonatomic) BOOL hasPaymentData;
@property(readonly, nonatomic) BOOL hasTransactionIdentifier;
@property(readonly, nonatomic) BOOL hasNetwork;
@property(readonly, nonatomic) BOOL hasInstrumentName;
@property(readonly, nonatomic) BOOL hasPaymentMethod;

@end

