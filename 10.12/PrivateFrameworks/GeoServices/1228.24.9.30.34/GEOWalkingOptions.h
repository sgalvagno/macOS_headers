//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOWalkingOptions : PBCodable <NSCopying>
{
    CDStruct_95bda58d _avoidedModes;
    double _preferredSpeed;
    struct {
        unsigned int preferredSpeed:1;
    } _has;
}

@property(nonatomic) double preferredSpeed; // @synthesize preferredSpeed=_preferredSpeed;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAvoidedModes:(id)arg1;
- (id)avoidedModesAsString:(int)arg1;
- (void)setAvoidedModes:(int *)arg1 count:(unsigned long long)arg2;
- (int)avoidedModeAtIndex:(unsigned long long)arg1;
- (void)addAvoidedMode:(int)arg1;
- (void)clearAvoidedModes;
@property(readonly, nonatomic) int *avoidedModes;
@property(readonly, nonatomic) unsigned long long avoidedModesCount;
@property(nonatomic) BOOL hasPreferredSpeed;
- (void)dealloc;

@end

