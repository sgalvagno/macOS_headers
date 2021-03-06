//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVResourceTypeItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVResourceTypeItem : CoreDAVResourceTypeItem
{
    CoreDAVItemWithNoChildren *_calendar;
    CoreDAVItemWithNoChildren *_scheduleInbox;
    CoreDAVItemWithNoChildren *_scheduleOutbox;
    CoreDAVItemWithNoChildren *_notification;
    CoreDAVItemWithNoChildren *_subscribed;
    CoreDAVItemWithNoChildren *_sharedOwner;
    CoreDAVItemWithNoChildren *_isFamilyCalendar;
}

@property(retain, nonatomic) CoreDAVItemWithNoChildren *isFamilyCalendar; // @synthesize isFamilyCalendar=_isFamilyCalendar;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *sharedOwner; // @synthesize sharedOwner=_sharedOwner;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *subscribed; // @synthesize subscribed=_subscribed;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *notification; // @synthesize notification=_notification;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleOutbox; // @synthesize scheduleOutbox=_scheduleOutbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *scheduleInbox; // @synthesize scheduleInbox=_scheduleInbox;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *calendar; // @synthesize calendar=_calendar;
- (void)write:(id)arg1;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@end

