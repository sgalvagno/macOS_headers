//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CALEntity.h>

@class CALDate, CALDateTime, NSTimeZone;

@interface CoreEvent : CALEntity
{
    CALDate *_eventCachedEndDate;
    CALDate *_alldaycacheStart;
    CALDateTime *_alldaycacheEnd;
    NSTimeZone *_alldaycacheTimeZone;
    double _travelDuration;
    BOOL _hasEverUsedWorkingElswhere;
}

+ (id)event;
+ (id)entityFromManagedObject:(id)arg1 omitAttendees:(BOOL)arg2;
+ (id)entityFromManagedObject:(id)arg1;
@property(readonly) BOOL hasEverUsedWorkingElswhere; // @synthesize hasEverUsedWorkingElswhere=_hasEverUsedWorkingElswhere;
- (id)humanReadableRepeatDescription;
- (void)_makeAlarmExchangeCompatible:(id)arg1;
- (BOOL)_isAlarmExchangeCompatible:(id)arg1;
- (BOOL)isExchangeCompatible;
- (id)_makeExchangeCompatible;
- (id)expandOnTimeRange:(id)arg1;
- (id)upperBoundDate;
- (id)checkValidity;
- (BOOL)isValidStatus:(int)arg1;
- (void)setLinkID:(id)arg1;
- (id)linkID;
- (void)cleanUp;
- (id)defaultAlarmsBasedOnItemAndPreferencesInContext:(id)arg1;
- (BOOL)hasAlarmWithDuration:(id)arg1 thatOverlapsOccWithStartDate:(id)arg2 andEndDate:(id)arg3;
- (BOOL)isOverlappingAlarmForStartDate:(id)arg1 endDate:(id)arg2 newDuration:(id)arg3;
- (BOOL)isOverlappingAdjacentOccurrenceForStartDate:(id)arg1 endDate:(id)arg2 originalStartDate:(id)arg3;
- (void)setIsYearlessBirthday:(BOOL)arg1;
- (BOOL)isYearlessBirthday;
- (void)setBirthdayName:(id)arg1;
- (id)birthdayName;
- (BOOL)hasOccurrencesThatOverlap;
- (BOOL)isOrganizerOwner;
- (BOOL)isOrganizerMe;
- (void)setNeedsReply:(BOOL)arg1;
- (BOOL)needsReply;
- (id)locationString;
- (void)setLocations:(id)arg1;
- (id)locations;
- (void)setEndLocation:(id)arg1;
- (void)setTravelStartLocation:(id)arg1;
- (id)endLocation;
- (id)travelStartLocation;
- (void)setStructuredLocation:(id)arg1;
- (id)structuredLocation;
- (void)removeTransparency;
- (void)setTransparency:(int)arg1;
- (int)transparency;
- (void)setTravelDuration:(id)arg1;
- (id)travelDuration;
- (void)setPriority:(int)arg1;
- (void)removePriority;
- (int)priority;
- (BOOL)isFullDayEvent;
- (void)setFullDayEvent:(BOOL)arg1 withHintTimeRange:(id)arg2;
- (void)setFullDayEvent:(BOOL)arg1;
- (void)setStartDate:(id)arg1;
- (void)moveToStartDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (id)lastSavedDuration;
- (id)duration;
- (void)releaseCachedEndDate;
- (void)setEndDate:(id)arg1;
- (id)endDate;
- (void)forceDatesToGMT;
- (void)actualCommitInManagedObjectContext:(id)arg1;
- (void)invalidateEntityCaches;
- (void)finalize;
- (void)dealloc;
- (Class)correspondingOccurrenceClass;
- (void)forceFullDayEvent;
- (void)setEndNSCalendarDate:(id)arg1;
- (id)endNSCalendarDate;

@end

