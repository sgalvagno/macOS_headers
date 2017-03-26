//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TListViewController.h>

#import <FinderKit/IKImageFlowDataSource-Protocol.h>
#import <FinderKit/NSSplitViewDelegate-Protocol.h>
#import <FinderKit/TFlowViewDelegate-Protocol.h>

@class FI_TFlowView, NSString;

__attribute__((visibility("hidden")))
@interface FI_TFlowViewController : FI_TListViewController <TFlowViewDelegate, NSSplitViewDelegate, IKImageFlowDataSource>
{
    struct TNSRef<FI_TFlowSplitViewController *, void> _splitViewController;
    struct TNSRef<FI_TListTableColumn *, void> _genericTextColumnRetainer;
    struct TNSRef<FI_TListTableColumn *, void> _genericDateColumnRetainer;
    struct TNSRef<FI_TListTableColumn *, void> _genericNumericColumnRetainer;
    struct TNSRef<FI_TFlowView *, void> _flowView;
    struct TFENodeOrderedSet _childrenOfFlowView;
    _Bool _disableSelectionSync;
    _Bool _flowViewChangingSelection;
    _Bool _listViewChangingSelection;
    _Bool _autoSelectMode;
    _Bool _isAutoSelecting;
    unsigned long long _autoSelectIndex;
    struct TFlowViewQTEjectHelper *_ejectHelper;
    struct TNotificationCenterObserver _timeMachineWillStartObserver;
}

@property _Bool disableSelectionSync; // @synthesize disableSelectionSync=_disableSelectionSync;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)handleKeyDown:(id)arg1 currentKey:(unsigned short)arg2;
- (void)imageFlow:(id)arg1 removeItemsAtIndexes:(id)arg2;
- (id)imageFlow:(id)arg1 accessibilityItemAtIndex:(unsigned long long)arg2 parentItem:(id)arg3;
- (unsigned long long)imageFlow:(id)arg1 writeItemsAtIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)imageFlow:(id)arg1 itemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfItemsInImageFlow:(id)arg1;
- (unsigned long long)getSelectedNodesForQuickLook:(struct TFENodeVector *)arg1 includeTarget:(_Bool)arg2 upTo:(unsigned long long)arg3;
- (void)imageFlow:(id)arg1 cellWasDoubleClickedAtIndex:(unsigned long long)arg2;
- (void)imageFlowDidStabilize:(id)arg1;
- (void)imageFlowWillStabilize:(id)arg1;
- (void)imageFlow:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (struct CGRect)globalZoomRectForNode:(const struct TFENode *)arg1;
- (struct CGRect)zoomRectForNode:(const struct TFENode *)arg1;
- (void)ensureCGSurfaceUpdateOnDraw:(_Bool)arg1;
- (id)quickLookSharedPreviewViewForPreviewNode:(const struct TFENode *)arg1;
- (id)zoomImageForNode:(const struct TFENode *)arg1 contentRect:(struct CGRect *)arg2;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (void)outlineViewItemDidExpand:(id)arg1;
- (int)updateNeededForNode:(const struct TFENode *)arg1 property:(unsigned long long)arg2;
- (void)updateChildrenOfFlowView;
- (unsigned long long)numberOfListItemsShowingInFlowView;
- (void)dataSourceItemsDidChange:(const unordered_map_a0710478 *)arg1;
- (void)dataSourceChanged:(const vector_f56638af *)arg1;
- (void)setSelectionChangedAnimationsEnabled:(_Bool)arg1;
- (void)sidebarDidChangeVisibility:(_Bool)arg1;
- (struct TFENode)flowNodeAtIndex:(unsigned long long)arg1;
- (id)flowIndexSetForNodes:(const struct TFENodeVector *)arg1;
- (unsigned long long)flowIndexForNode:(const struct TFENode *)arg1;
- (unsigned long long)flowItemCount;
- (void)willCollapseNode:(const struct TFENode *)arg1 recursively:(_Bool)arg2;
- (void)selectAll:(id)arg1;
- (void)deselectAllNodes;
- (struct CGSize)idealViewSize;
- (void)updateLayoutGuideRelatedConstraintsIfNeeded;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
- (void)setDataSource:(id)arg1;
- (unsigned int)viewStyle;
- (id)firstResponder;
@property(readonly) FI_TFlowView *flowView; // @dynamic flowView;
- (void)aboutToTearDown;
- (void)viewLoaded;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

