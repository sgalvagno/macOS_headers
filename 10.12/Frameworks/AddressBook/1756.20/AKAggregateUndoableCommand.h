//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/AKUndoableCommand.h>

@class NSArray, NSString;

@interface AKAggregateUndoableCommand : AKUndoableCommand
{
    NSString *_actionName;
    NSArray *_undoableCommands;
}

+ (id)commandWithUndoableCommands:(id)arg1 actionName:(id)arg2 addressBook:(id)arg3;
@property(readonly, retain, nonatomic) NSArray *undoableCommands; // @synthesize undoableCommands=_undoableCommands;
- (void)executeUndoWithSaveRequest:(id)arg1;
- (void)executeWithSaveRequest:(id)arg1;
- (id)actionName;
- (void)dealloc;
- (id)initWithUndoableCommands:(id)arg1 actionName:(id)arg2 addressBook:(id)arg3;

@end

