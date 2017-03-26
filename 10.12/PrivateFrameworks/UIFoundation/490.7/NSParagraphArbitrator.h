//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString;

@interface NSParagraphArbitrator : NSObject
{
    NSAttributedString *_attributedString;
    CDUnknownBlockType _lineWidth;
    CDUnknownBlockType _validateLineBreakContext;
    unsigned long long _lineBreakStrategy;
    double _hyphenationFactor;
    long long _typesetterBehavior;
    struct _NSRange _paragraphRange;
}

+ (id)paragraphArbitratorWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
@property long long typesetterBehavior; // @synthesize typesetterBehavior=_typesetterBehavior;
@property double hyphenationFactor; // @synthesize hyphenationFactor=_hyphenationFactor;
@property unsigned long long lineBreakStrategy; // @synthesize lineBreakStrategy=_lineBreakStrategy;
@property(copy) CDUnknownBlockType validateLineBreakContext; // @synthesize validateLineBreakContext=_validateLineBreakContext;
@property(copy) CDUnknownBlockType lineWidth; // @synthesize lineWidth=_lineWidth;
@property struct _NSRange paragraphRange; // @synthesize paragraphRange=_paragraphRange;
@property(retain) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
- (unsigned long long)adjustedLineBreakIndexForProposedIndex:(unsigned long long)arg1;
- (CDStruct_a5183674)lineBreakContextBeforeIndex:(unsigned long long)arg1 lineFragmentWidth:(double)arg2 range:(struct _NSRange)arg3;
- (void)reset;
- (void)dealloc;
- (id)init;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;

@end

