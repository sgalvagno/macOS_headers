//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (WBSNSDateExtras)
+ (double)safari_oneDayInSeconds;
+ (id)safari_dateOfMidnightNumberOfDaysAgo:(long long)arg1;
- (BOOL)safari_isNowOrInRecentPast;
- (BOOL)safari_isInclusivelyBetweenDate:(id)arg1 andDate:(id)arg2;
- (id)safari_startOfDay;
- (BOOL)safari_isInSameDayAsDate:(id)arg1;
- (BOOL)safari_isInToday;
- (long long)safari_numberOfWeeksUntilDate:(id)arg1;
@end

