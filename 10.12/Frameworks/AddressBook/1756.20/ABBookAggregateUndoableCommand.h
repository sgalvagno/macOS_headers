//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABBookUndoableCommand.h>

#import <AddressBook/ABSaveRequestCommand-Protocol.h>

@class ABAddressBook, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ABBookAggregateUndoableCommand : ABBookUndoableCommand <ABSaveRequestCommand>
{
    NSString *_actionName;
    NSArray *_undoableCommands;
    ABAddressBook *_addressBook;
    BOOL _shouldSave;
}

+ (id)builder;
- (void)configureVisitor:(id)arg1;
- (void)visitCommandsWithVisitor:(id)arg1 enumerationOptions:(unsigned long long)arg2;
- (void)visitCommandsWithUnconfiguredVisitor:(id)arg1 enumerationOptions:(unsigned long long)arg2;
- (void)visit:(id)arg1;
- (void)executeRedoWithSaveRequest:(id)arg1;
- (void)executeUndoWithSaveRequest:(id)arg1;
- (void)executeWithSaveRequest:(id)arg1;
- (void)saveIfNeeded;
- (void)executeRedo;
- (void)executeUndo;
- (void)execute;
- (BOOL)containsSubCommands;
- (id)subCommands;
- (id)actionName;
- (id)actionNameOfFirstCommand;
- (void)dealloc;
- (id)initWithBuilder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

