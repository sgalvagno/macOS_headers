//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/_NSTextFinderImpl.h>

#import <AppKit/NSSearchFieldDelegate-Protocol.h>

@class NSResponder, NSString, NSTextFinderBarView;

__attribute__((visibility("hidden")))
@interface _NSBarTextFinder : _NSTextFinderImpl <NSSearchFieldDelegate>
{
    NSTextFinderBarView *_view;
    NSString *_replacementString;
    BOOL _clientRespondsToReplace;
    BOOL _clientRespondsToReplaceAll;
    BOOL _divergedFromPasteboard;
    BOOL _preventResetSettingsOnDivergeFromPasteboard;
    BOOL _nextSearchFieldActionIsReturn;
    NSResponder *_originalResponder;
}

- (id)_replaceField;
- (id)_findField;
- (void)_findPatternSelected:(id)arg1;
- (void)addStringToRecentReplaceStrings:(id)arg1;
- (void)addStringToRecentSearchStrings:(id)arg1;
- (void)handleResult:(long long)arg1 forAction:(long long)arg2;
- (void)_didFindMatchInRange:(struct _NSRange)arg1 wrapped:(BOOL)arg2 forward:(BOOL)arg3;
- (void)_performFindBarAction:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)takeSearchString:(CDUnknownBlockType)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)_searchFieldAction:(id)arg1;
- (void)_divergeFromPasteboard;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_findBarWindowDidBecomeKey:(id)arg1;
- (void)hideReplace;
- (void)showReplace;
- (void)deactivate;
- (void)activate;
- (void)_activateWithReplace:(BOOL)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)_changeSearchOptions:(id)arg1;
- (void)_changeMatchSettings:(id)arg1;
- (long long)substringMatchType;
- (void)setSubstringMatchType:(long long)arg1;
- (unsigned long long)searchOptions;
- (void)setSearchOptions:(unsigned long long)arg1;
- (void)_setMatchCount:(long long)arg1;
- (id)_statusStringForMatchCount:(long long)arg1;
- (void)_newSearchForString:(id)arg1 showFirstMatch:(BOOL)arg2;
- (void)_setReplacementCount:(long long)arg1;
- (void)_updateForwardBackButtons;
- (void)setSearchString:(id)arg1;
- (id)searchString;
- (id)replacementString;
- (id)_replacementString;
- (long long)style;
- (BOOL)isVisible;
- (void)_clearAllMatches;
- (BOOL)_needToRefreshFromPasteboard;
- (void)appDidActivate:(id)arg1;
- (void)_findBarViewWillMoveToWindow:(id)arg1;
- (void)_setView:(id)arg1;
- (void)_registerObserversForWindow:(id)arg1;
- (void)_unregisterObserversForWindow:(id)arg1;
- (id)_view;
- (void)_setFinder:(id)arg1;
- (void)_loadUI;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

