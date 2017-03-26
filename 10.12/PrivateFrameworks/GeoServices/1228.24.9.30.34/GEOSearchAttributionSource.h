//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOSearchAttributionSource : PBCodable <NSCopying>
{
    CDStruct_95bda58d _attributionRequirements;
    NSMutableArray *_attributionApps;
    NSMutableArray *_localizedAttributions;
    NSString *_sourceIdentifier;
    unsigned int _sourceVersion;
    NSMutableArray *_supportedComponentActions;
    NSString *_webBaseActionURL;
    BOOL _enforceAppStore;
    struct {
        unsigned int enforceAppStore:1;
    } _has;
}

+ (Class)supportedComponentActionsType;
+ (Class)attributionAppsType;
+ (Class)localizedAttributionType;
@property(nonatomic) BOOL enforceAppStore; // @synthesize enforceAppStore=_enforceAppStore;
@property(retain, nonatomic) NSMutableArray *supportedComponentActions; // @synthesize supportedComponentActions=_supportedComponentActions;
@property(retain, nonatomic) NSString *webBaseActionURL; // @synthesize webBaseActionURL=_webBaseActionURL;
@property(retain, nonatomic) NSMutableArray *attributionApps; // @synthesize attributionApps=_attributionApps;
@property(retain, nonatomic) NSMutableArray *localizedAttributions; // @synthesize localizedAttributions=_localizedAttributions;
@property(nonatomic) unsigned int sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasEnforceAppStore;
- (id)supportedComponentActionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)supportedComponentActionsCount;
- (void)addSupportedComponentActions:(id)arg1;
- (void)clearSupportedComponentActions;
@property(readonly, nonatomic) BOOL hasWebBaseActionURL;
- (id)attributionAppsAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionAppsCount;
- (void)addAttributionApps:(id)arg1;
- (void)clearAttributionApps;
- (int)StringAsAttributionRequirements:(id)arg1;
- (id)attributionRequirementsAsString:(int)arg1;
- (void)setAttributionRequirements:(int *)arg1 count:(unsigned long long)arg2;
- (int)attributionRequirementsAtIndex:(unsigned long long)arg1;
- (void)addAttributionRequirements:(int)arg1;
- (void)clearAttributionRequirements;
@property(readonly, nonatomic) int *attributionRequirements;
@property(readonly, nonatomic) unsigned long long attributionRequirementsCount;
- (id)localizedAttributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAttributionsCount;
- (void)addLocalizedAttribution:(id)arg1;
- (void)clearLocalizedAttributions;
- (void)dealloc;
- (id)bestLocalizedAttribution;
- (BOOL)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2;
- (BOOL)supportsAction:(int)arg1 forComponent:(int)arg2;

@end

