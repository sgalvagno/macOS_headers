//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarUI/NSObject-Protocol.h>

@class CLLocation, EKStructuredLocation, NSDate, NSString;

@protocol EKUIAlertable <NSObject>
@property(retain) NSString *personIdentifier;
@property(retain) NSDate *alarmTime;
- (long long)proximity;
- (void)setProximity:(long long)arg1;
- (void)setLocation:(CLLocation *)arg1 addressString:(NSString *)arg2 label:(NSString *)arg3 radius:(double)arg4;
- (NSString *)completeLocationString;
- (NSString *)preferredLocationString;
- (void)removeStructuredLocation;
- (EKStructuredLocation *)structuredLocation;
@end

