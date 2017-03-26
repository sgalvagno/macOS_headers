//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface _INPBIntentSlotVocabularyConcept : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    NSMutableArray *_synonyms;
}

+ (Class)synonymsType;
@property(retain, nonatomic) NSMutableArray *synonyms; // @synthesize synonyms=_synonyms;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
- (id)synonymsAtIndex:(unsigned long long)arg1;
- (unsigned long long)synonymsCount;
- (void)addSynonyms:(id)arg1;
- (void)clearSynonyms;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

