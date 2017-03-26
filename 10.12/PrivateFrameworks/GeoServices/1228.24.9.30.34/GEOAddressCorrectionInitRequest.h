//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

@interface GEOAddressCorrectionInitRequest : PBRequest <NSCopying>
{
    NSString *_personID;
    NSString *_token;
    BOOL _supportsMultipleAddresses;
    struct {
        unsigned int supportsMultipleAddresses:1;
    } _has;
}

@property(nonatomic) BOOL supportsMultipleAddresses; // @synthesize supportsMultipleAddresses=_supportsMultipleAddresses;
@property(retain, nonatomic) NSString *personID; // @synthesize personID=_personID;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasSupportsMultipleAddresses;
@property(readonly, nonatomic) BOOL hasPersonID;
@property(readonly, nonatomic) BOOL hasToken;
- (void)dealloc;

@end

