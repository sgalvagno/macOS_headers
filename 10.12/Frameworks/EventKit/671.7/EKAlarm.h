//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKProtocolMutableAlarm-Protocol.h>
#import <EventKit/NSCopying-Protocol.h>

@class EKCalendar, EKCalendarItem, EKStructuredLocation, NSArray, NSData, NSDate, NSDictionary, NSManagedObjectID, NSString, NSURL;

@interface EKAlarm : EKObject <EKProtocolMutableAlarm, NSCopying>
{
    BOOL isDefault;
    BOOL isSnoozed;
    NSString *sharedUID;
}

+ (long long)maxPublicProximity;
+ (double)defaultGeofencedReminderRadius;
+ (BOOL)areLocationsCurrentlyEnabled;
+ (BOOL)areLocationsAllowedWithAuthorizationStatus:(int)arg1;
+ (BOOL)areLocationsAllowed;
+ (int)_currentAuthorizationStatus;
+ (BOOL)areLocationsAvailable;
+ (id)knownSingleValueKeys;
+ (id)noneTriggerDate;
+ (id)knownRelationshipSingleValueKeys;
+ (id)knownImmutableKeys;
+ (id)knownIdentityKeys;
+ (id)uniqueIdentifierForObject:(id)arg1;
+ (Class)frozenClass;
+ (id)procedureAlarmWithBookmark:(id)arg1;
+ (id)alarmWithRelativeOffset:(double)arg1;
+ (id)alarmWithAbsoluteDate:(id)arg1;
+ (id)alarm;
+ (id)alarmWithDefaultAlarm:(id)arg1;
+ (id)alarmWithAlarm:(id)arg1;
@property(readonly, nonatomic) NSString *sharedUID; // @synthesize sharedUID;
@property(nonatomic) BOOL isSnoozed; // @synthesize isSnoozed;
@property(readonly, nonatomic) BOOL isDefault; // @synthesize isDefault;
- (void).cxx_destruct;
- (BOOL)isTopographicallyEqualToAlarm:(id)arg1;
@property(copy, nonatomic) NSArray *snoozedAlarms;
@property(retain, nonatomic) EKAlarm *originalAlarm;
@property(retain, nonatomic) EKCalendarItem *calendarItemOwner;
@property(retain, nonatomic) EKCalendar *calendarOwner;
- (id)ownerUUID;
@property(readonly, nonatomic) EKObject *owner;
@property(readonly, nonatomic) NSString *externalID;
@property(readonly, nonatomic) NSString *UUID;
- (id)initWithAbsoluteDate:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)shouldIncludeInNormalAlarms;
@property(nonatomic, getter=isDefaultAlarm) BOOL defaultAlarm;
@property(nonatomic) long long proximity;
@property(copy, nonatomic) EKStructuredLocation *structuredLocation;
- (void)setProximityString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *proximityString;
@property(copy, nonatomic) NSData *bookmark;
@property(copy, nonatomic) NSURL *url;
@property(copy, nonatomic) NSString *soundName;
@property(copy, nonatomic) NSString *emailAddress;
- (void)setType:(long long)arg1;
@property(readonly, nonatomic) long long type;
- (void)setActionString:(id)arg1;
@property(readonly, copy, nonatomic) NSString *actionString;
- (void)setAcknowledgedDate:(id)arg1;
@property(readonly, copy, nonatomic) NSDate *acknowledgedDate;
- (void)setTriggerIsNotRelativeToTravelTime:(BOOL)arg1;
- (BOOL)triggerIsNotRelativeToTravelTime;
- (void)setNotRelativeToTravelTime:(BOOL)arg1;
@property(readonly, nonatomic) BOOL notRelativeToTravelTime;
@property(copy, nonatomic) NSDate *absoluteDate;
@property(nonatomic) double relativeOffset;
- (void)setIsTimeToLeaveAlarm:(BOOL)arg1;
@property(readonly, nonatomic) BOOL isTimeToLeaveAlarm;
- (BOOL)isVehicleAlarm;
@property(readonly, nonatomic) BOOL isAbsolute;
- (id)backingAlarm;
- (id)_keysToChangeForDuplicateWithOptions:(long long)arg1;
- (id)initWithRelativeOffset:(double)arg1;
- (id)initWithObject:(id)arg1 createPartialBackingObject:(BOOL)arg2 keepBackingObject:(BOOL)arg3 preFrozenRelationshipObjects:(id)arg4 additionalFrozenProperties:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

