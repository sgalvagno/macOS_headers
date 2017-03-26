//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSULocale;

__attribute__((visibility("hidden")))
@interface OITSUDateParser : NSObject
{
    NSMutableArray *mFormatCategories;
    OITSULocale *mLocale;
    BOOL mIsJapaneseLocale;
    struct __CFDateFormatter *mSpecialCaseFormatter;
}

- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 successfulFormatString:(const struct __CFString **)arg2;
- (struct __CFDate *)newDateFromString:(struct __CFString *)arg1 preferredFormatString:(struct __CFString *)arg2 successfulFormatString:(const struct __CFString **)arg3 tryAggressiveFormats:(BOOL)arg4;
- (struct __CFDate *)newDateFromStringTryingFormats:(struct __CFString *)arg1 locale:(struct __CFLocale *)arg2 formats:(id)arg3 outSuccessfulFormatString:(const struct __CFString **)arg4;
- (struct __CFDateFormatter *)specialCaseDateFormatterForLocale:(struct __CFLocale *)arg1;
- (void)dealloc;
- (id)formatStringsDictionary;
- (id)initWithLocale:(id)arg1;
- (void)parseFormat:(id)arg1 initialPattern:(id *)arg2 separator:(unsigned short *)arg3;
- (void)addFormat:(id)arg1 locale:(struct __CFLocale *)arg2 formatCategoryMap:(id)arg3;

@end

