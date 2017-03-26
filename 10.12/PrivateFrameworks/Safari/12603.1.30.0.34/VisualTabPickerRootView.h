//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/MouseEventBlockingView.h>

@class NSScrollView, NSView, VisualTabPickerCloudTabsView, VisualTabPickerGridView, VisualTabPickerSearchField, VisualTabPickerViewController;

__attribute__((visibility("hidden")))
@interface VisualTabPickerRootView : MouseEventBlockingView
{
    NSScrollView *_scrollView;
    NSView *_topBarView;
    NSView *_topBarViewSeparator;
    VisualTabPickerGridView *_gridView;
    VisualTabPickerSearchField *_searchField;
    VisualTabPickerCloudTabsView *_cloudTabsView;
    VisualTabPickerViewController *_visualTabPickerViewController;
}

@property(nonatomic) __weak VisualTabPickerViewController *visualTabPickerViewController; // @synthesize visualTabPickerViewController=_visualTabPickerViewController;
@property(readonly, nonatomic) VisualTabPickerCloudTabsView *cloudTabsView; // @synthesize cloudTabsView=_cloudTabsView;
@property(readonly, nonatomic) VisualTabPickerSearchField *searchField; // @synthesize searchField=_searchField;
@property(readonly, nonatomic) VisualTabPickerGridView *gridView; // @synthesize gridView=_gridView;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (void)_startTopBarAndCloudViewAnimation:(long long)arg1;
- (void)_startPerspectiveAnimation:(long long)arg1;
- (void)_getTopBarAnimationDuration:(double *)arg1 timeOffset:(double *)arg2 gridAnimation:(long long)arg3;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)showSearchField;
- (BOOL)makeSearchFieldFirstResponder;
- (void)startGridAnimation:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelOperation:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)acceptsFirstResponder;
- (BOOL)wantsUpdateLayer;
- (id)initWithFrame:(struct CGRect)arg1 visualTabPickerViewController:(id)arg2;

@end

