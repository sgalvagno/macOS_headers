//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedCalendarChangeRequest.h>

@class NSString;

@interface CalManagedSubscriptionCalendarChangeRequest : CalManagedCalendarChangeRequest
{
}

+ (id)insertSubscriptionCalendarChangeRequestWithType:(int)arg1 sourceUID:(id)arg2 uri:(id)arg3 inManagedObjectContext:(id)arg4;

// Remaining properties
@property BOOL hasAlarmFilter; // @dynamic hasAlarmFilter;
@property BOOL hasAttachmentFilter; // @dynamic hasAttachmentFilter;
@property BOOL hasTaskFilter; // @dynamic hasTaskFilter;
@property BOOL isAutoProvisioned; // @dynamic isAutoProvisioned;
@property(retain) NSString *languageCode; // @dynamic languageCode;
@property(retain) NSString *locationCode; // @dynamic locationCode;
@property int refreshInterval; // @dynamic refreshInterval;
@property(retain) NSString *subscriptionURLString; // @dynamic subscriptionURLString;

@end

