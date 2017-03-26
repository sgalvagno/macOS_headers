//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSearchField.h>

#import <Suggestions/NSTableViewDataSource-Protocol.h>
#import <Suggestions/NSTableViewDelegate-Protocol.h>
#import <Suggestions/SGTInputDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, SGTQueryGenius, SGTSearchFieldReserved, SGTSuggestion;
@protocol SGTSearchFieldQueryScopeDelegate;

@interface SGTSearchField : NSSearchField <SGTInputDelegate, NSTableViewDataSource, NSTableViewDelegate>
{
    SGTSearchFieldReserved *_sgtReserved;
}

+ (id)unsafeBoldCharacterSet;
+ (id)keyPathsForValuesAffectingPropertyListRepresentation;
+ (id)keyPathsForValuesAffectingSearchPhrase;
+ (id)keyPathsForValuesAffectingQueryString;
+ (id)keyPathsForValuesAffectingCurrentSuggestion;
+ (id)keyPathsForValuesAffectingCurrentSuggestions;
+ (Class)completionTableViewClass;
+ (Class)completionWindowClass;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingPropertyListRepresentationDescription;
+ (id)keyPathsForValuesAffectingSuggestionDebugProperties;
- (void)textDidEndEditing:(id)arg1;
- (BOOL)becomeFirstResponder;
- (void)_showOrHideDebugWindow;
- (void)_debugWindowWillDismiss;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)_accessibilityCompletionMenu;
@property(readonly) NSString *searchPhrase;
@property(readonly) NSArray *queryScopes;
@property(readonly) NSString *queryString;
- (void)_toggleSuggestionsWindow:(id)arg1;
- (void)_cycleScopesForSuggestion:(id)arg1;
- (void)_changeScope:(id)arg1;
- (void)_setScope:(long long)arg1 toSuggestion:(id)arg2;
- (void)_performSuggesterAction:(SEL)arg1;
- (id)_displayNameForAction:(SEL)arg1;
- (void)inputDidFinish:(id)arg1;
- (void)input:(id)arg1 didFindSuggestions:(id)arg2;
- (void)_appendSuggestions:(id)arg1;
- (BOOL)searchFieldCell:(id)arg1 shouldChangeCancelButtonVisibility:(BOOL)arg2;
- (void)completionTableView:(id)arg1 mouseUpInRow:(long long)arg2 event:(id)arg3;
- (void)tableViewSelectionIsChanging:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)completionTableView:(id)arg1 rowIsSeparator:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)highlightedString:(id)arg1 atIndexes:(id)arg2 selected:(BOOL)arg3;
- (id)tableView:(id)arg1 stringValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (BOOL)textShouldEndEditing:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRanges:(id)arg2 replacementStrings:(id)arg3;
- (void)_handleStoredSelectionsEventsIfPossible;
- (void)_handleSelectionEvent:(id)arg1;
- (void)_storeSelectionEvent:(id)arg1;
- (void)_invalidateSelectionEventCache;
- (BOOL)textView:(id)arg1 doCommandBySelector:(SEL)arg2;
- (void)_selectAllUntokenizedTextInTextView:(id)arg1;
- (void)_validateSuggestion:(id)arg1 tokenizeRaw:(BOOL)arg2;
- (void)_validateText;
- (void)_didValidateStringWithSuggestion:(id)arg1 clearCurrentSuggestion:(BOOL)arg2;
- (void)_updateCompletionWindowImmediately:(BOOL)arg1;
- (void)_updateCompletionWindow;
- (void)_updateCompletionWindowFrame;
- (void)_cancelScheduledOperations;
- (void)_autocloseFire:(id)arg1;
- (void)_scheduleAutoclose;
- (void)_cancelAutoclose;
@property(readonly) BOOL autoclosing;
- (void)_scheduleCloseCompletionWindowNoAbort;
- (void)_closeCompletionWindowNoAbort;
- (void)_closeCompletionWindow;
- (void)_closeCompletionWindowAbort:(BOOL)arg1;
- (void)_resetPopupMenuDataSource;
- (void)_openCompletionWindowImmediately:(BOOL)arg1;
- (void)_openCompletionWindowAndUpdate:(BOOL)arg1;
- (void)_autoselectFirstSuggestionForce:(BOOL)arg1;
- (BOOL)_shouldAutoSelectFirstBasedOnTypingScope;
- (void)_autoselectGroupSuggestionDirection:(BOOL)arg1;
- (void)_openCompletionWindow;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_updateCompletionSuggestion;
- (void)_updateSelectedSuggestion;
- (id)_highlightedSuggestionAndAction:(SEL *)arg1 category:(id *)arg2 useFirstSuggestionIfNecessary:(BOOL)arg3;
- (void)_abortSuggesters;
- (void)_launchSuggestionsWithInput:(id)arg1 readyBlock:(CDUnknownBlockType)arg2;
- (void)_stopObservingApplicationState;
- (void)_startObservingApplicationState;
- (void)_anotherMenuWentUp:(id)arg1;
- (void)_prepareToUpdateSuggestions;
- (void)_clearResults;
- (void)_updateDisplayedSuggestionsWithStatic:(BOOL)arg1;
@property(copy) NSMapTable *displaySuggestionsByCategory;
@property(copy) NSArray *displayCategories;
- (id)_suggestionAtRow:(long long)arg1 category:(id *)arg2 action:(SEL *)arg3;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (void)textDidChange:(id)arg1;
- (id)updateFreeTextSuggestionsSuggestionRange:(struct _NSRange *)arg1;
- (void)_fixUpSuggestionFromTokens;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)_repostDidChangeNotification:(id)arg1;
- (id)_addSuggestion:(id)arg1;
- (void)_stopObservingSuggestion:(id)arg1;
- (void)_startObservingSuggestion:(id)arg1;
@property(retain) SGTSuggestion *currentSuggestion;
- (void)_setCurrentSuggestion:(id)arg1;
@property(retain) NSArray *freeTextSuggestions;
- (void)addSuggestion:(id)arg1;
- (void)_setupWidenQueryScopeMenuWithItemWithSpinner:(BOOL)arg1;
- (void)_searchDelegateFinished:(long long)arg1 hasResults:(BOOL)arg2;
- (void)_searchDelegatePerformFinishAction:(long long)arg1 hasResults:(BOOL)arg2;
- (void)_searchDelegatePerformFinishAction;
- (id)textView:(id)arg1 completions:(id)arg2 forPartialWordRange:(struct _NSRange)arg3 indexOfSelectedItem:(long long *)arg4;
- (void)_requestDelegateToWidenQueryScope;
@property(copy) id propertyListRepresentation;
- (BOOL)interactingWithButton;
- (void)setInteractingWithButton:(BOOL)arg1;
@property(readonly) NSArray *currentSuggestions;
- (BOOL)hasStaticSuggestions;
@property(readonly) NSArray *suggestions;
@property(retain) SGTQueryGenius *genius;
@property long long typingScope;
@property BOOL emptyStringAbortsSearch;
@property unsigned long long maximumEffectiveInputLength;
@property BOOL useTokens;
@property(copy) NSArray *suggesters;
@property BOOL highlightsMatches;
@property BOOL ignoreWindowResizeNotifications;
@property(readonly) BOOL queryStringChangesAreTransient;
@property BOOL enforceSelectionWhenPossible;
@property(nonatomic) BOOL keepCompletionWindowOnWindowDrag;
@property(nonatomic) double minimumCompletionWindowWidth;
- (long long)_fallbackScope;
- (id)_sgtEditor;
- (id)_searchFieldCell;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)makeTouchBar;
- (void)switchSuggestionScopesFromRecipientToSender;
- (void)switchSuggestionScopesFromSenderToRecipient;
@property id <SGTSearchFieldQueryScopeDelegate> queryScopeDelegate;
- (void)_setDidFindSuggestionsCallback:(CDUnknownBlockType)arg1;
- (void)_simulateUserTextInput:(id)arg1;
@property(readonly) NSString *propertyListRepresentationDescription;
@property(readonly) NSArray *suggestionDebugProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

