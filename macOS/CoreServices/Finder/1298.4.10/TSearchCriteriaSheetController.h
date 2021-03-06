//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "TMarkTornDown-Protocol.h"

@class NSObject, NSString, TTableViewController, TTableViewDataSource;
@protocol TSearchCriteriaSheetDelegate;

@interface TSearchCriteriaSheetController : NSWindowController <TMarkTornDown>
{
    TTableViewController *_tableViewController;
    TTableViewDataSource *_tableViewDataSource;
    struct TNSWeakPtr<NSObject<TSearchCriteriaSheetDelegate>, void> _weakDelegate;
    struct TNSRef<NSWindow, void> _parentWindow;
    struct TNSRef<NSArray, void> _attributeNamesInMenu;
    _Bool _isBackupBrowserWindow;
    _Bool tornDown;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(getter=isTornDown) _Bool tornDown; // @synthesize tornDown;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)cancelButtonPressed:(id)arg1;
- (void)okButtonPressed:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)showSheet:(void *)arg1;
- (void)windowDidLoad;
@property __weak NSObject<TSearchCriteriaSheetDelegate> *delegate; // @dynamic delegate;
- (void)aboutToTearDown;
- (id)initWithParentWindow:(id)arg1 attributeNamesInMenu:(id)arg2 isBackupBrowserWindow:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

