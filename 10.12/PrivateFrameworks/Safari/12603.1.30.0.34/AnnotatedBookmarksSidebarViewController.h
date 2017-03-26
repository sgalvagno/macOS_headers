//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Safari/AnnotatedBookmarksSidebarExpandedTableCellViewDelegate-Protocol.h>
#import <Safari/AnnotatedBookmarksSidebarTableCellViewDelegate-Protocol.h>
#import <Safari/BookmarkFolderPickerMenuControllerDelegate-Protocol.h>
#import <Safari/CustomKeyViewLoop-Protocol.h>
#import <Safari/NSMenuDelegate-Protocol.h>
#import <Safari/SidebarContentFiltering-Protocol.h>
#import <Safari/SidebarContentViewController-Protocol.h>
#import <Safari/SidebarScrollViewAccessibilityDelegate-Protocol.h>
#import <Safari/TableViewPlusDataSource-Protocol.h>
#import <Safari/TableViewPlusDelegate-Protocol.h>

@class AnnotatedBookmarksSidebarExpandedTableCellView, AnnotatedBookmarksSidebarTableView, BookmarkFolderPickerMenuController, NSArray, NSMapTable, NSMenu, NSMutableArray, NSMutableSet, NSSearchField, NSString, NSTextField, NSTimer, NSView, SidebarScrollView, SidebarSearchField, WebBookmark, WebBookmarkList;
@protocol AnnotatedBookmarksSidebarViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AnnotatedBookmarksSidebarViewController : NSViewController <AnnotatedBookmarksSidebarTableCellViewDelegate, AnnotatedBookmarksSidebarExpandedTableCellViewDelegate, BookmarkFolderPickerMenuControllerDelegate, NSMenuDelegate, TableViewPlusDataSource, TableViewPlusDelegate, SidebarScrollViewAccessibilityDelegate, CustomKeyViewLoop, SidebarContentFiltering, SidebarContentViewController>
{
    WebBookmarkList *_currentBookmarkList;
    WebBookmark *_bookmarkBeingEdited;
    WebBookmark *_bookmarkToBeEdited;
    NSMutableArray *_bookmarksToDisplay;
    BOOL _suppressMetadataFetches;
    NSArray *_lastDroppedBookmarks;
    NSArray *_lastDraggedBookmarks;
    NSMutableSet *_uuidsOfModifiedBookmarksSinceLastTableRefresh;
    NSTimer *_refreshTableTimer;
    BOOL _bookmarkChangeIsExpected;
    BOOL _shouldRestoreScrollPositionAfterNextTableUpdate;
    double _scrollPositionToRestore;
    NSArray *_bookmarksSelectionToRestore;
    NSView *_controlsContainer;
    SidebarSearchField *_searchField;
    double _heightOfSpacerRow;
    BOOL _isCalculatingTableHeightWithoutSpacerRow;
    AnnotatedBookmarksSidebarExpandedTableCellView *_offscreenExpandedCellViewForRowHeightCalculation;
    double _calculatedControlsHeight;
    BookmarkFolderPickerMenuController *_bookmarkFolderPickerMenuController;
    NSMenu *_bookmarkMoveToSubmenu;
    AnnotatedBookmarksSidebarTableView *_bookmarksTableView;
    NSTextField *_emptyStateTextField;
    NSString *_bookmarkUUIDToRestore;
    NSMapTable *_cellViewToTokenMapping;
    BOOL _showingFolderHierarchy;
    id <AnnotatedBookmarksSidebarViewControllerDelegate> _delegate;
    SidebarScrollView *_scrollView;
}

