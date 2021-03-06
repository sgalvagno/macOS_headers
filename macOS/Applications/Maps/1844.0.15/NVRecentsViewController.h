//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "CNContactPickerViewControllerDelegate-Protocol.h"
#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class CNContactPickerViewController, NSSearchField, NSString, NSTableView, NSView, NVBookmarksViewController, NVRecentsWindow;
@protocol NVRecentsViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface NVRecentsViewController : NSViewController <NSTableViewDataSource, NSTableViewDelegate, CNContactPickerViewControllerDelegate>
{
    BOOL _showingInMenu;
    NVRecentsWindow *_window;
    CNContactPickerViewController *_bookmarksController;
    NSSearchField *_positioningView;
    id _eventMonitor;
    id <NVRecentsViewControllerDelegate> _delegate;
    NSTableView *_tableView;
    NSView *_contentView;
    NVBookmarksViewController *_bookmarksViewController;
}

@property(retain, nonatomic) NVBookmarksViewController *bookmarksViewController; // @synthesize bookmarksViewController=_bookmarksViewController;
@property(nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) BOOL showingInMenu; // @synthesize showingInMenu=_showingInMenu;
@property(nonatomic) __weak id <NVRecentsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)contactPickerViewController:(id)arg1 didChooseContact:(id)arg2 key:(id)arg3 value:(id)arg4;
- (void)setFavoritesVisible:(BOOL)arg1;
- (void)tableViewDidArrowUpBeyondStart:(id)arg1;
- (void)tableView:(id)arg1 didSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 identifierForRow:(long long)arg2;
- (void)dealloc;
- (void)close;
- (void)removeLocalEventMonitor;
- (void)referenceWindowMoved;
- (void)referenceWindowResized;
- (void)_autoselectRowDirection:(BOOL)arg1;
- (void)_selectRowWithKeyboard;
- (void)keyWindowChange;
- (void)showRelativeToView:(id)arg1;
- (void)_updateRecentsWindowFrameRelativeToView:(id)arg1 maxHeight:(double)arg2;
- (void)reloadView;
- (void)deleteElementAction:(id)arg1;
- (id)bookmarksController;
- (id)manager;
- (id)nibName;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

