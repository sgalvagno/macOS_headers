//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSString, PBUnknownFields, _INPBString;

@interface _INPBIntentMetadata : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _RequiredEntitlements;
    NSString *_LaunchId;
    NSString *_intentId;
    _INPBString *_userUtterance;
    BOOL _backgroundLaunch;
    BOOL _confirmed;
    struct {
        unsigned int backgroundLaunch:1;
        unsigned int confirmed:1;
    } _has;
}

@property(retain, nonatomic) NSString *intentId; // @synthesize intentId=_intentId;
@property(nonatomic) BOOL confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic) BOOL backgroundLaunch; // @synthesize backgroundLaunch=_backgroundLaunch;
@property(retain, nonatomic) NSString *LaunchId; // @synthesize LaunchId=_LaunchId;
@property(retain, nonatomic) _INPBString *userUtterance; // @synthesize userUtterance=_userUtterance;
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
- (int)StringAsRequiredEntitlements:(id)arg1;
- (id)RequiredEntitlementsAsString:(int)arg1;
- (void)setRequiredEntitlements:(int *)arg1 count:(unsigned long long)arg2;
- (int)RequiredEntitlementAtIndex:(unsigned long long)arg1;
- (void)addRequiredEntitlement:(int)arg1;
- (void)clearRequiredEntitlements;
@property(readonly, nonatomic) int *RequiredEntitlements;
@property(readonly, nonatomic) unsigned long long RequiredEntitlementsCount;
@property(readonly, nonatomic) BOOL hasIntentId;
@property(nonatomic) BOOL hasConfirmed;
@property(nonatomic) BOOL hasBackgroundLaunch;
@property(readonly, nonatomic) BOOL hasLaunchId;
@property(readonly, nonatomic) BOOL hasUserUtterance;
- (void)dealloc;

@end

