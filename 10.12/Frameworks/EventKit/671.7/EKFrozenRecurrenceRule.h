//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import <EventKit/EKProtocolRecurrenceRule-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface EKFrozenRecurrenceRule : EKFrozenObject <EKProtocolRecurrenceRule>
{
    BOOL _allDay;
    BOOL _floating;
    NSNumber *countNumber;
    NSArray *daysOfTheMonth;
    NSArray *daysOfTheWeek;
    NSArray *daysOfTheYear;
    NSDate *endDate;
    NSNumber *firstDayOfTheWeekNumber;
    NSNumber *frequencyNumber;
    NSNumber *intervalNumber;
    NSArray *monthsOfTheYear;
    NSArray *setPositions;
    NSArray *weeksOfTheYear;
}

+ (id)ruleWithRule:(id)arg1 allDay:(BOOL)arg2 floating:(BOOL)arg3;
+ (long long)ekFrequencyFromICSFrequency:(int)arg1;
+ (int)intervalFromICSDate:(id)arg1 inTimezone:(id)arg2;
+ (Class)meltedClass;
@property BOOL floating; // @synthesize floating=_floating;
@property BOOL allDay; // @synthesize allDay=_allDay;
@property(readonly, copy, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear;
@property(readonly, copy, nonatomic) NSArray *setPositions; // @synthesize setPositions;
@property(readonly, copy, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear;
@property(readonly, copy, nonatomic) NSNumber *intervalNumber; // @synthesize intervalNumber;
@property(readonly, copy, nonatomic) NSNumber *frequencyNumber; // @synthesize frequencyNumber;
@property(readonly, copy, nonatomic) NSNumber *firstDayOfTheWeekNumber; // @synthesize firstDayOfTheWeekNumber;
@property(readonly, copy, nonatomic) NSDate *endDate; // @synthesize endDate;
@property(readonly, copy, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear;
@property(readonly, copy, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek;
@property(readonly, copy, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth;
@property(readonly, copy, nonatomic) NSNumber *countNumber; // @synthesize countNumber;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL ruleIsForFloatingItem;
@property(readonly, nonatomic) BOOL ruleIsForAllDayItem;
- (id)initWithRuleString:(id)arg1 allDay:(BOOL)arg2 floating:(BOOL)arg3;
- (id)meltedObjectInStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

