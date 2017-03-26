//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttribution : PBCodable <NSCopying>
{
    NSMutableArray *_attributionURLs;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
}

+ (Class)attributionURLsType;
@property(retain, nonatomic) NSMutableArray *attributionURLs; // @synthesize attributionURLs=_attributionURLs;
@property(nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)attributionURLsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionURLsCount;
- (void)addAttributionURLs:(id)arg1;
- (void)clearAttributionURLs;
- (void)dealloc;

@end

