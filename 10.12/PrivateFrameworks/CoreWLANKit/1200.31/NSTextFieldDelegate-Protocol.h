//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreWLANKit/NSControlTextEditingDelegate-Protocol.h>

@class NSArray, NSTextField, NSTextView;

@protocol NSTextFieldDelegate <NSControlTextEditingDelegate>

@optional
- (BOOL)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 shouldSelectCandidateAtIndex:(unsigned long long)arg3;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidates:(NSArray *)arg3 forSelectedRange:(struct _NSRange)arg4;
- (NSArray *)textField:(NSTextField *)arg1 textView:(NSTextView *)arg2 candidatesForSelectedRange:(struct _NSRange)arg3;
@end

