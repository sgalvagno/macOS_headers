//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDPlaceRequest;

@interface GEOLogMsgStatePlaceRequest : PBRequest <NSCopying>
{
    GEOPDPlaceRequest *_placeDataRequest;
    int _placeRequestType;
    struct {
        unsigned int placeRequestType:1;
    } _has;
}

@property(retain, nonatomic) GEOPDPlaceRequest *placeDataRequest; // @synthesize placeDataRequest=_placeDataRequest;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasPlaceDataRequest;
- (int)StringAsPlaceRequestType:(id)arg1;
- (id)placeRequestTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasPlaceRequestType;
@property(nonatomic) int placeRequestType; // @synthesize placeRequestType=_placeRequestType;
- (void)dealloc;

@end

