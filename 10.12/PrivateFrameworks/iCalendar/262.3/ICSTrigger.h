//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
{
}

- (id)travelRelativeDuration;
- (id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2;
- (BOOL)isDurationBased;
- (id)initWithDuration:(id)arg1;
- (id)initWithDate:(id)arg1;
- (void)fixAlarmTrigger;
- (void)setDuration:(id)arg1;
- (void)setDate:(id)arg1;

@end

