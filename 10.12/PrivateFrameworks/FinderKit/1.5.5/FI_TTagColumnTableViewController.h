//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FinderKit/FI_TTableViewController.h>

#import <FinderKit/NSMenuDelegate-Protocol.h>

@class FI_TContainerLayoutManager, NSString;
@protocol TTagColumnTableViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FI_TTagColumnTableViewController : FI_TTableViewController <NSMenuDelegate>
{
    id <TTagColumnTableViewControllerDelegate> _delegate;
    struct TFENode _selectedNode;
    struct TFENode _clickedNodeForMenuEvent;
    struct TFENode _editedNode;
    struct TKeyValueObserver _selectedObjectsObserver;
    struct TKeyValueObserver _contentInsetsDidChangeObserver;
    FI_TContainerLayoutManager *_containerLayoutManager;
}

@property(nonatomic) id <TTagColumnTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct TFENode selectedNode; // @synthesize selectedNode=_selectedNode;
@property(nonatomic) struct TFENode editedNode; // @synthesize editedNode=_editedNode;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)rowForNode:(const struct TFENode *)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)aboutToShowContextMenu:(id)arg1;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (void)selectTagWithName:(const struct TString *)arg1;
- (void)selectTag:(const struct TFENode *)arg1;
- (unsigned long long)indexOfTagNode:(const struct TFENode *)arg1;
- (void)selectedObjectsChanged;
- (void)tableView:(id)arg1 didRemoveRowView:(id)arg2 forRow:(long long)arg3;
- (void)tableView:(id)arg1 didAddRowView:(id)arg2 forRow:(long long)arg3;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tagColumnDataSource;
- (Class)dataSourceClass;
- (void)updateSubviewContentInsets:(struct NSEdgeInsets)arg1;
- (id)nibName;
- (void)aboutToTearDown;
- (void)dealloc;
- (void)viewLoaded;
- (id)initWithDelegate:(id)arg1 containerLayoutManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

