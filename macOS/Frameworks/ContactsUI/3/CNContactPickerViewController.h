//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "CNContactPickerInternalResponseDelegate.h"

@class CNContactPickerInProccessViewController, NSArray, NSString;

@interface CNContactPickerViewController : NSViewController <CNContactPickerInternalResponseDelegate>
{
    CNContactPickerInProccessViewController *_serviceController;
    NSArray *_displayedKeys;
    id <CNContactPickerViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <CNContactPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)registerSectionsForDraggedTypes:(id)arg1;
- (void)selectSectionWithIdentifier:(id)arg1;
- (void)addSection:(id)arg1;
- (void)didShowSectionWithIdentifier:(id)arg1;
- (void)didSearchForString:(id)arg1;
- (void)didSelectContact:(id)arg1 key:(id)arg2 value:(id)arg3 identifier:(id)arg4;
@property(getter=isSearchFieldVisible) BOOL searchFieldVisible;
@property(copy, nonatomic) NSArray *displayedKeys; // @synthesize displayedKeys=_displayedKeys;
- (id)view;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

