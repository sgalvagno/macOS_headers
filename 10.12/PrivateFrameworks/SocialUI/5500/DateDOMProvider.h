//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SocialUI/DOMProvider.h>

@class NSMutableArray;

@interface DateDOMProvider : DOMProvider
{
    NSMutableArray *_preciseFragments;
    NSMutableArray *_longFragments;
    NSMutableArray *_dateFragments;
    NSMutableArray *_timeFragments;
    NSMutableArray *_timeOrDateFragments;
}

+ (void)initialize;
@property(retain) NSMutableArray *timeOrDateFragments; // @synthesize timeOrDateFragments=_timeOrDateFragments;
@property(retain) NSMutableArray *timeFragments; // @synthesize timeFragments=_timeFragments;
@property(retain) NSMutableArray *dateFragments; // @synthesize dateFragments=_dateFragments;
@property(retain) NSMutableArray *longFragments; // @synthesize longFragments=_longFragments;
@property(retain) NSMutableArray *preciseFragments; // @synthesize preciseFragments=_preciseFragments;
- (void).cxx_destruct;
- (id)formatDate:(id)arg1 roundInterval:(int)arg2 showDate:(BOOL)arg3 showTime:(BOOL)arg4 showSeconds:(BOOL)arg5;
- (id)parseTime:(id)arg1 changeToDateStampTomorrow:(BOOL)arg2;
- (id)timeStringForDate:(id)arg1;
- (id)parseDate:(id)arg1;
- (id)dateStringForDate:(id)arg1;
- (id)parseLongDate:(id)arg1;
- (id)longStringForDate:(id)arg1;
- (id)parsePreciseDate:(id)arg1;
- (id)preciseStringForDate:(id)arg1;
- (id)_genericDateFragmentForDate:(id)arg1 formatter:(long long)arg2 cache:(id)arg3;
- (id)_baseDateElementWithString:(id)arg1 timestamp:(double)arg2;
- (id)_formatDate:(id)arg1 withFormatter:(long long)arg2;
- (void)dateFormatDidChange;
- (void)adjustDateFragmentsForTimeChange;
- (void)_adjustElementsInArray:(id)arg1 withFormat:(long long)arg2;
- (BOOL)_adjustElement:(id)arg1 usingFormatter:(long long)arg2;
- (void)clearCache;
- (id)initWithController:(id)arg1;

@end

