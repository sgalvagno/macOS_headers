//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapTransitAccessPoint-Protocol.h>

@class GEOMapAccess, NSString;
@protocol GEOMapTransitStation;

__attribute__((visibility("hidden")))
@interface GEOMapAccessTransitAccessPoint : NSObject <GEOMapTransitAccessPoint>
{
    GEOMapAccess *_map;
    shared_ptr_4792c490 _accessPoint;
    id <GEOMapTransitStation> _station;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findAccessPoints:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStation:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findStops:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findGeometryWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long polygonPointsCount;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *polygonPoints;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingRect;
@property(readonly, nonatomic) double boundingRadius;
- (double)distanceInMetersFrom:(CDStruct_c3b9c2ee)arg1;
@property(readonly, nonatomic) unsigned short accessType;
@property(readonly, nonatomic) unsigned char entranceExitType;
@property(readonly, nonatomic) double groundRadius;
@property(readonly, nonatomic) unsigned long long stationID;
@property(readonly, nonatomic) NSString *internalName;
@property(readonly, nonatomic) unsigned long long transitID;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithMap:(id)arg1 accessPoint:(shared_ptr_4792c490)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

