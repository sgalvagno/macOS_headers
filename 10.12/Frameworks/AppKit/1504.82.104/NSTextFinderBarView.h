//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSButton, NSLayoutConstraint, NSMenu, NSMenuItem, NSSearchField, NSSegmentedControl, NSStackView, NSTextField;
@protocol NSFindPatternField;

@interface NSTextFinderBarView : NSView
{
    id _finder;
    id _container;
    NSSearchField<NSFindPatternField> *_searchField;
    NSTextField<NSFindPatternField> *_replaceField;
    NSButton *_doneButton;
    NSButton *_replaceCheckbox;
    NSSegmentedControl *_forwardBackButtons;
    NSSegmentedControl *_replaceAllButtons;
    NSMenu *_replaceAllMenu;
    NSMenuItem *_ignoreCaseItem;
    NSMenuItem *_wrapAroundItem;
    NSMenuItem *_containsItem;
    NSMenuItem *_startsWithItem;
    NSMenuItem *_fullWordItem;
    NSMenuItem *_patternItem;
    NSMenuItem *_patternItemSeparator;
    NSLayoutConstraint *_collapseConstraint;
    NSStackView *_findRowStackView;
    NSStackView *_replaceRowStackView;
    BOOL _replaceMode;
    BOOL _useRegularControls;
    BOOL _drawsBackground;
}

- (void)_insertFindPattern:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)performTextFinderAction:(id)arg1;
- (void)_setEnabledForward:(BOOL)arg1 back:(BOOL)arg2;
- (long long)_substringMatchType;
- (void)_setSubstringMatchType:(long long)arg1;
- (unsigned long long)_searchOptions;
- (void)_setSearchOptions:(unsigned long long)arg1;
- (id)_container;
- (void)_setTextFinder:(id)arg1;
- (id)_textFinder;
- (void)_doneButton:(id)arg1;
- (void)_toggleFindReplace:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)_replaceField;
- (id)_searchField;
- (BOOL)_drawsNothing;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)_drawsDividerLineAtBottom;
- (BOOL)_drawsOwnDividerLine;
- (void)_setReplaceMode:(BOOL)arg1;
- (id)_contentView;
- (void)_updateLayout;
- (void)_updateReplaceUIVisibility;
- (void)_layoutBarSubviews;
- (void)_resizeIfNecessary;
- (double)_requiredHeight;
- (id)_nextKeyView;
- (id)_actionResponderFromView:(id)arg1;
- (void)_updateNextKeyViews;
- (void)_finishedMakingConnections;
- (void)dealloc;

@end

