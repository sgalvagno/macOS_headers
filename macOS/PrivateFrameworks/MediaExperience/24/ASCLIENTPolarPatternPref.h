//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

__attribute__((visibility("hidden")))
@interface ASCLIENTPolarPatternPref : PBCodable <NSCopying>
{
    unsigned int _dataSourceID;
    unsigned int _polarPattern;
    struct {
        unsigned int polarPattern:1;
    } _has;
}

@property(nonatomic) unsigned int polarPattern; // @synthesize polarPattern=_polarPattern;
@property(nonatomic) unsigned int dataSourceID; // @synthesize dataSourceID=_dataSourceID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasPolarPattern;

@end

