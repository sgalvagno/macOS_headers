//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOVLabelLanguage : PBCodable <NSCopying>
{
    unsigned int _endOffset;
    NSString *_languageLocale;
    unsigned int _startOffset;
}

@property(retain, nonatomic) NSString *languageLocale; // @synthesize languageLocale=_languageLocale;
@property(nonatomic) unsigned int endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) unsigned int startOffset; // @synthesize startOffset=_startOffset;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)dealloc;

@end

