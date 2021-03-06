//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTextField;

__attribute__((visibility("hidden")))
@interface NVTrackingCellView : NSTableCellView
{
    NSButton *hoverButton;
    NSTextField *editableField;
    NSTextField *subtitleField;
    BOOL buttonOnRollover;
    BOOL buttonEnabled;
}

@property(nonatomic) __weak NSTextField *subtitleField; // @synthesize subtitleField;
@property(nonatomic) BOOL buttonEnabled; // @synthesize buttonEnabled;
@property(nonatomic) BOOL buttonOnRollover; // @synthesize buttonOnRollover;
@property(retain, nonatomic) NSTextField *editableField; // @synthesize editableField;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)showButton:(BOOL)arg1;
- (void)showButton:(BOOL)arg1 immediately:(BOOL)arg2;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setObjectValue:(id)arg1;
- (void)adjustConstraint:(BOOL)arg1;
- (id)observedKey;
- (BOOL)useBookmarkSubtitle;
- (void)awakeFromNib;

@end

