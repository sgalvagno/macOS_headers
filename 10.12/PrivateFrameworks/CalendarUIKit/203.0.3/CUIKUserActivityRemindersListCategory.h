//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUIKit/CUIKUserActivityWithSource.h>

@class NSString;

@interface CUIKUserActivityRemindersListCategory : CUIKUserActivityWithSource
{
    NSString *_title;
    NSString *_externalID;
}

- (void).cxx_destruct;
- (id)remindersListFromStore:(id)arg1;
- (BOOL)_isMatchForRemindersList:(id)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithRemindersList:(id)arg1;
- (id)initWithRemindersList:(id)arg1 forceLocal:(BOOL)arg2;

@end

