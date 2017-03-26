//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEONameInfo : PBCodable <NSCopying>
{
    NSString *_locale;
    NSString *_name;
    NSString *_phoneticName;
    int _phoneticType;
    NSString *_shield;
    int _shieldType;
    int _signType;
    struct {
        unsigned int phoneticType:1;
        unsigned int shieldType:1;
        unsigned int signType:1;
    } _has;
}

@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(nonatomic) int shieldType; // @synthesize shieldType=_shieldType;
@property(retain, nonatomic) NSString *shield; // @synthesize shield=_shield;
@property(retain, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLocale;
- (int)StringAsSignType:(id)arg1;
- (id)signTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasSignType;
@property(nonatomic) int signType; // @synthesize signType=_signType;
- (int)StringAsPhoneticType:(id)arg1;
- (id)phoneticTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPhoneticType;
@property(nonatomic) int phoneticType; // @synthesize phoneticType=_phoneticType;
@property(nonatomic) BOOL hasShieldType;
@property(readonly, nonatomic) BOOL hasShield;
@property(readonly, nonatomic) BOOL hasPhoneticName;
@property(readonly, nonatomic) BOOL hasName;
- (void)dealloc;

@end

