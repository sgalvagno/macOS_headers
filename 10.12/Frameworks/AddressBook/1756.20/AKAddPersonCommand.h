//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/AKUndoableCommand.h>

@class ABCNContact, NSString;

__attribute__((visibility("hidden")))
@interface AKAddPersonCommand : AKUndoableCommand
{
    ABCNContact *_person;
    BOOL _personInserted;
    NSString *_accountIdentifier;
}

+ (id)commandWithPerson:(id)arg1 addressBook:(id)arg2 accountIdentifier:(id)arg3 personInserted:(BOOL)arg4;
- (void)executeUndoWithSaveRequest:(id)arg1;
- (void)executeRedoWithSaveRequest:(id)arg1;
- (void)executeWithSaveRequest:(id)arg1;
- (id)actionName;
- (void)dealloc;
- (id)initWithPerson:(id)arg1 addressBook:(id)arg2 accountIdentifier:(id)arg3 personInserted:(BOOL)arg4;

@end

