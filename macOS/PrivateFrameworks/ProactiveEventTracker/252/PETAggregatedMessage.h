//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ProactiveEventTracker/NSCopying-Protocol.h>

@class PETAggregationKey, PETDistribution;

@interface PETAggregatedMessage : PBCodable <NSCopying>
{
    unsigned int _count;
    PETDistribution *_distribution;
    PETAggregationKey *_key;
    struct {
        unsigned int count:1;
    } _has;
}

@property(retain, nonatomic) PETDistribution *distribution; // @synthesize distribution=_distribution;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) PETAggregationKey *key; // @synthesize key=_key;
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
@property(readonly, nonatomic) BOOL hasDistribution;
@property(nonatomic) BOOL hasCount;
@property(readonly, nonatomic) BOOL hasKey;

@end

