//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class EKRecurrenceEnd, NSArray;

@interface EKSerializableRecurrenceRule : EKSerializableObject
{
    long long _frequency;
    long long _interval;
    EKRecurrenceEnd *_recurrenceEnd;
    long long _firstDayOfTheWeek;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheYear;
    NSArray *_weeksOfTheYear;
    NSArray *_monthsOfTheYear;
    NSArray *_setPositions;
}

+ (id)classesForKey;
@property(readonly, nonatomic) NSArray *setPositions; // @synthesize setPositions=_setPositions;
@property(readonly, nonatomic) NSArray *monthsOfTheYear; // @synthesize monthsOfTheYear=_monthsOfTheYear;
@property(readonly, nonatomic) NSArray *weeksOfTheYear; // @synthesize weeksOfTheYear=_weeksOfTheYear;
@property(readonly, nonatomic) NSArray *daysOfTheYear; // @synthesize daysOfTheYear=_daysOfTheYear;
@property(readonly, nonatomic) NSArray *daysOfTheMonth; // @synthesize daysOfTheMonth=_daysOfTheMonth;
@property(readonly, nonatomic) NSArray *daysOfTheWeek; // @synthesize daysOfTheWeek=_daysOfTheWeek;
@property(readonly, nonatomic) long long firstDayOfTheWeek; // @synthesize firstDayOfTheWeek=_firstDayOfTheWeek;
@property(copy, nonatomic) EKRecurrenceEnd *recurrenceEnd; // @synthesize recurrenceEnd=_recurrenceEnd;
@property(readonly, nonatomic) long long interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) long long frequency; // @synthesize frequency=_frequency;
- (void).cxx_destruct;
- (id)createRecurrenceRule:(id *)arg1;
- (id)initWithRecurrenceRule:(id)arg1;

@end

