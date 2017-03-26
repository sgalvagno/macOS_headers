//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields, _INPBIntentMetadata;

@interface _INPBStartVideoCallIntent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _audioRoute;
    NSMutableArray *_contacts;
    _INPBIntentMetadata *_intentMetadata;
    struct {
        unsigned int audioRoute:1;
    } _has;
}

+ (Class)contactType;
+ (id)options;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
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
- (id)contactAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (void)addContact:(id)arg1;
- (void)clearContacts;
- (int)StringAsAudioRoute:(id)arg1;
- (id)audioRouteAsString:(int)arg1;
@property(nonatomic) BOOL hasAudioRoute;
@property(nonatomic) int audioRoute; // @synthesize audioRoute=_audioRoute;
@property(readonly, nonatomic) BOOL hasIntentMetadata;

@end

