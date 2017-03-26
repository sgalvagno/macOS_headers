//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/IMAPPersistenceTask.h>

#import <IMAP/IMAPGetPersistenceIDsAndFlagsForUIDsOperationDelegate-Protocol.h>
#import <IMAP/IMAPPersistFlagChangesOperationDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMAPPersistFlagChangesTask : IMAPPersistenceTask <IMAPGetPersistenceIDsAndFlagsForUIDsOperationDelegate, IMAPPersistFlagChangesOperationDelegate>
{
    NSMutableDictionary *_flagsByUIDs;
    NSMutableDictionary *_flagChangesByDetails;
}

- (void).cxx_destruct;
- (void)persistFlagChangesOperation:(id)arg1 persistedFlagChangesForUIDs:(id)arg2;
- (void)getMessageDetailsOperation:(id)arg1 gotDetails:(id)arg2 uidsNotFound:(id)arg3;
- (void)operationFinished:(id)arg1;
- (void)recalculatePriorities;
- (id)nextPersistenceOperation;
- (id)initWithDataSource:(id)arg1;
- (id)initWithFlagsByUIDs:(id)arg1 dataSource:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

