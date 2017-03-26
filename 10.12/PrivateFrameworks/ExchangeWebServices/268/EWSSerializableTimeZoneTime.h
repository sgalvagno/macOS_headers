//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ExchangeWebServices/XSDefinitionProvider-Protocol.h>

@class NSDateComponents, NSString;

@interface EWSSerializableTimeZoneTime : NSObject <XSDefinitionProvider>
{
    long long _Bias;
    NSDateComponents *_Time;
    long long _DayOrder;
    long long _Month;
    long long _DayOfWeek;
    NSString *_Year;
}

+ (id)definition;
@property(copy, nonatomic) NSString *Year; // @synthesize Year=_Year;
@property(nonatomic) long long DayOfWeek; // @synthesize DayOfWeek=_DayOfWeek;
@property(nonatomic) long long Month; // @synthesize Month=_Month;
@property(nonatomic) long long DayOrder; // @synthesize DayOrder=_DayOrder;
@property(retain, nonatomic) NSDateComponents *Time; // @synthesize Time=_Time;
@property(nonatomic) long long Bias; // @synthesize Bias=_Bias;
- (void).cxx_destruct;
- (BOOL)matchesPatternForDate:(id)arg1 withBias:(long long)arg2 inCalendar:(id)arg3;
- (BOOL)isEqualToSerializableTimeZoneTime:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

