//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOTransitSurcharge : PBCodable <NSCopying>
{
    unsigned int _numberOfLegs;
    int _paymentType;
    NSMutableArray *_surchargeUnits;
    struct {
        unsigned int numberOfLegs:1;
        unsigned int paymentType:1;
    } _has;
}

+ (Class)surchargeUnitType;
@property(retain, nonatomic) NSMutableArray *surchargeUnits; // @synthesize surchargeUnits=_surchargeUnits;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasNumberOfLegs;
@property(nonatomic) unsigned int numberOfLegs; // @synthesize numberOfLegs=_numberOfLegs;
- (int)StringAsPaymentType:(id)arg1;
- (id)paymentTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPaymentType;
@property(nonatomic) int paymentType; // @synthesize paymentType=_paymentType;
- (id)surchargeUnitAtIndex:(unsigned long long)arg1;
- (unsigned long long)surchargeUnitsCount;
- (void)addSurchargeUnit:(id)arg1;
- (void)clearSurchargeUnits;
- (void)dealloc;

@end

