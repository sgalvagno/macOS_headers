//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, ICSDuration, ICSStructuredLocation, ICSTravelAdvisoryBehavior, ICSTravelDuration, ICSUserAddress, NSArray, NSString, NSURL;

@interface ICSEvent : ICSComponent
{
}

+ (id)name;
- (id)propertiesThatIfPresentExcludeThisComponentFromChecksummingForVersion:(int)arg1;
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;
- (BOOL)isDefaultAlarmDeleted;
@property(nonatomic) int x_apple_ews_busystatus;
@property(nonatomic) BOOL x_wr_rsvpneeded; // @dynamic x_wr_rsvpneeded;
@property(nonatomic) BOOL x_wr_itipstatusml; // @dynamic x_wr_itipstatusml;
@property(nonatomic) BOOL x_wr_itipstatusattendeeml; // @dynamic x_wr_itipstatusattendeeml;
@property(nonatomic) BOOL x_wr_itipalreadysent; // @dynamic x_wr_itipalreadysent;
@property(nonatomic) BOOL x_apple_needs_reply; // @dynamic x_apple_needs_reply;
@property(nonatomic) BOOL x_apple_dontschedule;
@property(retain, nonatomic) NSString *x_calendarserver_private_comment;
@property(retain, nonatomic) NSArray *x_calendarserver_attendee_comment;
@property(nonatomic) int transp;
- (BOOL)validate:(id *)arg1;
- (void)fixAttendeeComments;
- (void)fixComponent;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property int classification; // @dynamic classification;
@property(retain) NSArray *conferences; // @dynamic conferences;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) NSString *description; // @dynamic description;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) NSArray *exdate; // @dynamic exdate;
@property(retain) NSArray *exrule; // @dynamic exrule;
@property BOOL forcedAllDay; // @dynamic forcedAllDay;
@property(readonly) BOOL isAllDay; // @dynamic isAllDay;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) NSString *location; // @dynamic location;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property(retain) NSArray *rdate; // @dynamic rdate;
@property(retain) ICSDate *recurrence_id; // @dynamic recurrence_id;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property unsigned long long sequence; // @dynamic sequence;
@property int status; // @dynamic status;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;
@property(retain) NSString *x_apple_dropbox; // @dynamic x_apple_dropbox;
@property(retain) ICSStructuredLocation *x_apple_end_location; // @dynamic x_apple_end_location;
@property(retain) NSString *x_apple_ews_changekey; // @dynamic x_apple_ews_changekey;
@property(retain) NSString *x_apple_ews_itemid; // @dynamic x_apple_ews_itemid;
@property BOOL x_apple_ews_needsserverconfirmation; // @dynamic x_apple_ews_needsserverconfirmation;
@property(retain) NSString *x_apple_ews_permission; // @dynamic x_apple_ews_permission;
@property BOOL x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property(retain) ICSStructuredLocation *x_apple_structured_location; // @dynamic x_apple_structured_location;
@property(retain) ICSTravelAdvisoryBehavior *x_apple_travel_advisory_behavior; // @dynamic x_apple_travel_advisory_behavior;
@property(retain) ICSTravelDuration *x_apple_travel_duration; // @dynamic x_apple_travel_duration;
@property(retain) ICSStructuredLocation *x_apple_travel_start; // @dynamic x_apple_travel_start;

@end

