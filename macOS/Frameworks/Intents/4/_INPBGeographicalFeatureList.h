//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"
#import "_INPBGeographicalFeatureList.h"

@class NSArray, NSString, _INPBCondition;

@interface _INPBGeographicalFeatureList : PBCodable <_INPBGeographicalFeatureList, NSSecureCoding, NSCopying>
{
    struct _has;
    BOOL __encodeLegacyGloryData;
    _INPBCondition *_condition;
    NSArray *_geographicalFeatures;
}

+ (BOOL)supportsSecureCoding;
+ (Class)geographicalFeatureType;
- (void).cxx_destruct;
@property(nonatomic, setter=_setEncodeLegacyGloryData:) BOOL _encodeLegacyGloryData; // @synthesize _encodeLegacyGloryData=__encodeLegacyGloryData;
@property(copy, nonatomic) NSArray *geographicalFeatures; // @synthesize geographicalFeatures=_geographicalFeatures;
@property(retain, nonatomic) _INPBCondition *condition; // @synthesize condition=_condition;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)geographicalFeatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long geographicalFeaturesCount;
- (void)addGeographicalFeature:(id)arg1;
- (void)clearGeographicalFeatures;
@property(readonly, nonatomic) BOOL hasCondition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

