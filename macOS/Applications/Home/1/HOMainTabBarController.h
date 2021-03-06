//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "HFHomeManagerObserver-Protocol.h"
#import "HFItemManagerDelegate-Protocol.h"
#import "HOInitialSetupStateControllerDelegate-Protocol.h"
#import "HUPresentationDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class HOAppNavigator, HOInitialSetupStateController, HOMainTabBarItemManager, NAFuture, NSMutableArray, NSMutableDictionary, NSString, _UIMenuBarMenu, _UIWindowToolbarSegmentedControlItem;

@interface HOMainTabBarController : UITabBarController <HFItemManagerDelegate, HFHomeManagerObserver, HOInitialSetupStateControllerDelegate, HUPresentationDelegate, UITabBarControllerDelegate>
{
    BOOL _showingOnboarding;
    BOOL _showingDataSyncing;
    BOOL _changingSelectedViewControllerProgrammatically;
    BOOL __debug_viewHasEverAppeared;
    _UIWindowToolbarSegmentedControlItem *_segmentedControlItem;
    HOAppNavigator *_navigator;
    HOMainTabBarItemManager *_itemManager;
    NAFuture *_loadTabsFuture;
    HOInitialSetupStateController *_initialSetupStateController;
    NAFuture *_dataSyncStateChangeProcessingFuture;
    NSMutableDictionary *_tabClassToNavigationControllerMap;
    NSMutableArray *_triggersPendingExecutionConfirmation;
    NAFuture *_onboardingPresentationFuture;
    _UIMenuBarMenu *_roomsMenu;
}

@property(retain, nonatomic) _UIMenuBarMenu *roomsMenu; // @synthesize roomsMenu=_roomsMenu;
@property(nonatomic) BOOL _debug_viewHasEverAppeared; // @synthesize _debug_viewHasEverAppeared=__debug_viewHasEverAppeared;
@property(retain, nonatomic) NAFuture *onboardingPresentationFuture; // @synthesize onboardingPresentationFuture=_onboardingPresentationFuture;
@property(retain, nonatomic) NSMutableArray *triggersPendingExecutionConfirmation; // @synthesize triggersPendingExecutionConfirmation=_triggersPendingExecutionConfirmation;
@property(retain, nonatomic) NSMutableDictionary *tabClassToNavigationControllerMap; // @synthesize tabClassToNavigationControllerMap=_tabClassToNavigationControllerMap;
@property(retain, nonatomic) NAFuture *dataSyncStateChangeProcessingFuture; // @synthesize dataSyncStateChangeProcessingFuture=_dataSyncStateChangeProcessingFuture;
@property(nonatomic) BOOL changingSelectedViewControllerProgrammatically; // @synthesize changingSelectedViewControllerProgrammatically=_changingSelectedViewControllerProgrammatically;
@property(nonatomic) BOOL showingDataSyncing; // @synthesize showingDataSyncing=_showingDataSyncing;
@property(nonatomic) BOOL showingOnboarding; // @synthesize showingOnboarding=_showingOnboarding;
@property(retain, nonatomic) HOInitialSetupStateController *initialSetupStateController; // @synthesize initialSetupStateController=_initialSetupStateController;
@property(retain, nonatomic) NAFuture *loadTabsFuture; // @synthesize loadTabsFuture=_loadTabsFuture;
@property(retain, nonatomic) HOMainTabBarItemManager *itemManager; // @synthesize itemManager=_itemManager;
@property(retain, nonatomic) HOAppNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) _UIWindowToolbarSegmentedControlItem *segmentedControlItem; // @synthesize segmentedControlItem=_segmentedControlItem;
- (void).cxx_destruct;
- (id)finishPresentation:(id)arg1 animated:(BOOL)arg2;
- (void)_navigateToRoom:(id)arg1;
- (void)_presentLocationAlertForTrigger:(id)arg1;
- (void)_userDidConfirmExection:(BOOL)arg1 ofTrigger:(id)arg2;
- (void)_presentLocationTriggerAlertsIfNeeded;
- (id)presentConfirmationAlertForExecutingTrigger:(id)arg1;
- (void)_persistLastSelectedTab;
- (id)_navigationControllerForInitialSelection;
- (id)_displayedIdentifiersArray;
- (id)_navigationControllerForMainTabIdentifier:(id)arg1;
- (id)_navigationControllerForItem:(id)arg1;
- (id)_itemForMainTabIdentifier:(id)arg1;
- (unsigned long long)_indexOfTabForIdentifier:(id)arg1;
- (id)_populateWallpaperForLoadingViewController:(id)arg1;
- (void)_reloadRoomsList;
- (void)_reloadNavigationControllers;
- (void)_updateTabBarStyle;
- (void)_setSelectedViewController:(id)arg1 persistSelection:(BOOL)arg2;
- (void)segmentedControlItemPressed:(id)arg1;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)tabBarController:(id)arg1 animationControllerForTransitionFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)stateController:(id)arg1 dismissViewController:(id)arg2 forState:(unsigned long long)arg3;
- (id)stateController:(id)arg1 presentViewController:(id)arg2 forState:(unsigned long long)arg3;
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;
- (void)itemManager:(id)arg1 didMoveItem:(id)arg2 fromIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (void)itemManager:(id)arg1 didInsertItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 didRemoveItem:(id)arg2 atIndexPath:(id)arg3;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (long long)preferredBarStyleForTabViewController:(id)arg1;
- (void)showOnboardingIfNeededForHomeInvitation:(id)arg1;
- (id)dismissPresentedViewControllersAnimated:(BOOL)arg1;
- (id)selectTabWithIdentifier:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)applicationWillEnterForeground;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

