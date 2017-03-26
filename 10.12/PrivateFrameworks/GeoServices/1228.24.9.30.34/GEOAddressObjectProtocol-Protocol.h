//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOAddress, GEOPDAddress, GEOPDAddressObject, GEOPDEntity, GEOPDPlaceInfo, GEOStructuredAddress, NSDictionary, NSOrderedSet, NSString;

@protocol GEOAddressObjectProtocol <NSObject>
+ (NSString *)libraryVersion;
@property(readonly, nonatomic) int knownAccuracy;
@property(readonly, nonatomic) BOOL hasKnownAccuracy;
- (NSString *)spokenAddressForLocale:(NSString *)arg1;
- (NSString *)phoneticLocaleIdentifier;
- (NSOrderedSet *)titlesForMapRect:(CDStruct_90e2a262)arg1;
- (NSString *)parkingDisplayName;
- (NSString *)weatherDisplayName;
- (NSString *)cityDisplayNameWithFallback:(BOOL)arg1;
- (NSString *)shortAddress;
- (NSString *)fullAddressWithMultiline:(BOOL)arg1;
- (GEOAddress *)phoneticAddress;
- (NSString *)phoneticName;
- (GEOStructuredAddress *)spokenStructuredAddress;
- (NSString *)spokenAddress;
- (NSString *)spokenName;
- (NSDictionary *)addressDictionary;
- (GEOAddress *)address;
- (NSString *)name;
- (id)initWithPlaceDataAddressObject:(GEOPDAddressObject *)arg1 placeDataAddress:(GEOPDAddress *)arg2 placeDataInfo:(GEOPDPlaceInfo *)arg3 placeDataEntity:(GEOPDEntity *)arg4 language:(NSString *)arg5 country:(NSString *)arg6 phoneticLocale:(NSString *)arg7;
@end

