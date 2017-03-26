//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

#import <XQuery/XQueryAtomicType-Protocol.h>

@class NSString, NSTimeZone;

__attribute__((visibility("hidden")))
@interface XQueryDate : NSDate <XQueryAtomicType>
{
    double _timeInterval;
    NSTimeZone *_timeZone;
    long long _type;
}

+ (id)xqueryGMonthFromString:(id)arg1;
+ (id)xqueryGDayFromString:(id)arg1;
+ (id)xqueryGMonthDayFromString:(id)arg1;
+ (id)xqueryGYearFromString:(id)arg1;
+ (id)xqueryGMonthYearFromString:(id)arg1;
+ (id)xqueryTimeFromString:(id)arg1;
+ (id)xqueryDateFromString:(id)arg1;
+ (id)xqueryDateTimeFromString:(id)arg1;
+ (id)xqueryDateWithTimeIntervalSinceReferenceDate:(double)arg1 forType:(long long)arg2;
+ (id)xqueryDateWithGregorianDate:(CDStruct_79f9e052)arg1 timeZone:(id)arg2 forType:(long long)arg3;
+ (id)currentDate;
+ (id)currentTime;
+ (id)currentDateTime;
+ (id)timeZoneGMT;
- (CDStruct_79f9e052)gregorianDateGMT;
- (CDStruct_79f9e052)gregorianDate;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;
- (id)localizedStringForTimeZone:(id)arg1;
- (id)XQueryStringValue;
@property(readonly, copy) NSString *description;
- (id)XQueryCastAs:(long long)arg1 forContext:(id)arg2;
- (long long)XQueryTypeID;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1 forType:(long long)arg2;
- (id)initWithTimeIntervalSinceNow:(double)arg1;
- (id)initWithTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (id)initWithTimeIntervalSinceReferenceDate:(double)arg1;
- (id)init;
- (double)timeIntervalSinceReferenceDate;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

