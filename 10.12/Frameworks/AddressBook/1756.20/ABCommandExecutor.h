//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABCommandExecutor-Protocol.h>
#import <AddressBook/ABCommandVisitor-Protocol.h>

@class ABCommandExecutionPolicy, NSString, NSUndoManager;

@interface ABCommandExecutor : NSObject <ABCommandExecutor, ABCommandVisitor>
{
    NSUndoManager *_undoManager;
    ABCommandExecutionPolicy *_defaultPolicy;
}

@property(readonly, retain) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
- (void)runUndoTransaction:(CDUnknownBlockType)arg1;
- (void)addCommandToUndoManager:(id)arg1 withExecutorSelector:(SEL)arg2;
- (id)policyForCommand:(id)arg1;
- (void)runPolicyForCommand:(id)arg1 withCommandSelector:(SEL)arg2;
- (void)redoCommand:(id)arg1;
- (void)undoCommand:(id)arg1;
- (void)doCommand:(id)arg1;
- (void)visitSaveRequestCommand:(id)arg1;
- (void)visitUndoableCommand:(id)arg1;
- (void)visitCommand:(id)arg1;
- (void)removeAllCommands;
- (void)executeCommand:(id)arg1;
- (void)dealloc;
- (id)initWithUndoManager:(id)arg1 defaultPolicy:(id)arg2;
- (id)initWithUndoManager:(id)arg1 addressBook:(id)arg2 saveOnExecute:(BOOL)arg3;
- (id)initWithUndoManager:(id)arg1 addressBook:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

