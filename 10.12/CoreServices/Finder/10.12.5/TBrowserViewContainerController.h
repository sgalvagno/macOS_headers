//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TViewController.h"

@class TBottomBarController, TBrowserSplitViewController, TContainerLayoutManager, TSearchSliceController;

@interface TBrowserViewContainerController : TViewController
{
    struct TNSRef<NSViewController *, void> _bannerViewController;
    struct TNSRef<TBrowserSplitViewController *, void> _browserSplitViewController;
    struct TNSRef<TSearchSliceController *, void> _searchSliceController;
    struct TNSRef<TBottomBarController *, void> _bottomBarController;
    struct TNSRef<TAirDropNotAvailableViewController *, void> _airDropNotAvailableViewController;
    TContainerLayoutManager *_containerLayoutManager;
    struct TNSRef<NSMutableArray<NSLayoutConstraint *>*, void> _layoutConstraints;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _notificationCenterObservers;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)configureSearchSliceView:(_Bool)arg1 showSliceContainer:(_Bool)arg2 showSearchStringSlice:(_Bool)arg3 searchFilterUTIs:(id)arg4 toolbarSearchField:(id)arg5 browserContainerController:(id)arg6;
- (_Bool)isSearchSliceViewVisible;
- (id)searchSliceView;
@property(readonly, retain, nonatomic) TSearchSliceController *searchSliceController; // @dynamic searchSliceController;
- (void)configureForAirDrop:(_Bool)arg1 showNotAvailable:(_Bool)arg2;
- (void)setBottomBarTarget:(const struct TFENode *)arg1 selectedNodes:(const struct TFENodeVector *)arg2;
- (_Bool)configureBottomBar:(_Bool)arg1 browserContainerController:(id)arg2;
- (_Bool)isBottomBarVisible;
- (id)bottomBarView;
@property(readonly, retain, nonatomic) TBottomBarController *bottomBarController;
- (void)configureBannerView:(const struct TFENode *)arg1 selectedNodes:(const struct TFENode *)arg2 isInColumnView:(_Bool)arg3 isBackupBrowser:(_Bool)arg4;
- (id)newBannerViewWrapperWithBanner:(id)arg1;
@property(readonly, nonatomic) _Bool bannerViewIsVisible; // @dynamic bannerViewIsVisible;
- (id)bannerView;
- (id)bannerViewController;
- (void)configureBrowserSplitViewWithBrowserViewController:(id)arg1;
- (id)browserSplitView;
- (id)browserSplitViewWrapper;
@property(readonly, retain, nonatomic) TBrowserSplitViewController *browserSplitViewController;
- (void)activateLayoutGuideRelatedConstraintsIfNeeded;
- (void)tearDownAccessoryViews;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (id)initWithContentView:(id)arg1 containerLayoutManager:(id)arg2;
- (void)initCommon;

@end

