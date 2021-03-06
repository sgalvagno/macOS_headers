//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSLayoutManager.h"

@class NSTextView;

@interface ICBaseLayoutManager : NSLayoutManager
{
    NSTextView *_textView;
}

+ (id)defaultLinkTextAttributes;
- (void).cxx_destruct;
@property(nonatomic) __weak NSTextView *textView; // @synthesize textView=_textView;
- (double)bulletYOffsetForCharacterAtIndex:(unsigned long long)arg1;
- (void)drawBulletsForListRange:(struct _NSRange)arg1 paragraphStyle:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)drawListStylesForCharacterRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (id)textContainer;
- (id)textController;

@end

