//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAddressObjectProtocol-Protocol.h>

@class NSString;
@protocol GEOAddressObjectProtocol;

@interface GEOAddressObject : NSObject <GEOAddressObjectProtocol>
{
    id <GEOAddressObjectProtocol> _implementations[2];
}

+ (id)libraryVersion;
+ (unsigned char)_implementionType;
+ (id)addressObjectWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4;
+ (BOOL)isMarkingMMStrings;
+ (void)markMMStrings:(BOOL)arg1;
+ (BOOL)isUsingV1Behavior;
+ (void)useV1Behavior:(BOOL)arg1;
+ (BOOL)isUsingMM;
+ (void)useMM:(BOOL)arg1;
+ (id)addressObjectForPlaceData:(id)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)rawBytes;
- (id)phoneticLocaleIdentifier;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownAccuracy;
- (id)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (id)parkingDisplayName;
- (id)weatherDisplayName;
- (id)cityDisplayNameWithFallback:(BOOL)arg1;
- (id)shortAddress;
- (id)fullAddressWithMultiline:(BOOL)arg1;
- (id)phoneticAddress;
- (id)phoneticName;
- (id)spokenStructuredAddress;
- (id)spokenAddressForLocale:(id)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)addressDictionary;
- (id)address;
- (id)name;
- (void)dealloc;
- (id)initWithPlaceDataAddressObject:(id)arg1 placeDataAddress:(id)arg2 placeDataInfo:(id)arg3 placeDataEntity:(id)arg4 language:(id)arg5 country:(id)arg6 phoneticLocale:(id)arg7;
- (id)_implemention;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

