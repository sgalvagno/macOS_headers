//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudDocsDaemon/NSCopying-Protocol.h>
#import <CloudDocsDaemon/PQLValuable-Protocol.h>

@class NSString;

@interface BRFieldCKInfo : PBCodable <PQLValuable, NSCopying>
{
    NSString *_etag;
    NSString *_etagBeforeCrossZoneMove;
    BOOL _knownToServer;
    BOOL _wasCached;
    struct {
        unsigned int knownToServer:1;
        unsigned int wasCached:1;
    } _has;
}

+ (id)newFromSqliteValue:(struct Mem *)arg1;
@property(retain, nonatomic) NSString *etagBeforeCrossZoneMove; // @synthesize etagBeforeCrossZoneMove=_etagBeforeCrossZoneMove;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic) BOOL knownToServer; // @synthesize knownToServer=_knownToServer;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL hasEtagBeforeCrossZoneMove;
@property(readonly, nonatomic) BOOL hasEtag;
@property(nonatomic) BOOL hasWasCached;
@property(nonatomic) BOOL hasKnownToServer;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)setCKInfoFieldsInRecord:(id)arg1;
- (void)markMovedToCloudDocsZone;
- (id)initWithRecord:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

