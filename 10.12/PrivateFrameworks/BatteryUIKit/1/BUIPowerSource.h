//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface BUIPowerSource : NSObject
{
    NSDictionary *_psDescriptionDictionary;
    BOOL _isUPS;
    BOOL _isUPSDetermined;
    double _percentRemaining;
    BOOL _percentRemainingDetermined;
    BOOL _isPluggedIn;
    BOOL _isPluggedInDetermined;
    NSString *_timeLeftString;
    BOOL _timeLeftStringDetermined;
    long long _timeLeft;
    double _baselineCapacity;
}

+ (id)powerSourceWithIOPSDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (unsigned long long)idealNameWidth;
- (id)nameAsAttributedString;
- (BOOL)isInGoodCondition;
- (BOOL)isInFairCondition;
- (BOOL)isInCheckBatteryCondition;
- (BOOL)isInPoorCondition;
- (BOOL)isCalculatingTime;
- (long long)minutesLeft:(char *)arg1;
- (BOOL)isCharged;
- (BOOL)isCharging;
- (long long)_timeToEmpty:(char *)arg1;
- (long long)_timeToFull:(char *)arg1;
- (long long)_timeForKey:(id)arg1 timeIsValid:(char *)arg2;
- (double)percentRemaining;
- (void)setBaselineCapacity:(double)arg1;
- (double)relativeCapacity;
- (long long)maxCapacity;
- (long long)currentCapacity;
- (BOOL)isFinishingCharge;
- (BOOL)isPluggedIn;
- (BOOL)isInternal;
- (BOOL)isUPS;
- (BOOL)isPresent;
- (id)initWithIOPSDictionary:(id)arg1;

@end

