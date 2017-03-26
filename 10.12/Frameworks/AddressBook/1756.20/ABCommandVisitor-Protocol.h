//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@protocol ABCommand, ABSaveRequestCommand, ABUndoableCommand;

@protocol ABCommandVisitor <NSObject>
- (void)visitSaveRequestCommand:(id <ABSaveRequestCommand>)arg1;
- (void)visitUndoableCommand:(id <ABUndoableCommand>)arg1;
- (void)visitCommand:(id <ABCommand>)arg1;
@end

