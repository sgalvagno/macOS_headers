//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/NSSecureCoding-Protocol.h>

@interface CALDuration : NSObject <NSSecureCoding>
{
    double _duration;
}

+ (id)durationWithRawInterval:(double)arg1;
+ (id)durationWithDurationWithoutDayPart:(id)arg1;
+ (id)durationWithDurationRoundedToDay:(id)arg1;
+ (id)durationWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 seconds:(int)arg4;
+ (id)durationWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3;
+ (id)durationWithDays:(int)arg1 hours:(int)arg2;
+ (id)durationWithSeconds:(int)arg1;
+ (id)durationWithMinutes:(int)arg1;
+ (id)durationWithHours:(int)arg1;
+ (id)durationWithDays:(int)arg1;
+ (BOOL)supportsSecureCoding;
- (id)humanReadableDescriptionIncludeZero:(BOOL)arg1 abbreviate:(BOOL)arg2 allDayEvent:(BOOL)arg3 includeBeforeOrAfter:(BOOL)arg4 includeTravel:(BOOL)arg5 includeAlert:(BOOL)arg6;
- (id)humanReadableDescriptionIncludeZero:(BOOL)arg1 abbreviate:(BOOL)arg2 allDayEvent:(BOOL)arg3 includeBeforeOrAfter:(BOOL)arg4;
- (id)humanReadableDescriptionIncludeZero:(BOOL)arg1 abbreviate:(BOOL)arg2;
- (id)humanReadableDescriptionIncludeZero:(BOOL)arg1;
- (id)humanReadableDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)inverse;
- (BOOL)isNegative;
- (BOOL)isLongerThan:(id)arg1;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)secondsPart;
- (int)minutesPart;
- (int)hoursPart;
- (int)daysPart;
- (void)setRawInterval:(double)arg1;
- (double)rawInterval;
- (id)initWithRawInterval:(double)arg1;
- (id)durationRoundedToDay;
- (id)initWithDurationWithoutDayPart:(id)arg1;
- (id)initWithDurationRoundedToDay:(id)arg1;
- (id)initWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3 seconds:(int)arg4;
- (id)initWithDays:(int)arg1 hours:(int)arg2 minutes:(int)arg3;
- (id)initWithDays:(int)arg1 hours:(int)arg2;
- (id)initWithSeconds:(int)arg1;
- (id)initWithMinutes:(int)arg1;
- (id)initWithHours:(int)arg1;
- (id)initWithDays:(int)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithISO8601String:(const char *)arg1;

@end