@property(nonatomic) __weak SidebarScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <AnnotatedBookmarksSidebarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isShowingFolderHierarchy) BOOL showingFolderHierarchy; // @synthesize showingFolderHierarchy=_showingFolderHierarchy;
- (void).cxx_destruct;
- (id)safari_keyViews;
@property(readonly, nonatomic) NSArray *allFilteringControls;
@property(readonly, nonatomic) NSSearchField *searchField;
- (void)_didReloadTableData;
- (id)_newOrExistingBookmarksFromDraggingPasteboard:(id)arg1;
- (BOOL)_bookmarksArray:(id)arg1 isUserVisiblyEqualTo:(id)arg2;
- (void)_containsListOrLeafInArray:(id)arg1 returnBlock:(CDUnknownBlockType)arg2;
- (BOOL)_bookmark:(id)arg1 hasAncestorInArray:(id)arg2;
- (id)_strictDescendantsOfBookmarkList:(id)arg1 inDisplayedBookmarks:(id)arg2;
- (void)_registerRequestToken:(id)arg1 forCellView:(id)arg2;
- (void)_fetchMetadataForBookmarkIfNecessary:(id)arg1;
- (void)_suppressMetadataFetchingInBlock:(CDUnknownBlockType)arg1;
- (void)_updateTableWithWebBookmarkList:(id)arg1;
- (void)_updateTableForNewList;
- (void)_appendLeavesForWebBookmarkList:(id)arg1;
- (BOOL)_shouldDisplayBookmarkInSidebar:(id)arg1;
- (void)_openBookmarkAndGiveFocusToWebContent:(id)arg1;
- (id)_bookmarkAtTableRowIndex:(long long)arg1;
- (unsigned long long)_bookmarkIndexFromTableRowIndex:(unsigned long long)arg1;
- (unsigned long long)_tableRowIndexFromBookmarkIndex:(unsigned long long)arg1;
- (id)_titleForWebBookmark:(id)arg1;
- (id)_expandedLeafTableCellViewForWebBookmark:(id)arg1;
- (void)_configureLabelsOfExpandedCellView:(id)arg1 withBookmark:(id)arg2;
- (void)_removeBookmarksAtRows:(id)arg1;
- (void)_removeBookmark:(id)arg1;
- (void)_editPreviewTextForSelectedRow;
- (void)_editTitleForSelectedRow;
- (void)_editAddressForSelectedRow;
- (id)_destinationBookmarkFolderForDroppingBookmarks:(id)arg1 byBookmark:(id)arg2 dropOperation:(unsigned long long)arg3 currentBookmarkList:(id)arg4;
- (BOOL)_canMoveBookmarks:(id)arg1 intoFolder:(id)arg2;
- (BOOL)_canMoveBookmark:(id)arg1 intoFolder:(id)arg2;
- (BOOL)_canMoveBookmark:(id)arg1;
- (BOOL)_canDeleteBookmark:(id)arg1;
- (BOOL)_canEditBookmark:(id)arg1;
- (BOOL)_canCopyBookmark:(id)arg1;
- (BOOL)_isBookmarkRow:(long long)arg1;
- (BOOL)_isBottomSpacerRow:(long long)arg1;
- (double)_controlsContainerHeight;
- (BOOL)_isControlsContainerRow:(long long)arg1;
- (BOOL)_controlsContainerViewIsMostlyVisible;
- (void)_copySelectedBookmark;
- (void)_navigateToWebBookmarkList:(id)arg1;
- (void)_navigateToSelectedRow;
- (id)_copyOrMoveBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(long long)arg3;
- (void)_updateBottomSpacerRowHeight;
- (void)_reloadTableDataInsertingBottomSpacerRowIfNeeded;
- (long long)_adjustedInsertionIndexForBookmarkList:(id)arg1 withProposedIndex:(long long)arg2;
- (void)_visuallyInsertWebBookmarkList:(id)arg1 underList:(id)arg2;
- (long long)_bookmarkListInsertionIndexInBookmarksToDisplayWhenAddingToBookmarkList:(id)arg1;
- (void)_insertAndFetchMetadataInCurrentListIfNecessaryForBookmarks:(id)arg1 atBookmarkIndexes:(id)arg2 tableIndexes:(id)arg3;
- (void)bookmarkFolderPickerMenuController:(id)arg1 didPickBookmarkFolder:(id)arg2;
- (void)menuNeedsUpdate:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)_noteHeightOfRowsWithIndexesChangedWithoutAnimation:(id)arg1;
- (void)_noteHeightOfRowsDidChange;
- (void)_scrollViewFrameDidChange:(id)arg1;
- (void)tableViewDidEndLiveResize:(id)arg1;
- (void)tableViewColumnDidResize:(id)arg1;
- (id)_moveBookmarksFromPasteboard:(id)arg1 toFolder:(id)arg2 startingIndex:(long long)arg3;
- (long long)_adjustedInsertionIndexForCurrentBookmarkListWithProposedIndex:(long long)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 menuForEvent:(id)arg2 inRow:(long long)arg3 tableColumn:(id)arg4;
- (id)tableView:(id)arg1 rowActionsForRow:(long long)arg2 edge:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 keyDown:(id)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)wasInstalledBySidebarViewController:(id)arg1;
- (void)_setThumbnailImageForExpandedTableCellView:(id)arg1 withLeaf:(id)arg2;
- (void)_setIconForExpandedTableCellView:(id)arg1 withLeaf:(id)arg2;
- (void)_transitionContentsIn;
- (void)_transitionContentsOut;
- (void)_transitionBackToTopLevel;
- (void)annotatedBookmarksSidebarExpandedTableCellView:(id)arg1 didUpdatePreviewText:(id)arg2;
- (void)annotatedBookmarksSidebarTableCellViewShouldReleaseMetadataRequest:(id)arg1;
- (BOOL)accessibilityShowMenuForAnnotatedBookmarksSidebarTableCellView:(id)arg1;
- (void)didLongPressAnnotatedBookmarksSidebarTableCellView:(id)arg1;
- (void)annotatedBookmarksSidebarTableCellView:(id)arg1 didUpdateTitle:(id)arg2;
- (void)_updateTableWithSearch;
- (BOOL)_searchFieldEditorIsFocused;
- (BOOL)_isPerformingSearch;
- (void)_didChangeSearchQuery:(id)arg1;
- (BOOL)_isShowingBookmarkLeaf:(id)arg1;
- (id)_contextMenuBuilderForRow:(long long)arg1;
- (void)_updateCurrentLeafRows;
- (id)sideBarScrollViewAccessibilityChildren:(id)arg1;
- (void)_restoreScrollPositionAndSelectionIfNecessary;
- (void)_addTableView;
- (void)_updateSearchFieldPlaceholderString;
- (void)_updateEmptyStateVisibility;
- (void)_removeEmptyState;
- (void)_addEmptyState;
- (void)_addControls;
- (void)_updateNonBookmarkRows;
- (void)_selectRowsWithBookmarks:(id)arg1;
- (id)_selectedBookmarks;
- (void)_restoreScrollPositionAfterNextTableUpdate:(double)arg1;
- (void)_refreshTable:(id)arg1;
- (void)_refreshEntireTableNow;
- (void)_bookmarksWereReloaded:(id)arg1;
- (void)_bookmarkWasChanged:(id)arg1;
- (void)_bookmarksWereRemoved:(id)arg1;
- (void)_bookmarksWereAdded:(id)arg1;
- (void)_scheduleTableRefresh;
- (void)_refreshRowForModifiedBookmarkSoon:(id)arg1;
- (void)_refreshEntireTableSoon;
- (BOOL)_bookmarkIsTopLevelBookmark:(id)arg1;
- (id)_topLevelBookmarkIfLoaded;
- (void)_startObservingBookmarkChanges;
- (BOOL)_shouldDeselectAllBookmarksWithSelectedRow:(long long)arg1;
- (void)displayBookmarkFolder:(id)arg1;
- (void)navigateBack:(id)arg1;
- (void)rowClicked:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)dealloc;
- (BOOL)_showTopLevelBookmarkIfLoaded;
- (BOOL)_restorePreviouslyShowedBookmarkIfPossible;
- (void)viewDidLoad;
- (id)initWithBookmarkUUID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

