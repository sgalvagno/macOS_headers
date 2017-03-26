//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSString;

@interface _CPSearchSuggestion : PBCodable <NSCopying>
{
    double _score;
    NSString *_fbr;
    NSString *_identifier;
    NSString *_query;
    NSString *_suggestion;
    int _type;
    struct {
        unsigned int score:1;
        unsigned int type:1;
    } _has;
}

@property(retain, nonatomic) NSString *fbr; // @synthesize fbr=_fbr;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
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
@property(readonly, nonatomic) BOOL hasFbr;
- (int)StringAsType:(id)arg1;
- (id)typeAsString:(int)arg1;
@property(nonatomic) BOOL hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) BOOL hasScore;
@property(readonly, nonatomic) BOOL hasQuery;
@property(readonly, nonatomic) BOOL hasSuggestion;
@property(readonly, nonatomic) BOOL hasIdentifier;

@end

