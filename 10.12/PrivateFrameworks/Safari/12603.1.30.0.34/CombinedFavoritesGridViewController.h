//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/GridCellViewDelegate-Protocol.h>
#import <Safari/GridViewDataSource-Protocol.h>
#import <Safari/GridViewDelegate-Protocol.h>
#import <Safari/StartPageContentViewController-Protocol.h>

@class BookmarkAddressEditingPopoverViewController, FlippedStackView, GridView, NSArray, NSButton, NSLayoutConstraint, NSMapTable, NSScrollView, NSString, NSView, StartPageViewController, WebBookmarkList;

__attribute__((visibility("hidden")))
@interface CombinedFavoritesGridViewController : NSViewController <GridCellViewDelegate, GridViewDataSource, GridViewDelegate, StartPageContentViewController>
{
    WebBookmarkList *_displayedBookmarkFolder;
    NSString *_displayedBookmarksFolderUUID;
    NSArray *_displayedFavorites;
    BookmarkAddressEditingPopoverViewController *_addressEditingController;
    double _widthAtLastPreferredHeightComputation;
    double _lastPreferredHeight;
    NSLayoutConstraint *_contentToRootViewPercentConstraint;
    NSArray *_backButtonToTitleViewConstraints;
    float _defaultFavoritesGridHeightPriority;
    unsigned long long _draggedFavoriteIndex;
    unsigned long long _indexOfFavoriteCompletingDrag;
    unsigned long long _draggedFrequentSiteIndex;
    NSString *_originallyDisplayedBookmarksFolderUUIDDuringDrag;
    NSMapTable *_favoritesCellsToMetadataTokens;
    NSMapTable *_frequentSitesCellsMetadataTokens;
    long long _suppressUIUpdatesFromFavoritesChangeNotificationsCount;
    long long _suppressUIUpdatesFromFrequentlyVisitedSitesChangeNotificationsCount;
    BOOL _favoritesReloadPending;
    BOOL _frequentlyVisitedSitesReloadPending;
    struct NSEdgeInsets _savedScrollViewContentInsets;
    NSLayoutConstraint *_backButtonTopConstraint;
    NSLayoutConstraint *_documentViewMinHeightConstraint;
    BOOL _isObservingScrollViewContentInsetsChanges;
    int _presentationMode;
    StartPageViewController *_startPageViewController;
    NSView *_externalCenteringView;
    NSScrollView *_scrollView;
    NSView *_documentView;
    FlippedStackView *_gridContainer;
    GridView *_favoritesGridView;
    GridView *_frequentSitesGridView;
    NSButton *_backButton;
    NSLayoutConstraint *_gridContainerMinimumWidthConstraint;
    NSLayoutConstraint *_gridContainerMaximumWidthConstraint;
}

