//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKFrozenObject.h>

#import <EventKit/EKProtocolCalendarNotification-Protocol.h>

@class NSDate, NSDictionary, NSManagedObjectID, NSNumber, NSString;
@protocol EKProtocolCalendarSource, EKProtocolEventOccurrence;

@interface EKFrozenCalendarNotification : EKFrozenObject <EKProtocolCalendarNotification>
{
    BOOL dateChanged;
    BOOL timeChanged;
    BOOL titleChanged;
    BOOL locationChanged;
    BOOL attachmentsChanged;
    BOOL dismissed;
    NSNumber *notificationType;
    NSString *uuid;
    NSString *title;
    NSString *name;
    NSString *emailAddress;
    NSString *firstName;
    NSString *lastName;
    NSString *attendeeComment;
    NSNumber *createdCount;
    NSNumber *updatedCount;
    NSNumber *deletedCount;
    NSString *calendarName;
    NSString *principalName;
    NSString *filename;
    NSString *componentType;
    NSNumber *senders;
    id <EKProtocolEventOccurrence> occurrence;
    id <EKProtocolCalendarSource> containerSource;
    NSDate *proposedStartDateUnadjustedFromUTC;
    NSDate *proposedEndDateUnadjustedFromUTC;
    unsigned long long junkStatus;
}

+ (Class)meltedClass;
+ (id)frozenObjectForObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3 forceUpdate:(BOOL)arg4;
+ (Class)_realClassForNotification:(id)arg1;
@property(readonly, nonatomic) unsigned long long junkStatus; // @synthesize junkStatus;
@property(readonly, nonatomic) NSDate *proposedEndDateUnadjustedFromUTC; // @synthesize proposedEndDateUnadjustedFromUTC;
@property(readonly, nonatomic) NSDate *proposedStartDateUnadjustedFromUTC; // @synthesize proposedStartDateUnadjustedFromUTC;
@property(readonly) BOOL dismissed; // @synthesize dismissed;
@property(readonly, nonatomic) id <EKProtocolCalendarSource> containerSource; // @synthesize containerSource;
@property(readonly, nonatomic) id <EKProtocolEventOccurrence> occurrence; // @synthesize occurrence;
@property(readonly, nonatomic) NSNumber *senders; // @synthesize senders;
@property(readonly, nonatomic) NSString *componentType; // @synthesize componentType;
@property(readonly) NSString *filename; // @synthesize filename;
@property(readonly, nonatomic) BOOL attachmentsChanged; // @synthesize attachmentsChanged;
@property(readonly, nonatomic) BOOL locationChanged; // @synthesize locationChanged;
@property(readonly, nonatomic) BOOL titleChanged; // @synthesize titleChanged;
@property(readonly, nonatomic) BOOL timeChanged; // @synthesize timeChanged;
@property(readonly, nonatomic) BOOL dateChanged; // @synthesize dateChanged;
@property(readonly, nonatomic) NSString *principalName; // @synthesize principalName;
@property(readonly) NSString *calendarName; // @synthesize calendarName;
@property(readonly) NSNumber *deletedCount; // @synthesize deletedCount;
@property(readonly) NSNumber *updatedCount; // @synthesize updatedCount;
@property(readonly) NSNumber *createdCount; // @synthesize createdCount;
@property(readonly) NSString *attendeeComment; // @synthesize attendeeComment;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName;
@property(readonly, nonatomic) NSString *emailAddress; // @synthesize emailAddress;
@property(readonly, nonatomic) NSString *name; // @synthesize name;
@property(readonly, nonatomic) NSString *title; // @synthesize title;
@property(readonly) NSString *uuid; // @synthesize uuid;
@property(readonly, nonatomic) NSNumber *notificationType; // @synthesize notificationType;
- (void).cxx_destruct;
- (BOOL)isProposedNewTime;
- (BOOL)isResourceChange;
- (BOOL)isSharedCalendarReply;
- (BOOL)isSharedCalendarInvitation;
- (BOOL)isInvitation;
- (id)initWithObject:(id)arg1 createPartialObject:(BOOL)arg2 preFrozenRelationshipObjects:(id)arg3;

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

