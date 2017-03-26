//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

#import <Foundation/NSObservable-Protocol.h>
#import <Foundation/NSObserver-Protocol.h>

@class NSCalendar, NSDate, NSNumberFormatter, NSString;

@interface NSDateComponentsFormatter : NSFormatter <NSObservable, NSObserver>
{
    struct _opaque_pthread_mutex_t _lock;
    void *_fmt;
    void *_unused;
    NSString *_fmtLocaleIdent;
    NSCalendar *_calendar;
    NSDate *_referenceDate;
    NSNumberFormatter *_unitFormatter;
    unsigned long long _allowedUnits;
    long long _formattingContext;
    long long _unitsStyle;
    unsigned long long _zeroFormattingBehavior;
    long long _maximumUnitCount;
    BOOL _allowsFractionalUnits;
    BOOL _collapsesLargestUnit;
    BOOL _includesApproximationPhrase;
    BOOL _includesTimeRemainingPhrase;
    void *_reserved;
}

+ (id)localizedStringFromDateComponents:(id)arg1 unitsStyle:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_mayDecorateAttributedStringForObjectValue:(id)arg1;
- (BOOL)getObjectValue:(out id *)arg1 forString:(id)arg2 errorDescription:(out id *)arg3;
@property(copy) NSDate *referenceDate;
@property long long formattingContext;
@property BOOL includesTimeRemainingPhrase;
@property BOOL includesApproximationPhrase;
@property unsigned long long zeroFormattingBehavior;
@property long long unitsStyle;
@property(copy) NSCalendar *calendar;
@property BOOL collapsesLargestUnit;
@property BOOL allowsFractionalUnits;
@property long long maximumUnitCount;
@property unsigned long long allowedUnits;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDateComponents:(id)arg1;
- (id)stringFromTimeInterval:(double)arg1;
- (id)_stringFromDateComponents:(id)arg1;
- (void)_ensureUnitFormatterWithLocale:(id)arg1;
- (id)stringFromDate:(id)arg1 toDate:(id)arg2;
- (id)_stringFromTimeInterval:(double)arg1;
- (id)_calendarFromDateComponents:(id)arg1;
- (id)_calendarOrCanonicalCalendar;
- (id)_canonicalizedDateComponents:(id)arg1 withCalendar:(id)arg2 usedUnits:(unsigned long long *)arg3;
- (void)_flushFormatterCache;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_NSDateComponentsFormatter_commonInit;
- (void)receiveObservedValue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