+ (id)defaultPageTitle;
@property(retain, nonatomic) NSLayoutConstraint *gridContainerMaximumWidthConstraint; // @synthesize gridContainerMaximumWidthConstraint=_gridContainerMaximumWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *gridContainerMinimumWidthConstraint; // @synthesize gridContainerMinimumWidthConstraint=_gridContainerMinimumWidthConstraint;
@property(nonatomic) __weak NSButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak GridView *frequentSitesGridView; // @synthesize frequentSitesGridView=_frequentSitesGridView;
@property(nonatomic) __weak GridView *favoritesGridView; // @synthesize favoritesGridView=_favoritesGridView;
@property(nonatomic) __weak FlippedStackView *gridContainer; // @synthesize gridContainer=_gridContainer;
@property(nonatomic) __weak NSView *documentView; // @synthesize documentView=_documentView;
@property(nonatomic) __weak NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) NSView *externalCenteringView; // @synthesize externalCenteringView=_externalCenteringView;
@property(nonatomic) __weak StartPageViewController *startPageViewController; // @synthesize startPageViewController=_startPageViewController;
- (void).cxx_destruct;
- (void)test_openBookmark:(id)arg1;
- (id)test_favoritesGridView;
- (BOOL)_isShowingOriginalFolderFromStartOfDraggingSession;
- (BOOL)_resetToRootFolder;
- (void)_replaceTabsWithContentsOfFolder:(id)arg1;
- (void)_openContentsOfFolderInNewTabs:(id)arg1;
- (void)_openFolder:(id)arg1;
- (void)_openFolderWithUUID:(id)arg1;
- (void)_userDefaultsDidChange:(id)arg1;
- (void)_frequentSitesDidChange:(id)arg1;
- (void)_favoritesDidChange:(id)arg1;
- (void)_suppressUIUpdatesFromFrequentlyVisitedSitesChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (void)_suppressUIUpdatesFromFavoritesChangeNotificationsInBlock:(CDUnknownBlockType)arg1;
- (BOOL)_shouldUpdateUIForFrequentlyVisitedSitesChange;
- (BOOL)_shouldUpdateUIForFavoritesChange;
- (unsigned long long)_dragOperationForDrop:(id)arg1 intoGridView:(id)arg2;
- (void)_popDisappearingItemCursorIfNeeded;
- (BOOL)_screenPointIsOverDeleteSafeZone:(struct CGPoint)arg1;
- (BOOL)_currentEventIsOnGridView:(id)arg1;
- (unsigned long long)_dropIndexForProposedFavoriteGridDropIndex:(unsigned long long)arg1;
- (unsigned long long)_draggedFavoriteIndex;
- (unsigned long long)_internalIndexOfDraggedFavorite;
- (unsigned long long)_bookmarkInsertionIndexForGridViewDropIndex:(unsigned long long)arg1;
- (id)_bookmarksUndoController;
- (void)_registerStandardDraggedTypesForView:(id)arg1;
- (void)_cancelPendingFrequentlyVisitedSitesMetadataRequests;
- (void)_reloadFrequentlyVisitedSitesViewIfVisible;
- (void)_reloadFrequentlyVisitedSites;
- (void)_reloadFrequentlyVisitedSitesSoon;
- (BOOL)_updateFrequentlyVisitedSiteVisibility;
- (BOOL)_shouldHideFrequentlyVisitedSites;
- (struct TopSite *)_draggedFrequentSite;
- (struct TopSite *)_frequentSiteAtIndex:(unsigned long long)arg1;
- (void)_instrumentUserDidActivateFavoritesGridBookmark:(id)arg1 viaContextMenu:(BOOL)arg2;
- (void)_updateBackButtonVisibility;
- (void)_updateFavoritesTitle;
- (BOOL)_shouldShowFavoritesTitle;
- (void)_cancelPendingFavoritesMetadataRequests;
- (void)_reloadFavorites;
- (void)_reloadFavoritesSoon;
- (id)_bookmarkFolderForUUID:(id)arg1;
- (id)_bookmarkAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexOfBookmark:(id)arg1;
- (void)_invalidateCachedDisplayedFavorites;
- (id)_displayedFavorites;
- (BOOL)_isShowingRootFolder;
- (void)_stopObservingScrollViewContentInsetsChangesIfNeeded;
- (void)_updatePresentationModeAttributes;
- (id)_enqueuedSiteMetadataRequestForCellView:(id)arg1 url:(id)arg2 orBookmark:(id)arg3;
- (BOOL)_isToken:(id)arg1 validForCellView:(id)arg2;
- (void)_updateGridContainerMaxWidthConstraint;
- (void)_updateWidthRatioConstraint;
- (void)_updateLayoutStyleAttributes;
- (void)_invalidateCachedPreferredHeight;
- (void)_removeBookmark:(id)arg1;
- (void)_openBookmark:(id)arg1;
- (struct TabPlacementHint)_tabPlacementHint;
- (void)_endEditingInFavoritesGridView;
- (void)gridView:(id)arg1 willDragCellAtIndex:(unsigned long long)arg2;
- (void)_beginEditingAddressOfBookmark:(id)arg1;
- (void)_beginRenamingBookmark:(id)arg1;
- (id)_contextMenuBuilderForBookmark:(id)arg1 topSite:(struct TopSite *)arg2;
- (id)_contextMenuBuilderForCellView:(id)arg1;
- (void)_addToggleFrequentlyVisitedSitesVisibilityMenuItemToMenu:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)gridCellViewDidTriggerImmediateAction:(id)arg1;
- (id)gridCellView:(id)arg1 menuForEvent:(id)arg2;
- (void)gridCellViewDidEndEditing:(id)arg1;
- (void)gridView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2;
- (BOOL)gridView:(id)arg1 performHoverOnCellAtIndex:(unsigned long long)arg2;
- (BOOL)gridView:(id)arg1 acceptDrop:(id)arg2 onCellAtIndex:(unsigned long long)arg3;
- (unsigned long long)gridView:(id)arg1 dragOverBehaviorsForCellAtIndex:(unsigned long long)arg2;
- (void)gridView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 proposedOperation:(unsigned long long *)arg4;
- (void)gridView:(id)arg1 draggingSession:(id)arg2 movedToPoint:(struct CGPoint)arg3;
- (void)gridView:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (id)gridView:(id)arg1 pasteboardWriterForCellAtIndex:(unsigned long long)arg2;
- (id)draggingItemClassesForGridView:(id)arg1;
- (BOOL)gridView:(id)arg1 acceptDrop:(id)arg2 index:(unsigned long long)arg3;
- (unsigned long long)gridView:(id)arg1 validateDrop:(id)arg2 proposedIndex:(unsigned long long *)arg3;
- (void)gridView:(id)arg1 willRecycleView:(id)arg2;
- (void)gridView:(id)arg1 prepareView:(id)arg2 forCellAtIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfCellsInGridView:(id)arg1;
- (unsigned long long)currentDraggedCellIndexForGridView:(id)arg1;
- (void)_updateBackButtonConstraints;
- (void)_createBackButtonConstraintsIfNeeded;
- (void)goBack:(id)arg1;
@property(readonly, nonatomic) NSView *titleView;
@property(readonly, nonatomic) double preferredMinimumWidth;
- (double)preferredHeightAtWidth:(double)arg1;
@property(readonly, nonatomic) NSString *pageTitle;
@property(readonly, nonatomic) double topContentInset;
- (void)updateContentRect;
- (void)updateAccessibilityTitle;
- (void)resetToRootFolder;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)loadView;
- (void)awakeFromNib;
- (id)nibName;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

