//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <iLifeKit/IPKTokenField.h>

@class NSTextField;

@interface IWKeywordsTokenField : IPKTokenField
{
    NSTextField *mPhotoKeywordsPlaceholder;
}

- (void)awakeFromNib;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_setupFont;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)mouseDown:(id)arg1;
- (void)dealloc;

@end

