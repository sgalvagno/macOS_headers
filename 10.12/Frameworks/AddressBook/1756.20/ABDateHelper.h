//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ABDateHelper : NSObject
{
}

+ (id)componentsFromDate:(id)arg1;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6 timeZone:(id)arg7;
+ (id)dateWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
+ (long long)gregorianYearFromDate:(id)arg1;
+ (long long)gregorianYearInGMTFromDate:(id)arg1;
+ (long long)currentGregorianYearInGMT;
+ (id)gregorianCalendarInGMT;
+ (id)gregorianCalendar;

@end

