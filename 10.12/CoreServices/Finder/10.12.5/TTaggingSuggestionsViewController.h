//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TTableViewController.h"

@class TTaggingTokenField;

@interface TTaggingSuggestionsViewController : TTableViewController
{
    TTaggingTokenField *_tokenField;
    _Bool _showingAll;
    _Bool _needShowAll;
    struct TString _previousTypedPartOfMatchingName;
    _Bool _fadeScrolledRows;
    struct TNSRef<NSImage *, void> _topClipViewMaskImage;
    struct TNSRef<NSImage *, void> _bottomClipViewMaskImage;
    struct TNSRef<NSImage *, void> _topAndBottomClipViewMaskImage;
    double _lastIndexSelected;
    double _lastScrollOffset;
    struct TNotificationCenterObserver _tagRegistryChangedObserver;
    struct TNotificationCenterObserver _generateNewTagCompletionsObserver;
    struct TNotificationCenterObserver _suggestionsWillShowObserver;
    struct TNotificationCenterObserver _clipViewFrameChangedObserver;
    struct TNotificationCenterObserver _clipViewBoundsChangedObserver;
    struct TNotificationCenterObserver _showAllIsSelectedObserver;
}

@property _Bool fadeScrolledRows; // @synthesize fadeScrolledRows=_fadeScrolledRows;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clipViewBoundsOrFrameChanged;
- (void)configureClipViewMask;
- (void)updateSize;
- (void)tableViewSelectionDidChange:(id)arg1;
- (void)doCustomSelectionIfNeeded;
- (double)desiredListHeight;
- (long long)numberOfRowsWhenShowingAll;
- (long long)numberOfTopTagsToSuggest;
- (_Bool)showSuggestionsForString:(const struct TString *)arg1;
- (void)showAll:(id)arg1;
- (id)sortByNameDescriptor;
- (id)sortBySidebarIndexDescriptor;
- (id)tokenizedTagsListedInField;
- (long long)indexOfNontokenizedObject;
- (id)tokenizedTagPriorToNonTokenized;
- (long long)indexBeforeNontokenizedObject;
- (void)moveToPreviousOrNextSuggestion:(_Bool)arg1;
- (void)sendArrowKeyToTable:(unsigned short)arg1;
- (void)insertSuggestionAndSelectUntypedPortionForString:(const struct TString *)arg1;
- (void)generateNewTagCompletionsForString:(const struct TString *)arg1;
- (void)generateNewTagCompletions:(id)arg1;
- (void)singleClickAction:(id)arg1;
- (id)textView;
- (id)tableView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (void)setTaggingTokenField:(id)arg1;
- (void)tearDownClipViewMask;
- (void)aboutToTearDown;
- (id)suggestionsDataSource;
- (void)viewLoaded;

@end

