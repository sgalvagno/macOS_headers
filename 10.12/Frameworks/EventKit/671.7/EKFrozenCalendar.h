//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import <EventKit/EKProtocolCalendar-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;
@protocol EKProtocolCalendarSource;

@interface EKFrozenCalendar : EKFrozenObject <EKProtocolCalendar>
{
    BOOL allowsContentModifications;
    BOOL allowEvents;
    BOOL allowReminders;
    BOOL allowsScheduling;
    BOOL cachedHasSharees;
    BOOL defaultOrganizerIsMeForNewItems;
    BOOL ignoreAlarms;
    BOOL isDefaultSchedulingCalendar;
    BOOL isDistinguishedExchangeCalendar;
    BOOL isFamilyCalendar;
    BOOL isMarkedUndeletable;
    BOOL isMarkedImmutableSharees;
    BOOL isFacebookBirthdayCalendar;
    BOOL isRenameable;
    BOOL isColorEditable;
    BOOL isShareable;
    BOOL isSubscribed;
    BOOL isSubscribedHolidayCalendar;
    BOOL isSuggestedEventCalendar;
    BOOL isAffectingAvailability;
    BOOL _suppressEventSchedulingNotifications;
    int displayOrder;
    NSString *calendarIdentifier;
    NSString *colorString;
    id <EKProtocolCalendarSource> containerSource;
    NSSet *defaultAlarmsForAllDayEvents;
    NSSet *defaultAlarmsForTimedEvents;
    NSURL *defaultOrganizerAddressForNewItems;
    NSString *defaultOrganizerEmailForNewItems;
    NSString *defaultOrganizerEncodedLikenessDataForNewItems;
    NSString *defaultOrganizerNameForNewItems;
    NSString *notes;
    NSString *path;
    NSURL *prePublishURL;
    NSURL *publishURL;
    NSURL *subscriptionURL;
    NSString *serverPath;
    NSString *sharedOwnerAddress;
    NSSet *sharedOwnerAddresses;
    NSString *sharedOwnerName;
    NSSet *sharees;
    NSString *sharingStatusString;
    NSString *symbolicColorName;
    NSString *title;
    NSSet *alarms;
    NSDictionary *_cachedPreFrozenRelationshipObjects;
}

+ (Class)meltedClass;
+ (id)propertiesUnavailableForPartialObjects;
@property(retain) NSDictionary *cachedPreFrozenRelationshipObjects; // @synthesize cachedPreFrozenRelationshipObjects=_cachedPreFrozenRelationshipObjects;
@property(readonly, nonatomic) BOOL suppressEventSchedulingNotifications; // @synthesize suppressEventSchedulingNotifications=_suppressEventSchedulingNotifications;
@property(readonly, nonatomic) BOOL isAffectingAvailability; // @synthesize isAffectingAvailability;
@property(readonly, nonatomic) NSSet *alarms; // @synthesize alarms;
@property(readonly, nonatomic) NSString *title; // @synthesize title;
@property(readonly, copy, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName;
@property(readonly, nonatomic) NSString *sharingStatusString; // @synthesize sharingStatusString;
@property(readonly, nonatomic) NSSet *sharees; // @synthesize sharees;
@property(readonly, nonatomic) NSString *sharedOwnerName; // @synthesize sharedOwnerName;
@property(readonly, nonatomic) NSSet *sharedOwnerAddresses; // @synthesize sharedOwnerAddresses;
@property(readonly, nonatomic) NSString *sharedOwnerAddress; // @synthesize sharedOwnerAddress;
@property(readonly, nonatomic) NSString *serverPath; // @synthesize serverPath;
@property(readonly, nonatomic) NSURL *subscriptionURL; // @synthesize subscriptionURL;
@property(readonly, copy, nonatomic) NSURL *publishURL; // @synthesize publishURL;
@property(readonly, nonatomic) NSURL *prePublishURL; // @synthesize prePublishURL;
@property(readonly, nonatomic) NSString *path; // @synthesize path;
@property(readonly, copy, nonatomic) NSString *notes; // @synthesize notes;
@property(readonly, nonatomic) BOOL isSuggestedEventCalendar; // @synthesize isSuggestedEventCalendar;
@property(readonly, nonatomic) BOOL isSubscribedHolidayCalendar; // @synthesize isSubscribedHolidayCalendar;
@property(readonly, nonatomic) BOOL isSubscribed; // @synthesize isSubscribed;
@property(readonly, nonatomic) BOOL isShareable; // @synthesize isShareable;
@property(readonly, nonatomic) BOOL isColorEditable; // @synthesize isColorEditable;
@property(readonly, nonatomic) BOOL isRenameable; // @synthesize isRenameable;
@property(readonly, nonatomic) BOOL isFacebookBirthdayCalendar; // @synthesize isFacebookBirthdayCalendar;
@property(readonly) BOOL isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees;
@property(readonly) BOOL isMarkedUndeletable; // @synthesize isMarkedUndeletable;
@property(readonly, nonatomic) BOOL isFamilyCalendar; // @synthesize isFamilyCalendar;
@property(readonly, nonatomic) BOOL isDistinguishedExchangeCalendar; // @synthesize isDistinguishedExchangeCalendar;
@property(readonly, nonatomic) BOOL isDefaultSchedulingCalendar; // @synthesize isDefaultSchedulingCalendar;
@property(readonly, nonatomic) BOOL ignoreAlarms; // @synthesize ignoreAlarms;
@property(readonly, nonatomic) int displayOrder; // @synthesize displayOrder;
@property(readonly, nonatomic) NSString *defaultOrganizerNameForNewItems; // @synthesize defaultOrganizerNameForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerEncodedLikenessDataForNewItems; // @synthesize defaultOrganizerEncodedLikenessDataForNewItems;
@property(readonly, nonatomic) NSString *defaultOrganizerEmailForNewItems; // @synthesize defaultOrganizerEmailForNewItems;
@property(readonly, nonatomic) BOOL defaultOrganizerIsMeForNewItems; // @synthesize defaultOrganizerIsMeForNewItems;
@property(readonly, nonatomic) NSURL *defaultOrganizerAddressForNewItems; // @synthesize defaultOrganizerAddressForNewItems;
@property(readonly, nonatomic) NSSet *defaultAlarmsForTimedEvents; // @synthesize defaultAlarmsForTimedEvents;
@property(readonly, nonatomic) NSSet *defaultAlarmsForAllDayEvents; // @synthesize defaultAlarmsForAllDayEvents;
@property(readonly, copy, nonatomic) id <EKProtocolCalendarSource> containerSource; // @synthesize containerSource;
@property(readonly, copy, nonatomic) NSString *colorString; // @synthesize colorString;
@property(readonly, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier;
@property(readonly, nonatomic) BOOL cachedHasSharees; // @synthesize cachedHasSharees;
@property(readonly, nonatomic) BOOL allowsScheduling; // @synthesize allowsScheduling;
@property(readonly, nonatomic) BOOL allowReminders; // @synthesize allowReminders;
@property(readonly, nonatomic) BOOL allowEvents; // @synthesize allowEvents;
@property(readonly, nonatomic) BOOL allowsContentModifications; // @synthesize allowsContentModifications;
- (void).cxx_destruct;
- (id)color;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
- (void)_handlePreFrozenRelationshipObjects:(id)arg1 forCalendar:(id)arg2;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly) Class superclass;

@end

