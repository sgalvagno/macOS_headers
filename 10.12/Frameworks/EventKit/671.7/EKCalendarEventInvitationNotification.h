//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class EKAttendee, EKConflictDetails;

@interface EKCalendarEventInvitationNotification : EKCalendarNotification
{
    EKAttendee *_cachedAttendee;
    EKConflictDetails *_cachedConflicts;
}

+ (id)conflictsForNotifications:(id)arg1;
@property(retain) EKConflictDetails *cachedConflicts; // @synthesize cachedConflicts=_cachedConflicts;
@property(retain) EKAttendee *cachedAttendee; // @synthesize cachedAttendee=_cachedAttendee;
- (void).cxx_destruct;
- (BOOL)couldBeJunk;
- (id)sendersEmail;
- (id)conflicts;
- (BOOL)supportsConflictScanning;
- (unsigned long long)_attendeeResponsesOfType:(int)arg1;
- (unsigned long long)attendeeComments;
- (unsigned long long)attendeeDeclines;
- (unsigned long long)attendeeAccepts;
- (id)respondingAttendeeComment;
- (id)respondingAttendee;
@property(readonly, nonatomic) long long status;
- (unsigned long long)supportedActions;
- (long long)type;
- (BOOL)isForReReply;
@property(readonly, nonatomic) BOOL isVirtual;
- (BOOL)needsReply;
@property(readonly, nonatomic) BOOL isLocationDecline;
- (BOOL)isInvitation;
- (id)initWithRelatedEvent:(id)arg1;

@end

