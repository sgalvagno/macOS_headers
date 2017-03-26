//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPRecordRetrieveChangesResponse : PBCodable <NSCopying>
{
    NSMutableArray *_changedRecords;
    NSMutableArray *_changedShares;
    NSData *_clientChangeToken;
    int _status;
    NSData *_syncContinuationToken;
    CDStruct_47fe53f2 _has;
}

+ (Class)changedShareType;
+ (Class)changedRecordType;
@property(retain, nonatomic) NSMutableArray *changedShares; // @synthesize changedShares=_changedShares;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
@property(retain, nonatomic) NSMutableArray *changedRecords; // @synthesize changedRecords=_changedRecords;
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
- (id)changedShareAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedSharesCount;
- (void)addChangedShare:(id)arg1;
- (void)clearChangedShares;
- (int)StringAsStatus:(id)arg1;
- (id)statusAsString:(int)arg1;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) BOOL hasClientChangeToken;
@property(readonly, nonatomic) BOOL hasSyncContinuationToken;
- (id)changedRecordAtIndex:(unsigned long long)arg1;
- (unsigned long long)changedRecordsCount;
- (void)addChangedRecord:(id)arg1;
- (void)clearChangedRecords;

@end

