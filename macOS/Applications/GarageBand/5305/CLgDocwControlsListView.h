//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CLgDocwListView.h"

@class CLgListBackgroundView;

@interface CLgDocwControlsListView : CLgDocwListView
{
    CLgListBackgroundView *listBackgroundView;
}

- (void)setTextViewEnabled:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setTypingAttributes:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)forceUpdateHeaderHeight;
- (BOOL)updateHeaderHeight;
- (id)unilibEditorView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

