//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class CPKSearchField, NSButton;

__attribute__((visibility("hidden")))
@interface CPKMatrixSearchView : NSView
{
    CPKSearchField *_searchField;
    NSButton *_showCVButton;
}

@property(readonly) NSButton *showCVButton; // @synthesize showCVButton=_showCVButton;
@property(readonly) CPKSearchField *searchField; // @synthesize searchField=_searchField;
- (void)viewDidMoveToWindow;
- (void)setCVButtonVisible:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 hasCVButton:(BOOL)arg2 emojiBarState:(id)arg3;

@end

