//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "NSOutlineViewDataSource-Protocol.h"
#import "NSOutlineViewDelegate-Protocol.h"

@class NSButton, NSOutlineView, NSString, NSTextField;

@interface _TtC5Notes31ICObjectSelectionViewController : NSViewController <NSOutlineViewDataSource, NSOutlineViewDelegate>
{
    // Error parsing type: , name: objectsOutlineView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: touchBarSelectButton
    // Error parsing type: , name: selectButton
    // Error parsing type: , name: isObjectHidden
    // Error parsing type: , name: detailTextForObject
    // Error parsing type: , name: didCancel
    // Error parsing type: , name: didSelect
    // Error parsing type: , name: selectButtonTitle
    // Error parsing type: , name: objects
    // Error parsing type: , name: selectedObjectIdentifiers
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) BOOL isSelectButtonEnabled;
@property(nonatomic, copy) NSString *title;
- (void)viewWillLayout;
- (void)selectButtonClickedWithSender:(id)arg1;
- (void)cancelButtonClickedWithSender:(id)arg1;
@property(nonatomic, retain) NSButton *selectButton; // @synthesize selectButton;
@property(nonatomic, retain) NSButton *touchBarSelectButton; // @synthesize touchBarSelectButton;
@property(nonatomic, retain) NSTextField *titleLabel; // @synthesize titleLabel;
@property(nonatomic, retain) NSOutlineView *objectsOutlineView; // @synthesize objectsOutlineView;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (id)outlineView:(id)arg1 viewForTableColumn:(id)arg2 item:(id)arg3;

@end

