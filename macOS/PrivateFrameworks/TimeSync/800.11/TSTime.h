//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/NSCopying-Protocol.h>

@class NSDate, TSGPSTime, TSgPTPTime;

@interface TSTime : NSObject <NSCopying>
{
    BOOL _initedWithgPTP;
    unsigned long long _grandmasterIdentity;
    unsigned short _localPortNumber;
    BOOL _timeTraceable;
    BOOL _frequencyTraceable;
    unsigned long long _nanosecondsSinceEpoch;
}

+ (id)timeConverter;
@property(readonly, nonatomic) unsigned long long nanosecondsSinceEpoch; // @synthesize nanosecondsSinceEpoch=_nanosecondsSinceEpoch;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)timeByAddingNanoseconds:(long long)arg1;
- (long long)nanosecondsSinceTime:(id)arg1;
@property(readonly, copy, nonatomic) TSgPTPTime *gPTPTime; // @dynamic gPTPTime;
@property(readonly, copy, nonatomic) TSGPSTime *gpsTime; // @dynamic gpsTime;
@property(readonly, copy, nonatomic) NSDate *taiDate; // @dynamic taiDate;
@property(readonly, copy, nonatomic) NSDate *utcDate; // @dynamic utcDate;
- (id)initWithNanosecondsSinceEpoch:(unsigned long long)arg1;
- (id)initWithgPTPTime:(id)arg1;
- (id)initWithGPSTime:(id)arg1;
- (id)initWithTAIDate:(id)arg1;
- (id)initWithUTCDate:(id)arg1;
- (id)init;

@end

