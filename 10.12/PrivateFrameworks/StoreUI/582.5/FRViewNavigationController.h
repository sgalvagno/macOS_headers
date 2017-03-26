//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <StoreUI/FRContentViewController.h>

#import <StoreUI/FRToolbarManagerDelegate-Protocol.h>

@class FRToolbarManager, FRWindowBackgroundView, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FRViewNavigationController : FRContentViewController <FRToolbarManagerDelegate>
{
    FRWindowBackgroundView *_backgroundView;
    FRToolbarManager *_toolbarManager;
    FRContentViewController *_currentContentViewController;
    NSMutableArray *_contentViewControllers;
    NSArray *_bagToolbarItems;
    NSMutableDictionary *_redirectedURLs;
}

@property(retain, nonatomic) NSMutableDictionary *redirectedURLs; // @synthesize redirectedURLs=_redirectedURLs;
@property(retain, nonatomic) NSArray *bagToolbarItems; // @synthesize bagToolbarItems=_bagToolbarItems;
@property(retain, nonatomic) NSMutableArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(retain, nonatomic) FRContentViewController *currentContentViewController; // @synthesize currentContentViewController=_currentContentViewController;
@property(retain, nonatomic) FRToolbarManager *toolbarManager; // @synthesize toolbarManager=_toolbarManager;
@property(readonly, nonatomic) FRWindowBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)removeSearchSuggester:(id)arg1;
- (void)addSearchSuggester:(id)arg1;
- (void)toolbarManager:(id)arg1 enteredSearchString:(id)arg2;
- (void)toolbarManager:(id)arg1 selectedItem:(id)arg2;
- (void)toolbarManagerReloadedPage:(id)arg1;
- (void)toolbarManagerNavigatedForward:(id)arg1;
- (void)toolbarManagerNavigatedBack:(id)arg1;
- (void)goBack;
- (void)goForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)clearHistory;
- (void)reload;
- (id)_toolbarIdentifierForURL:(id)arg1;
- (id)_comparisonDictionaryFromURL:(id)arg1;
- (void)contentViewController:(id)arg1 searchedForString:(id)arg2;
- (void)contentViewController:(id)arg1 finishedLoadingURL:(id)arg2 success:(BOOL)arg3;
- (void)contentViewController:(id)arg1 url:(id)arg2 redirectedToURL:(id)arg3;
- (void)contentViewController:(id)arg1 cancelledLoadingURL:(id)arg2;
- (void)contentViewController:(id)arg1 startedLoadingURL:(id)arg2;
- (BOOL)loadURL:(id)arg1 referrer:(id)arg2;
- (BOOL)canLoadURL:(id)arg1;
- (void)_updateTopContentInset;
- (void)windowDidChangeFullScreen:(id)arg1;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)loadView;
- (void)removeContentViewController:(id)arg1;
- (void)addContentViewController:(id)arg1;
- (id)makeTouchBar;
- (void)dealloc;
- (id)initWithToolbarItems:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSArray *toolbarItems;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

