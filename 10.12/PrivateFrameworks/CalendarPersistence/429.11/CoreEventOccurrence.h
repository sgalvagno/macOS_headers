//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALOccurrence.h>

@class CALDate, CALDuration, CalEventOccurrence;

@interface CoreEventOccurrence : CALOccurrence
{
    CALDate *_cachedEndDate;
    CALDuration *_cachedDuration;
    CalEventOccurrence *_regularOccurrence;
}

@property(retain, nonatomic) CalEventOccurrence *regularOccurrence; // @synthesize regularOccurrence=_regularOccurrence;
- (id)summary;
- (id)commitWithDelegate:(id)arg1 commitWholeRecurrence:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (id)commitWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)makeEntityFromOccurrence;
- (BOOL)deleteWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)commitDateTimeChangeWithDelegate:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)commitDateTimeChangeWithDelegate:(id)arg1 withEntityTimeZone:(BOOL)arg2 inManagedObjectContext:(id)arg3;
- (void)restore;
- (BOOL)isFullDayOccurrence;
- (id)timeRangeForFullDayOccurrence;
- (id)endDate;
- (void)setEndDate:(id)arg1;
- (void)dealloc;
- (void)setStartDate:(id)arg1 endDate:(id)arg2;
- (void)moveToStartDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)invalidateCachedEndDate;
- (void)setStartDateAndTimeZone:(id)arg1;
- (id)initWithOccurrableEntity:(id)arg1 withStartDate:(id)arg2;
- (id)duration;
- (id)event;
- (id)objectForKey:(id)arg1;
- (id)startNSCalendarDate;

@end

