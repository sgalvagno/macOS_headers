//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTextField.h>

@class IndicatorImageView;

@interface IndicatorTextField : NSTextField
{
    BOOL mShowIndicator;
    IndicatorImageView *mIdicatorImageView;
    NSTextField *mNoteField;
}

+ (id)_indicatorImage;
- (void)setNoteField:(id)arg1;
- (id)noteField;
- (void)setShowIndicator:(BOOL)arg1 noteString:(id)arg2;
- (void)setShowIndicator:(BOOL)arg1;
- (BOOL)isShowingIndicator;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (void)awakeFromNib;

@end

