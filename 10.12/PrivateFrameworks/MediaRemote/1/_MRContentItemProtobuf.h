//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, _MRContentItemMetadataProtobuf, _MRLyricsItemProtobuf;

@interface _MRContentItemProtobuf : PBCodable <NSCopying>
{
    NSString *_ancestorIdentifier;
    NSData *_artworkData;
    NSMutableArray *_availableLanguageOptions;
    NSMutableArray *_currentLanguageOptions;
    NSString *_identifier;
    NSString *_info;
    _MRLyricsItemProtobuf *_lyrics;
    _MRContentItemMetadataProtobuf *_metadata;
    NSString *_parentIdentifier;
    NSString *_queueIdentifier;
    NSString *_requestIdentifier;
    NSMutableArray *_sections;
}

+ (Class)sectionsType;
+ (Class)currentLanguageOptionsType;
+ (Class)availableLanguageOptionsType;
@property(retain, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *queueIdentifier; // @synthesize queueIdentifier=_queueIdentifier;
@property(retain, nonatomic) NSString *ancestorIdentifier; // @synthesize ancestorIdentifier=_ancestorIdentifier;
@property(retain, nonatomic) NSString *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(retain, nonatomic) NSMutableArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) _MRLyricsItemProtobuf *lyrics; // @synthesize lyrics=_lyrics;
@property(retain, nonatomic) NSMutableArray *currentLanguageOptions; // @synthesize currentLanguageOptions=_currentLanguageOptions;
@property(retain, nonatomic) NSMutableArray *availableLanguageOptions; // @synthesize availableLanguageOptions=_availableLanguageOptions;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(retain, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(retain, nonatomic) _MRContentItemMetadataProtobuf *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasRequestIdentifier;
@property(readonly, nonatomic) BOOL hasQueueIdentifier;
@property(readonly, nonatomic) BOOL hasAncestorIdentifier;
@property(readonly, nonatomic) BOOL hasParentIdentifier;
- (id)sectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionsCount;
- (void)addSections:(id)arg1;
- (void)clearSections;
@property(readonly, nonatomic) BOOL hasLyrics;
- (id)currentLanguageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentLanguageOptionsCount;
- (void)addCurrentLanguageOptions:(id)arg1;
- (void)clearCurrentLanguageOptions;
- (id)availableLanguageOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)availableLanguageOptionsCount;
- (void)addAvailableLanguageOptions:(id)arg1;
- (void)clearAvailableLanguageOptions;
@property(readonly, nonatomic) BOOL hasInfo;
@property(readonly, nonatomic) BOOL hasArtworkData;
@property(readonly, nonatomic) BOOL hasMetadata;
@property(readonly, nonatomic) BOOL hasIdentifier;
- (void)dealloc;
- (id)description;
- (BOOL)hasAvailableLanguageOptions;
- (BOOL)hasCurrentLanguageOptions;

@end

