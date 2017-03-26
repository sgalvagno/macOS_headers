//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet, GEOLatLng, GEOTransitArrivalInfo, GEOTransitBaseFare, GEOTransitSurcharge, NSMutableArray;

@interface GEOTransitStep : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _routeDetailsPrimaryArtworkIndexs;
    CDStruct_9f2792e4 _steppingArtworkIndexs;
    unsigned int _accessPointZilchIndex;
    GEOTransitArrivalInfo *_arrivalInfo;
    GEOTransitBaseFare *_baseFare;
    unsigned int _defaultVehicleInfoIndex;
    unsigned int _departureFrequency;
    unsigned int _distanceInMeters;
    unsigned int _endingStopIndex;
    NSMutableArray *_enterExitInfos;
    GEOInstructionSet *_instructions;
    unsigned int _listTransitIncidentMessageIndex;
    GEOLatLng *_location;
    int _maneuverType;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    int _significanceForEndNode;
    unsigned int _startingStopIndex;
    unsigned int _startingTime;
    unsigned int _steppingTransitIncidentMessageIndex;
    GEOTransitSurcharge *_surcharge;
    NSMutableArray *_transferInfos;
    NSMutableArray *_vehicleInfos;
    unsigned int _walkingIndex;
    unsigned int _zilchIndex;
    BOOL _prioritizeTilesPreloading;
    struct {
        unsigned int accessPointZilchIndex:1;
        unsigned int defaultVehicleInfoIndex:1;
        unsigned int departureFrequency:1;
        unsigned int distanceInMeters:1;
        unsigned int endingStopIndex:1;
        unsigned int listTransitIncidentMessageIndex:1;
        unsigned int maneuverType:1;
        unsigned int routeDetailsSecondaryArtworkIndex:1;
        unsigned int significanceForEndNode:1;
        unsigned int startingStopIndex:1;
        unsigned int startingTime:1;
        unsigned int steppingTransitIncidentMessageIndex:1;
        unsigned int walkingIndex:1;
        unsigned int zilchIndex:1;
        unsigned int prioritizeTilesPreloading:1;
    } _has;
}

+ (Class)transferInfoType;
+ (Class)enterExitInfoType;
+ (Class)vehicleInfoType;
@property(retain, nonatomic) GEOTransitSurcharge *surcharge; // @synthesize surcharge=_surcharge;
@property(retain, nonatomic) GEOTransitBaseFare *baseFare; // @synthesize baseFare=_baseFare;
@property(nonatomic) unsigned int listTransitIncidentMessageIndex; // @synthesize listTransitIncidentMessageIndex=_listTransitIncidentMessageIndex;
@property(nonatomic) unsigned int steppingTransitIncidentMessageIndex; // @synthesize steppingTransitIncidentMessageIndex=_steppingTransitIncidentMessageIndex;
@property(nonatomic) unsigned int departureFrequency; // @synthesize departureFrequency=_departureFrequency;
@property(nonatomic) unsigned int defaultVehicleInfoIndex; // @synthesize defaultVehicleInfoIndex=_defaultVehicleInfoIndex;
@property(nonatomic) unsigned int accessPointZilchIndex; // @synthesize accessPointZilchIndex=_accessPointZilchIndex;
@property(nonatomic) unsigned int routeDetailsSecondaryArtworkIndex; // @synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex;
@property(nonatomic) unsigned int distanceInMeters; // @synthesize distanceInMeters=_distanceInMeters;
@property(nonatomic) unsigned int zilchIndex; // @synthesize zilchIndex=_zilchIndex;
@property(retain, nonatomic) GEOInstructionSet *instructions; // @synthesize instructions=_instructions;
@property(retain, nonatomic) GEOLatLng *location; // @synthesize location=_location;
@property(retain, nonatomic) GEOTransitArrivalInfo *arrivalInfo; // @synthesize arrivalInfo=_arrivalInfo;
@property(nonatomic) unsigned int startingTime; // @synthesize startingTime=_startingTime;
@property(retain, nonatomic) NSMutableArray *transferInfos; // @synthesize transferInfos=_transferInfos;
@property(nonatomic) unsigned int walkingIndex; // @synthesize walkingIndex=_walkingIndex;
@property(nonatomic) BOOL prioritizeTilesPreloading; // @synthesize prioritizeTilesPreloading=_prioritizeTilesPreloading;
@property(retain, nonatomic) NSMutableArray *enterExitInfos; // @synthesize enterExitInfos=_enterExitInfos;
@property(retain, nonatomic) NSMutableArray *vehicleInfos; // @synthesize vehicleInfos=_vehicleInfos;
@property(nonatomic) unsigned int endingStopIndex; // @synthesize endingStopIndex=_endingStopIndex;
@property(nonatomic) unsigned int startingStopIndex; // @synthesize startingStopIndex=_startingStopIndex;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasSurcharge;
@property(readonly, nonatomic) BOOL hasBaseFare;
@property(nonatomic) BOOL hasListTransitIncidentMessageIndex;
@property(nonatomic) BOOL hasSteppingTransitIncidentMessageIndex;
@property(nonatomic) BOOL hasDepartureFrequency;
@property(nonatomic) BOOL hasDefaultVehicleInfoIndex;
@property(nonatomic) BOOL hasAccessPointZilchIndex;
@property(nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex;
- (void)setSteppingArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)clearSteppingArtworkIndexs;
@property(readonly, nonatomic) unsigned int *steppingArtworkIndexs;
@property(readonly, nonatomic) unsigned long long steppingArtworkIndexsCount;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned int *routeDetailsPrimaryArtworkIndexs;
@property(readonly, nonatomic) unsigned long long routeDetailsPrimaryArtworkIndexsCount;
@property(nonatomic) BOOL hasDistanceInMeters;
@property(nonatomic) BOOL hasZilchIndex;
@property(readonly, nonatomic) BOOL hasInstructions;
- (int)StringAsSignificanceForEndNode:(id)arg1;
- (id)significanceForEndNodeAsString:(int)arg1;
@property(nonatomic) BOOL hasSignificanceForEndNode;
@property(nonatomic) int significanceForEndNode; // @synthesize significanceForEndNode=_significanceForEndNode;
@property(readonly, nonatomic) BOOL hasLocation;
@property(readonly, nonatomic) BOOL hasArrivalInfo;
@property(nonatomic) BOOL hasStartingTime;
- (id)transferInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)transferInfosCount;
- (void)addTransferInfo:(id)arg1;
- (void)clearTransferInfos;
@property(nonatomic) BOOL hasWalkingIndex;
@property(nonatomic) BOOL hasPrioritizeTilesPreloading;
- (id)enterExitInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)enterExitInfosCount;
- (void)addEnterExitInfo:(id)arg1;
- (void)clearEnterExitInfos;
- (id)vehicleInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)vehicleInfosCount;
- (void)addVehicleInfo:(id)arg1;
- (void)clearVehicleInfos;
@property(nonatomic) BOOL hasEndingStopIndex;
@property(nonatomic) BOOL hasStartingStopIndex;
- (int)StringAsManeuverType:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
@property(nonatomic) BOOL hasManeuverType;
@property(nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
- (void)dealloc;
- (long long)legTypeForManuever;

@end

