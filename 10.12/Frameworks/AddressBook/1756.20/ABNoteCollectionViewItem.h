//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCollectionViewItem.h>

@class ABUndoManager;

__attribute__((visibility("hidden")))
@interface ABNoteCollectionViewItem : ABCollectionViewItem
{
    BOOL mHasSuspendedSuddenTermination;
    ABUndoManager *_undoManager;
}

- (void).cxx_destruct;
- (BOOL)supportsClickToEdit;
- (void)deferredSave;
- (void)requestDeferredSave;
- (void)enableSuddenTermination;
- (void)disableSuddenTermination;
- (void)setValueEditable:(BOOL)arg1;
- (id)noteRowView;
- (void)setNoteInsertionPoint:(unsigned long long)arg1;
- (unsigned long long)noteInsertionPoint;
- (BOOL)commitEditing;
- (void)didRemoveFromCollection:(id)arg1;
- (void)didInsertIntoCollectionView:(id)arg1;
- (void)datumViewDidResignFirstResponder:(id)arg1;
- (void)datumViewDidBecomeFirstResponder:(id)arg1;
- (void)datumViewDidEndEditing:(id)arg1;
- (void)datumView:(id)arg1 textDidChange:(id)arg2;
- (BOOL)shouldDrawDivider;
- (void)_updateViewPlaceholder;
- (void)_updateViewValue;

@end

