//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class NSMutableSet, NSWindow, SMCustomizeTreeNode_Client;

@interface SMMigrationCustomizeEditViewController : NSWindowController
{
    SMCustomizeTreeNode_Client *treeNode;
    NSMutableSet *nodesWhichWereOff;
    NSWindow *sheetWindow;
}

@property NSWindow *sheetWindow; // @synthesize sheetWindow;
@property(retain) NSMutableSet *nodesWhichWereOff; // @synthesize nodesWhichWereOff;
@property(retain) SMCustomizeTreeNode_Client *treeNode; // @synthesize treeNode;
- (void).cxx_destruct;
- (void)pressedOk:(id)arg1;
- (void)pressedCancel:(id)arg1;
- (void)dismissWindow;
- (void)showForTreeNode:(id)arg1 overWindow:(id)arg2;
- (void)restoreNodeStates:(id)arg1;
- (void)recordNodesWhichAreOffInTree:(id)arg1;
- (id)init;

@end

