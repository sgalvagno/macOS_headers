//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

@class ABAddressBook, ABGroupEntriesList, ABSearchElement, NSString;

@interface ABBookEditSmartGroupCommand : ABBookUndoableCommand
{
    ABAddressBook *_addressBook;
    NSString *_smartGroupUid;
    NSString *_name;
    ABSearchElement *_searchElement;
    BOOL _tracksModification;
    NSString *_oldName;
    ABSearchElement *_oldSearchElement;
    BOOL _oldTracksModification;
    ABGroupEntriesList *_groupEntriesList;
}

- (id)smartGroup;
- (void)rememberOldState;
- (void)executeUndo;
- (void)execute;
- (id)actionName;
- (void)dealloc;
- (id)initWithSmartGroup:(id)arg1 name:(id)arg2 searchElement:(id)arg3 tracksModification:(BOOL)arg4 groupEntriesList:(id)arg5;

@end

