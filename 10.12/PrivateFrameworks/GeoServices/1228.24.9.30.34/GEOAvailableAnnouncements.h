//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAvailableAnnouncements : PBCodable <NSCopying>
{
    NSMutableArray *_announcements;
    NSString *_languageCode;
}

+ (Class)announcementType;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSMutableArray *announcements; // @synthesize announcements=_announcements;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasLanguageCode;
- (id)announcementAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsCount;
- (void)addAnnouncement:(id)arg1;
- (void)clearAnnouncements;
- (void)dealloc;

@end

