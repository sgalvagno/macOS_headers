//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAddress, GEOPlace, GEOPlaceSearchRequest, NSMutableArray, NSString;

@interface GEOPlaceResult : PBCodable <NSCopying>
{
    unsigned long long _flyoverTourMuid;
    NSMutableArray *_additionalPlaces;
    int _cacheControl;
    NSMutableArray *_disambiguationLabels;
    NSMutableArray *_matchedTokens;
    NSMutableArray *_namedFeatures;
    GEOPlace *_place;
    NSString *_quad;
    GEOPlaceSearchRequest *_revgeoRequestTemplate;
    NSString *_suggestedQuery;
    GEOAddress *_tokenEntity;
    unsigned int _travelDistance;
    unsigned int _travelTime;
    NSMutableArray *_unmatchedStrings;
    struct {
        unsigned int flyoverTourMuid:1;
        unsigned int cacheControl:1;
        unsigned int travelDistance:1;
        unsigned int travelTime:1;
    } _has;
}

+ (Class)disambiguationLabelType;
+ (Class)matchedTokenType;
+ (Class)namedFeatureType;
+ (Class)unmatchedStringType;
+ (Class)additionalPlaceType;
@property(retain, nonatomic) NSMutableArray *disambiguationLabels; // @synthesize disambiguationLabels=_disambiguationLabels;
@property(nonatomic) unsigned long long flyoverTourMuid; // @synthesize flyoverTourMuid=_flyoverTourMuid;
@property(retain, nonatomic) NSMutableArray *matchedTokens; // @synthesize matchedTokens=_matchedTokens;
@property(retain, nonatomic) GEOPlaceSearchRequest *revgeoRequestTemplate; // @synthesize revgeoRequestTemplate=_revgeoRequestTemplate;
@property(retain, nonatomic) NSMutableArray *namedFeatures; // @synthesize namedFeatures=_namedFeatures;
@property(retain, nonatomic) NSMutableArray *unmatchedStrings; // @synthesize unmatchedStrings=_unmatchedStrings;
@property(retain, nonatomic) NSString *quad; // @synthesize quad=_quad;
@property(retain, nonatomic) GEOAddress *tokenEntity; // @synthesize tokenEntity=_tokenEntity;
@property(nonatomic) unsigned int travelDistance; // @synthesize travelDistance=_travelDistance;
@property(nonatomic) unsigned int travelTime; // @synthesize travelTime=_travelTime;
@property(retain, nonatomic) NSString *suggestedQuery; // @synthesize suggestedQuery=_suggestedQuery;
@property(retain, nonatomic) NSMutableArray *additionalPlaces; // @synthesize additionalPlaces=_additionalPlaces;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)disambiguationLabelAtIndex:(unsigned long long)arg1;
- (unsigned long long)disambiguationLabelsCount;
- (void)addDisambiguationLabel:(id)arg1;
- (void)clearDisambiguationLabels;
- (int)StringAsCacheControl:(id)arg1;
- (id)cacheControlAsString:(int)arg1;
@property(nonatomic) BOOL hasCacheControl;
@property(nonatomic) int cacheControl; // @synthesize cacheControl=_cacheControl;
@property(nonatomic) BOOL hasFlyoverTourMuid;
- (id)matchedTokenAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedTokensCount;
- (void)addMatchedToken:(id)arg1;
- (void)clearMatchedTokens;
@property(readonly, nonatomic) BOOL hasRevgeoRequestTemplate;
- (id)namedFeatureAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedFeaturesCount;
- (void)addNamedFeature:(id)arg1;
- (void)clearNamedFeatures;
- (id)unmatchedStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)unmatchedStringsCount;
- (void)addUnmatchedString:(id)arg1;
- (void)clearUnmatchedStrings;
@property(readonly, nonatomic) BOOL hasQuad;
@property(readonly, nonatomic) BOOL hasTokenEntity;
@property(nonatomic) BOOL hasTravelDistance;
@property(nonatomic) BOOL hasTravelTime;
@property(readonly, nonatomic) BOOL hasSuggestedQuery;
- (id)additionalPlaceAtIndex:(unsigned long long)arg1;
- (unsigned long long)additionalPlacesCount;
- (void)addAdditionalPlace:(id)arg1;
- (void)clearAdditionalPlaces;
- (void)dealloc;
- (id)geoMapItem;

@end

