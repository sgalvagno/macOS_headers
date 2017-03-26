//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class PBUnknownFields, _INPBDataString, _INPBIntentMetadata;

@interface _INPBGetCarPowerLevelStatusIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    _INPBDataString *_carName;
    _INPBIntentMetadata *_intentMetadata;
}

+ (id)options;
@property(retain, nonatomic) _INPBDataString *carName; // @synthesize carName=_carName;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasCarName;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end

