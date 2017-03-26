//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextStorage.h>

#import <AddressBook/NSCopying-Protocol.h>
#import <AddressBook/NSMutableCopying-Protocol.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface ABTextStorage : NSTextStorage <NSCopying, NSMutableCopying>
{
    NSMutableAttributedString *_cm_string;
    BOOL _customAttributeFixing;
}

+ (id)noteSecondLineParagraphStyle;
+ (id)noteFirstLineParagraphStyle;
+ (id)secondLineParagraphStyle;
+ (id)firstLineParagraphStyle;
+ (void)invalidateParagraphStyles;
+ (unsigned long long)maxLabelStringWidth;
- (struct _NSRange)findPopupForField:(id)arg1 excludingRange:(struct _NSRange)arg2;
- (struct _NSRange)findAttachement:(id)arg1;
- (void)fixNotesRulersInRange:(struct _NSRange)arg1;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)fixAddressRulersInRange:(struct _NSRange)arg1;
- (void)fixAttributesInRange:(struct _NSRange)arg1;
- (BOOL)enableCustomAttributeFixing;
- (void)setEnableCustomAttributeFixing:(BOOL)arg1;
- (BOOL)fixesAttributesLazily;
- (struct _NSRange)findAttributeNamed:(id)arg1 value:(id)arg2;
- (struct _NSRange)findPreviousOccuranceOfAttributeNamed:(id)arg1 startingRange:(struct _NSRange)arg2;
- (struct _NSRange)findNextOccuranceOfAttributeNamed:(id)arg1 startingRange:(struct _NSRange)arg2;
- (id)string;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)_setAttributedString:(id)arg1;

@end

