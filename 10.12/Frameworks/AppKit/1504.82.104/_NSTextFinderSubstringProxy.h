//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSString.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _NSTextFinderSubstringProxy : NSString
{
    id _client;
    NSMutableArray *_strings;
    NSMutableArray *_subRanges;
    NSMutableArray *_endsInBoundaryArray;
    unsigned long long _length;
}

- (struct _NSRange)_textfinder_firstMatchForRegularExpression:(id)arg1 inRange:(struct _NSRange)arg2;
- (struct _NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;
- (unsigned long long)_nextSearchBoundaryAfterOrIncluding:(BOOL)arg1 index:(unsigned long long)arg2 forward:(BOOL)arg3;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (void)_getSubstring:(id *)arg1 effectiveRange:(struct _NSRange *)arg2 searchBoundary:(char *)arg3 atCharacterIndex:(unsigned long long)arg4;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)dealloc;
- (id)initWithTextFinderClient:(id)arg1;

@end

