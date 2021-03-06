//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXBrowserController.h"

#import "IPXAssetsViewControllerCustomLayoutDelegate-Protocol.h"
#import "IPXObjectsControllerChangeReceiver-Protocol.h"
#import "IPXPeopleFavoritingShelfViewDelegate-Protocol.h"
#import "IPXPeopleHomeSectionFooterViewDelegate-Protocol.h"
#import "IPXSelectionProvider-Protocol.h"

@class IPXAssetsViewController, IPXLibrary, IPXPeopleFavoritingShelfView, IPXPeopleHomeLayout, IPXPeopleObjectsController, NSButton, NSIndexPath, NSString, PXPeopleProgressManager;

@interface IPXPeopleHomeBrowserController : IPXBrowserController <IPXObjectsControllerChangeReceiver, IPXAssetsViewControllerCustomLayoutDelegate, IPXSelectionProvider, IPXPeopleHomeSectionFooterViewDelegate, IPXPeopleFavoritingShelfViewDelegate>
{
    IPXLibrary *_library;
    IPXPeopleObjectsController *_objectsController;
    IPXAssetsViewController *_assetsViewController;
    IPXPeopleHomeLayout *_assetsLayout;
    IPXPeopleFavoritingShelfView *_favoritingShelfView;
    BOOL _favoritingShelfAcceptedDrop;
    PXPeopleProgressManager *_progressManager;
    NSButton *_createPopupButton;
    NSButton *_playPopupButton;
    NSButton *_sharePopupButton;
    NSIndexPath *_indexPathToScrollToAfterUpdate;
    BOOL _isObservingUserDefaults;
}

- (void).cxx_destruct;
- (void)_updateFooter;
- (void)_stopProgressMonitoring;
- (void)_startProgressMonitoring;
- (void)objectsController:(id)arg1 metadataChanged:(id)arg2 forObjects:(id)arg3;
- (void)objectsControllerObjectsCollectionChanged:(id)arg1;
- (id)navigationDestination;
- (void)peopleHomeSectionFooterView:(id)arg1 didSelectDislosureControl:(id)arg2;
- (void)favoritingShelfView:(id)arg1 didAcceptDropForItemsAtIndexPaths:(id)arg2;
- (id)assetsViewController:(id)arg1 movedAssetsInSectionsCollection:(id)arg2 atIndexPaths:(id)arg3 toIndexPath:(id)arg4 dropPosition:(long long)arg5;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (void)assetsViewController:(id)arg1 draggingSession:(id)arg2 willBeginAtPoint:(struct CGPoint)arg3;
- (id)assetsViewController:(id)arg1 draggingItemForIndexPath:(id)arg2 proposedDraggingItem:(id)arg3;
- (long long)assetsViewControllerPreferredDraggingFormation:(id)arg1;
- (id)assetsViewController:(id)arg1 imageForDraggedItemAtIndexPath:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 canMoveItemsAtIndexPaths:(id)arg2;
- (id)assetsViewController:(id)arg1 reuseIdentifierForSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)supplementaryViewClassDefinitionsForCustomLayoutAssetsViewController:(id)arg1;
- (id)itemCellClassDefinitionsForCustomLayoutAssetsViewController:(id)arg1;
- (id)layoutForAssetsViewController:(id)arg1;
- (void)assetsViewControllerSelectionDidChange:(id)arg1 userInfo:(id)arg2;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasRightClickedWithEvent:(id)arg3 targetingAssets:(id)arg4;
- (void)assetsViewController:(id)arg1 assetAtIndexPath:(id)arg2 wasDoubleClickedWithEvent:(id)arg3;
- (void)assetsViewController:(id)arg1 didAssignMediaSection:(id)arg2 toSupplementaryView:(id)arg3 atIndexPath:(id)arg4;
- (void)assetsViewController:(id)arg1 didUpdateSectionsCollection:(id)arg2;
- (BOOL)assetsViewController:(id)arg1 shouldAnimateChange:(id)arg2;
- (id)newSectionsCollectionForAssetsViewController:(id)arg1;
- (id)newDataSourceForAssetsViewController:(id)arg1;
- (id)selectionProviderCurrentSelectionWithOptions:(long long)arg1;
- (id)selectionProviderCurrentLiteSelection;
- (void)animateFavoritingShelfOut;
- (void)animateFavoritingShelfIn;
- (id)shelfView;
- (struct CGRect)initialFrameForShelfView:(id)arg1;
- (BOOL)vipSectionIsEmpty;
- (void)keyDown:(id)arg1;
- (void)presentAddPersonScreen;
- (void)a_unHidePerson:(id)arg1;
- (void)a_hidePerson:(id)arg1;
- (void)a_unFavoritePerson:(id)arg1;
- (void)a_favoritePerson:(id)arg1;
- (void)a_mergePeople:(id)arg1;
- (void)a_playSlideshow:(id)arg1;
- (void)a_showPersonDetails:(id)arg1;
- (id)bestTargetPersonGivenPersons:(id)arg1;
- (BOOL)moveAssetsInSectionsCollection:(id)arg1 atIndexPaths:(id)arg2 toIndexPath:(id)arg3 dropPosition:(long long)arg4;
- (void)performChangePersonTypeActionOfType:(Class)arg1 actionName:(id)arg2;
- (CDUnknownBlockType)creationDateVersionComparator;
- (id)nameStringForPeople:(id)arg1;
- (id)distinctVersionsFromPersons:(id)arg1 title:(id *)arg2;
- (id)database;
- (void)updateFooterView:(id)arg1 atIndexPath:(id)arg2;
- (void)setupToolbarItems;
- (void)setupNavigationItem;
- (id)assetsLayout;
- (void)viewDidTransitionOutWithContext:(id)arg1;
- (void)prepareForTransitioningViewOutWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prepareForTransitioningViewInWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)preferredFirstResponder;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didBecomeInactive;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1 progressManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

