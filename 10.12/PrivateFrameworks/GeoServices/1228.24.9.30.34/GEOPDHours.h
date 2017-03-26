//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOPDHours : PBCodable <NSCopying>
{
    CDStruct_95bda58d _days;
    struct GEOPDLocalTimeRange *_timeRanges;
    unsigned long long _timeRangesCount;
    unsigned long long _timeRangesSpace;
}

+ (id)completeOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)currentOperatingHoursForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (BOOL)currentOperatingHoursAvailableForPlaceData:(id)arg1 withTimeZone:(id)arg2;
+ (id)_allHoursForPlaceData:(id)arg1;
+ (BOOL)operatingHoursAvailableForPlaceData:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (void)setTimeRanges:(struct GEOPDLocalTimeRange *)arg1 count:(unsigned long long)arg2;
- (struct GEOPDLocalTimeRange)timeRangeAtIndex:(unsigned long long)arg1;
- (void)addTimeRange:(struct GEOPDLocalTimeRange)arg1;
- (void)clearTimeRanges;
@property(readonly, nonatomic) struct GEOPDLocalTimeRange *timeRanges;
@property(readonly, nonatomic) unsigned long long timeRangesCount;
- (int)StringAsDays:(id)arg1;
- (id)daysAsString:(int)arg1;
- (void)setDays:(int *)arg1 count:(unsigned long long)arg2;
- (int)dayAtIndex:(unsigned long long)arg1;
- (void)addDay:(int)arg1;
- (void)clearDays;
@property(readonly, nonatomic) int *days;
@property(readonly, nonatomic) unsigned long long daysCount;
- (void)dealloc;

@end

