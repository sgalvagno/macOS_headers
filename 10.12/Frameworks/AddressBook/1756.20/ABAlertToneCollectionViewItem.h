//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

#import <AddressBook/TKTonePickerViewControllerDelegate-Protocol.h>

@class NSString, TKTonePickerViewController;

__attribute__((visibility("hidden")))
@interface ABAlertToneCollectionViewItem : ABCollectionViewItem <TKTonePickerViewControllerDelegate>
{
    TKTonePickerViewController *_tonePickerViewController;
}

@property(retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // @synthesize tonePickerViewController=_tonePickerViewController;
- (void).cxx_destruct;
- (BOOL)supportsClickToEdit;
- (void)tonePickerViewController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (id)_labelMenuItems;
- (id)_localizedLabel;
- (BOOL)_shouldShowRemoveItemButton;
- (BOOL)_shouldShowAddItemButton;
- (id)toneNameForIdentifier:(id)arg1;
- (id)toneIdentifierForAlertDictionary:(id)arg1;
- (void)_updateViewValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

