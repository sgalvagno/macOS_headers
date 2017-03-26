//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DataDetectorsCore/NSCoding-Protocol.h>
#import <DataDetectorsCore/NSSecureCoding-Protocol.h>

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding>
{
    struct __DDResult *_coreResult;
    NSArray *_subResultsCache;
}

+ (id)scannerResultFromXML:(id)arg1 stringToScan:(id)arg2;
+ (id)scannerResultFromXML:(id)arg1;
+ (id)verboseXMLDescriptionFromElements:(id)arg1 stringToScan:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (id)resultsFromCoreResults:(struct __CFArray *)arg1;
+ (id)resultFromCoreResult:(struct __DDResult *)arg1;
- (void)offsetRangeBy:(long long)arg1;
- (id)XMLDescription;
- (id)detailedDescription;
- (id)verboseElement;
- (id)elementWithQuery:(struct __DDScanQuery *)arg1 include:(int)arg2;
- (void)_addText:(id)arg1 currentPos:(struct __DDQueryOffset)arg2 newPos:(struct __DDQueryOffset)arg3 offset:(struct __DDQueryOffset)arg4 query:(struct __DDScanQuery *)arg5;
- (id)element;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getStreet:(id *)arg1 city:(id *)arg2 state:(id *)arg3 zip:(id *)arg4 country:(id *)arg5;
- (BOOL)getIMScreenNameValue:(id *)arg1 type:(id *)arg2;
- (BOOL)getMailValue:(id *)arg1 label:(id *)arg2;
- (BOOL)getPhoneValue:(id *)arg1 label:(id *)arg2;
- (BOOL)extractStartDate:(id *)arg1 startTimezone:(id *)arg2 endDate:(id *)arg3 endTimezone:(id *)arg4 allDayRef:(char *)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7;
- (id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id *)arg3 allDayRef:(char *)arg4;
- (double)getDuration;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setSubResults:(id)arg1;
- (id)subResults;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)matchedString;
- (id)contextualData;
- (id)location;
- (id)rawValue;
- (id)value;
- (void)setType:(id)arg1;
- (id)type;
- (long long)score;
- (CDStruct_912cb5d2)cfRange;
@property struct _NSRange range;
- (struct __DDResult *)coreResult;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoreResult:(struct __DDResult *)arg1;
- (id)init;

@end

