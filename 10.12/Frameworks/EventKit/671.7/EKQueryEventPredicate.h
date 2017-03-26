//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EventKit/EKQueryPredicate.h>

@class NSArray, NSString;

@interface EKQueryEventPredicate : EKQueryPredicate
{
    NSString *_location;
    NSString *_notes;
    NSArray *_participantNames;
}

+ (id)predicateWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithCalendars:(id)arg1;
@property(retain, nonatomic) NSArray *participantNames; // @synthesize participantNames=_participantNames;
@property(retain, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (BOOL)evaluateWithObject:(id)arg1;
- (unsigned long long)entityType;
- (BOOL)_includeCalendarTitleInSearchTerm;
- (id)mdQueryString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 location:(id)arg2 notes:(id)arg3 participantNames:(id)arg4 calendars:(id)arg5;
- (id)initWithCalendars:(id)arg1;

@end

