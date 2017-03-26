//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSNavFileListDelegate.h>

#import <AppKit/NSBrowserDelegate-Protocol.h>

@class NSBrowser, NSMutableDictionary, NSNavNode, NSNavPreviewController, NSString;

@interface NSNavBrowserDelegate : NSNavFileListDelegate <NSBrowserDelegate>
{
    NSBrowser *_browser;
    NSNavNode *_lastSelectedNode;
    NSNavPreviewController *_previewController;
    unsigned int _reloadingInvalidAlias:1;
    unsigned int _reserved:31;
    NSMutableDictionary *_aliasNodesToTargetNodes;
}

- (id)view;
- (double)browser:(id)arg1 shouldSizeColumn:(long long)arg2 forUserResize:(BOOL)arg3 toWidth:(double)arg4;
- (struct CGRect)sourceFrameOnScreenForNavNode:(id)arg1;
- (BOOL)browser:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (long long)browser:(id)arg1 nextTypeSelectMatchFromRow:(long long)arg2 toRow:(long long)arg3 inColumn:(long long)arg4 forString:(id)arg5;
- (void)browserColumnConfigurationDidChange:(id)arg1;
- (id)browser:(id)arg1 selectionIndexesForProposedSelection:(id)arg2 inColumn:(long long)arg3;
- (BOOL)_userClickedInEjectButtonFrame;
- (BOOL)browser:(id)arg1 shouldTrackCell:(id)arg2 atRow:(long long)arg3 inColumn:(long long)arg4;
- (struct CGRect)_frameOfCellInBrowserAtColumn:(long long)arg1 row:(long long)arg2;
- (void)_ejectButtonClicked:(id)arg1;
- (void)browser:(id)arg1 willDisplayCell:(id)arg2 atRow:(long long)arg3 column:(long long)arg4;
- (id)browser:(id)arg1 objectValueForItem:(id)arg2;
- (BOOL)browser:(id)arg1 isLeafItem:(id)arg2;
- (id)browser:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (long long)browser:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (void)browser:(id)arg1 didChangeLastColumn:(long long)arg2 toColumn:(long long)arg3;
- (void)_browserDoubleAction:(id)arg1;
- (BOOL)_changeRootNodeBasedOnSelectedNodes:(id)arg1;
- (BOOL)navBrowser:(id)arg1 isEnabledRow:(long long)arg2 column:(long long)arg3;
- (long long)navBrowser:(id)arg1 labelColorIndexForRow:(long long)arg2 column:(long long)arg3;
- (void)navBrowser:(id)arg1 didClickOnDisabledRow:(long long)arg2 column:(long long)arg3;
- (void)configureForCanChooseFiles:(BOOL)arg1;
- (BOOL)worksWhenModal;
- (BOOL)browser:(id)arg1 writeRowsWithIndexes:(id)arg2 inColumn:(long long)arg3 toPasteboard:(id)arg4;
- (void)configureForAllowsMultipleSelection:(BOOL)arg1;
- (void)configureForCanChooseDirectories:(BOOL)arg1;
- (id)selectedNodes;
- (id)selectedNodesIncludingDirectories;
- (void)setCurrentBrowsingNodePath:(id)arg1;
- (void)setCurrentDirectoryNode:(id)arg1;
- (BOOL)canGoIntoSelectedDirectory;
- (id)visualRootNode;
- (BOOL)_browser:(id)arg1 performKeyEquivalent:(id)arg2 inColumn:(long long)arg3;
- (BOOL)_browser:(id)arg1 keyEvent:(id)arg2 inColumn:(long long)arg3;
- (id)currentTypeSelectSearchString;
- (id)browser:(id)arg1 headerViewControllerForItem:(id)arg2;
- (id)browser:(id)arg1 previewViewControllerForLeafItem:(id)arg2;
- (BOOL)_shouldShowPreviewForNode:(id)arg1;
- (void)_browserAction:(id)arg1;
- (BOOL)_lastSelectedNodeIsDirectory;
- (id)_selectedNodesWithEntireSelection:(BOOL)arg1;
- (void)handleUserGoUpDirectory;
- (id)showNode:(id)arg1 inDirectory:(id)arg2 selectIfEnabled:(BOOL)arg3;
- (void)_setCurrentDirectoryNode:(id)arg1 pathToNode:(id)arg2;
- (id)_indexPathForNode:(id)arg1;
- (id)currentBrowsingNodePath;
- (id)currentDirectoryNode;
- (void)reloadDisplayState;
- (BOOL)_setSelectedNodes:(id)arg1;
- (void)reloadChildrenForNode:(id)arg1;
- (BOOL)lightweightHandleChildChanged:(id)arg1 parent:(id)arg2 property:(id)arg3;
- (void)_reloadChildNode:(id)arg1 parent:(id)arg2;
- (void)_reloadChildNode:(id)arg1 parent:(id)arg2 includeChildColumn:(BOOL)arg3 updateTrackignAreas:(BOOL)arg4;
- (void)loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2;
- (id)_cachedChildrenForNode:(id)arg1 logonOK:(BOOL)arg2;
- (id)rootItemForBrowser:(id)arg1;
- (void)configureForInactiveState;
- (void)_addAliasNode:(id)arg1 toTargetNode:(id)arg2;
- (void)_removeAliasNode:(id)arg1;
- (void)_clearAliasToTargetNodeMapTable;
- (void)configureForActiveState;
@property(retain, nonatomic) NSBrowser *browser; // @dynamic browser;
- (void)windowOrderedOut;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

