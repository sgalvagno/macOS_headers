//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CaliMIPPersistDetailsOperation.h>

@class NSString;

@interface CaliMIPReplyOperation : CaliMIPPersistDetailsOperation
{
    NSString *_replyStatus;
    NSString *_organizerEmail;
}

+ (BOOL)_managedAttendeeWillCauseiMIPScheduling:(id)arg1 ignoreParticipantStatus:(BOOL)arg2;
+ (int)icsMethod;
+ (BOOL)updateSequenceNumber;
+ (BOOL)managedAttendeeWillCauseiMIPScheduling:(id)arg1;
+ (id)operationsWithManagedAttendees:(id)arg1 replyStatus:(id)arg2;
+ (id)operationsWithManagedAttendees:(id)arg1;
@property(retain) NSString *organizerEmail; // @synthesize organizerEmail=_organizerEmail;
@property(retain) NSString *replyStatus; // @synthesize replyStatus=_replyStatus;
- (int)_participationStatusInContext:(id)arg1;
- (id)emailSubjectInContext:(id)arg1;
- (id)emailRecipientsInContext:(id)arg1;
- (id)emailBodyInContext:(id)arg1;
- (id)attachmentName;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithManagedAttendees:(id)arg1;

@end

