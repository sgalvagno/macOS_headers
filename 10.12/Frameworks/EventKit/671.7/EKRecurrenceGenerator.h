//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EKRecurrenceGenerator : NSObject
{
}

+ (id)nextOccurrenceDateForRecurrenceRuleString:(id)arg1 afterDate:(id)arg2 recurrenceStartDate:(id)arg3 timezone:(id)arg4 inCalendar:(id)arg5 occurrenceCount:(long long *)arg6;
+ (id)nextOccurrenceDateForRecurrenceRuleString:(id)arg1 afterDate:(id)arg2 recurrenceStartDate:(id)arg3 timezone:(id)arg4 occurrenceCount:(long long *)arg5;
+ (id)nextNDates:(long long)arg1 forRecurrenceRuleString:(id)arg2 recurrenceStart:(id)arg3 timeZone:(id)arg4 inCalendar:(id)arg5 isAllDay:(BOOL)arg6;
+ (id)nextNDatesInUTC:(long long)arg1 forRecurrenceRuleString:(id)arg2 recurrenceStart:(id)arg3 isAllDay:(BOOL)arg4;
+ (id)datesByExpandingRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 recurrenceStartDate:(id)arg4 inTimezone:(id)arg5 isAllDay:(BOOL)arg6 duration:(long long)arg7 lunarCalendarString:(id)arg8;
+ (id)datesByExpandingRule:(id)arg1 fromDate:(id)arg2 toDate:(id)arg3 inTimezone:(id)arg4 isAllDay:(BOOL)arg5 lunarCalendarString:(id)arg6;

@end

