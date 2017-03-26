//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSFormatter.h>

@class NSString;

@interface MMPhoneNumberFormatter : NSFormatter
{
    NSString *_countryCode;
}

+ (id)availableCountryCodes;
+ (id)countryCodesFromPlist;
+ (id)defaultCountryCode;
@property(copy) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2;
- (BOOL)isPartialStringValid:(id *)arg1 proposedSelectedRange:(struct _NSRange *)arg2 originalString:(id)arg3 originalSelectedRange:(struct _NSRange)arg4 errorDescription:(id *)arg5;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 errorDescription:(id *)arg3;
- (id)stringForObjectValue:(id)arg1 withObfuscations:(BOOL)arg2 obfuscatedLength:(long long)arg3;
- (id)stringForObjectValue:(id)arg1;
- (BOOL)isPhoneNumberValid:(id)arg1 withPreFix:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

