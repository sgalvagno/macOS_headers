//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

@class CPKEmojiIMViewController, CPKSearchFieldPopoverTouchBarItem, NSDictionary;

__attribute__((visibility("hidden")))
@interface CPKSearchField : NSSearchField
{
    CPKSearchField *_altSearchField;
    BOOL _alreadyFocused;
    NSDictionary *_emojiBatState;
    CPKEmojiIMViewController *_emojiBarController;
    CPKSearchFieldPopoverTouchBarItem *_popoverItem;
}

+ (Class)cellClass;
@property(retain) CPKSearchFieldPopoverTouchBarItem *popoverItem; // @synthesize popoverItem=_popoverItem;
@property CPKEmojiIMViewController *emojiBarController; // @synthesize emojiBarController=_emojiBarController;
@property(retain) NSDictionary *emojiBatState; // @synthesize emojiBatState=_emojiBatState;
@property(retain) CPKSearchField *altSearchField; // @synthesize altSearchField=_altSearchField;
- (BOOL)becomeFirstResponder;
- (void)setStringValue:(id)arg1;
- (void)characterPickerPopoverDidClosed;
- (void)notifySearchResults:(id)arg1;
- (void)dealloc;
- (void)dismissEmojiIMViewController:(id)arg1;
- (void)searchButtonClickedOnEmojiIMViewController:(id)arg1;
- (void)emojiIMViewController:(id)arg1 characterSelected:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 emojiBarState:(id)arg2;

@end

