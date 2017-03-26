//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTFuzzyIndex, NSMetaphone;

@interface NSSpanMatcher : NSObject
{
    CTFuzzyIndex *_index;
    NSMetaphone *_meta;
    int _editDistance;
    int _ignoredWordLength;
    int _ignoredWordLengthForEditDistance;
    unsigned long long _options;
    long long _wordsMatched;
}

@property long long wordsMatched; // @synthesize wordsMatched=_wordsMatched;
@property unsigned long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (id)query:(id)arg1;
- (void)index:(id)arg1 withData:(id)arg2;
- (int)getMode;
- (void)setMode:(int)arg1;
- (id)initWithPath:(id)arg1 options:(unsigned long long)arg2;

@end

