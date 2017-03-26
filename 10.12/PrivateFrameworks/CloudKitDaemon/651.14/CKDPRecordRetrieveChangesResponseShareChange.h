//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPShare, CKDPShareIdentifier;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying>
{
    int _changeType;
    CKDPShare *_share;
    CKDPShareIdentifier *_shareIdentifier;
    CDStruct_f5f6ac14 _has;
}

@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
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
@property(readonly, nonatomic) BOOL hasShare;
- (int)StringAsChangeType:(id)arg1;
- (id)changeTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) BOOL hasShareIdentifier;

@end

