//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Sharing/NSCopying-Protocol.h>

@class NSString;

@interface AWDSharingCloudDatabaseZoneCheckResult : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    unsigned int _count;
    int _errorCode;
    NSString *_errorDomain;
    BOOL _found;
    CDStruct_ff718a68 _has;
}

@property(nonatomic) BOOL found; // @synthesize found=_found;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
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
@property(nonatomic) BOOL hasFound;
@property(nonatomic) BOOL hasCount;
@property(nonatomic) BOOL hasErrorCode;
@property(readonly, nonatomic) BOOL hasErrorDomain;
@property(nonatomic) BOOL hasTimestamp;

@end

