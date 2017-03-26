//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPreference, NSTabView, NSTabViewItem;

@interface NSPrefTabsController : NSObject
{
    NSTabView *tabView;
    NSPreference *parentLayout;
    NSTabViewItem *fTabViewItemToSwitchTo;
}

- (void).cxx_destruct;
- (unsigned long long)shouldUnselect;
- (void)didResignActive;
- (void)willResignActive;
- (void)didBecomeActive;
- (void)willBecomeActive;
- (void)didUnhide;
- (void)willUnhide;
- (void)didHide;
- (void)willHide;
- (void)willUnselect;
- (void)willSelect;
- (void)didUnselect;
- (void)didSelect;
- (void)tabView:(id)arg1 didSelectTabViewItem:(id)arg2;
- (void)tabView:(id)arg1 willSelectTabViewItem:(id)arg2;
- (BOOL)tabView:(id)arg1 shouldSelectTabViewItem:(id)arg2;
- (void)setUpTabViewItemKeyViews:(id)arg1 layout:(id)arg2;
- (void)cancelPaneSwitch:(id)arg1;
- (void)finishPaneSwitch:(id)arg1;
- (id)layoutForTabViewItem:(id)arg1;
- (BOOL)isLayoutLoadedForTabViewItem:(id)arg1;
- (id)selectedLayoutObject;
- (id)tabViewItems;
- (void)selectTabWithIdentifier:(id)arg1;
- (void)setPrefs:(id)arg1 lastSelected:(id)arg2;
- (void)setPrefs:(id)arg1;
- (void)dealloc;
- (id)init;

@end

