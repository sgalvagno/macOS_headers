//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICNFIMAPClientOperationQueue, ICNFIMAPConnection, ICNFIMAPConnectionPool, NSCondition, NSMapTable, NSOperationQueue, NSRecursiveLock, NSString;

@interface ICNFIMAPGateway : NSObject
{
    NSOperationQueue *_checkInQueue;
    NSCondition *_connectionAvailabilityCondition;
    NSRecursiveLock *_clientOperationsLock;
    BOOL _operationQueueCanCheckInConnection;
    NSMapTable *_clientOperations;
    NSMapTable *_savedQualityOfServiceForClientOperations;
    long long _savedOperationQueueQualityOfService;
    BOOL _canYield;
    BOOL _remainedDeserted;
    BOOL _isSealedShut;
    BOOL _needsSelect;
    BOOL _primaryClientAllowsYielding;
    ICNFIMAPClientOperationQueue *_operationQueue;
    ICNFIMAPConnectionPool *_connectionPool;
    ICNFIMAPConnection *_primitiveConnection;
}

+ (void)_checkIdleGateways;
+ (void)_removeIdleGateway:(id)arg1;
+ (void)_addIdleGateway:(id)arg1;
+ (id)sharedKeySetForMessageInfo;
+ (double)IMAPIdleRefreshDelay;
+ (void)initialize;
@property(retain) ICNFIMAPConnection *primitiveConnection; // @synthesize primitiveConnection=_primitiveConnection;
@property __weak ICNFIMAPConnectionPool *connectionPool; // @synthesize connectionPool=_connectionPool;
@property BOOL primaryClientAllowsYielding; // @synthesize primaryClientAllowsYielding=_primaryClientAllowsYielding;
@property BOOL needsSelect; // @synthesize needsSelect=_needsSelect;
@property BOOL isSealedShut; // @synthesize isSealedShut=_isSealedShut;
@property BOOL remainedDeserted; // @synthesize remainedDeserted=_remainedDeserted;
@property BOOL canYield; // @synthesize canYield=_canYield;
@property(retain) ICNFIMAPClientOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)restoreSavedQualityOfService;
- (BOOL)saveCurrentQualityOfServiceAndBoostTo:(long long)arg1;
- (id)debugDescription;
- (void)refreshIdle;
- (BOOL)startIdle;
- (void)refreshDone:(BOOL)arg1 withOperation:(id)arg2;
- (BOOL)synchronouslyExecuteDoneWithSequence:(unsigned long long)arg1 session:(unsigned long long)arg2;
- (BOOL)synchronouslyExecuteSelect:(id)arg1;
- (unsigned int)searchedUidNextForMessageNumber:(unsigned long long)arg1;
- (id)searchUidRange:(CDStruct_f792af56)arg1 forNewMessageIDs:(id)arg2;
- (id)searchUidRange:(CDStruct_f792af56)arg1 forTerms:(id)arg2;
- (BOOL)appendData:(id)arg1 toMailboxNamed:(id)arg2 flags:(id)arg3 dateReceived:(id)arg4 messageInfo:(id)arg5 error:(id *)arg6;
- (BOOL)copyUids:(id)arg1 toMailboxNamed:(id)arg2 messageInfo:(id)arg3 error:(id *)arg4;
- (BOOL)deleteMessagesOlderThanNumberOfDays:(long long)arg1 settingFlags:(id)arg2;
- (BOOL)_storeGmailLabels:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3 mailboxName:(id)arg4;
- (BOOL)_storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3 mailboxName:(id)arg4;
- (BOOL)_expunge:(BOOL)arg1 orStoreFlags:(id)arg2 orStoreGmailLabels:(id)arg3 state:(BOOL)arg4 forUids:(id)arg5;
- (BOOL)storeGmailLabels:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3;
- (BOOL)storeFlags:(id)arg1 state:(BOOL)arg2 forUids:(id)arg3;
- (void)fetchTotalSizeAndMessageCount;
- (void)unselect;
- (void)closeAndLogout;
- (void)logout;
- (void)close;
- (BOOL)_expungeUids:(id)arg1 mailboxName:(id)arg2;
- (BOOL)expungeUids:(id)arg1;
- (BOOL)expunge;
- (BOOL)check:(id *)arg1;
- (BOOL)getQuotaForRootName:(id)arg1;
- (void)fetchQuotaRootNamesForMailboxes:(id)arg1;
- (BOOL)unsubscribeMailbox:(id)arg1;
- (BOOL)subscribeMailbox:(id)arg1;
- (BOOL)renameMailbox:(id)arg1 toMailbox:(id)arg2;
- (BOOL)deleteMailbox:(id)arg1;
- (BOOL)createMailbox:(id)arg1;
- (BOOL)_completeSelectOperation:(id)arg1;
- (void)_waitForDelayedSelectOperation:(id)arg1;
- (BOOL)_addSelectOperationForMailbox:(id)arg1 class:(Class)arg2;
- (BOOL)selectMailbox:(id)arg1;
- (BOOL)examineMailbox:(id)arg1;
- (id)statusForMailbox:(id)arg1 dataItems:(unsigned long long)arg2;
- (void)fetchStatusForMailboxes:(id)arg1 dataItems:(unsigned long long)arg2;
- (BOOL)subscribedListingForMailbox:(id)arg1 options:(long long)arg2 listingInfo:(id)arg3;
- (BOOL)listingForMailbox:(id)arg1 options:(long long)arg2 listingInfo:(id)arg3;
- (id)namespacesWithSeparatorChar:(id)arg1;
- (void)setServerPathPrefixOnAccount:(id)arg1 withSeparatorChar:(id)arg2;
- (void)fetchFlagsForMaxRecentMessages:(unsigned long long)arg1;
- (void)fetchAllFlags;
- (void)noop;
- (void)_setErrorFromOperation:(id)arg1 overwriteExistingError:(BOOL)arg2;
- (void)_setError:(id *)arg1 fromOperation:(id)arg2;
- (id)mailboxNameIfSelected:(BOOL)arg1;
- (BOOL)supportsCapability:(unsigned long long)arg1;
- (void)configureForMailboxName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mailboxName;
- (void)waitUntilAllOperationsAreFinished;
- (void)waitUntilClientOperationIsFinished:(id)arg1;
- (BOOL)addClientOperation:(id)arg1 toQueueAndWaitUntilFinished:(BOOL)arg2;
- (void)_executeSuspend:(id)arg1;
- (void)_allowClientOperationThrough:(id)arg1;
- (void)allowClientOperationThrough:(id)arg1;
@property(readonly, nonatomic) BOOL isExpensive;
@property(readonly, nonatomic) BOOL isDeserted;
- (void)_finishQueueIdlingAndSuspend:(BOOL)arg1;
- (void)sealShutAndCompact:(BOOL)arg1 allowNetworking:(BOOL)arg2;
- (void)resumeWithConnection:(id)arg1 reselect:(BOOL)arg2;
- (void)suspend;
- (void)yield;
@property(readonly) BOOL okToYield;
@property(readonly) BOOL hasClients;
- (unsigned long long)_clientCount;
- (BOOL)checkOut;
- (void)_tryToCheckInConnectionAndTryToIdle:(BOOL)arg1;
- (void)_checkInForOperation:(id)arg1;
- (void)checkInAsynchronously;
- (void)checkIn;
- (void)operationQueueDidIdle;
@property(retain) ICNFIMAPConnection *connection;
- (void)dealloc;
- (id)init;
- (id)initWithIMAPConnection:(id)arg1 mailbox:(id)arg2 pool:(id)arg3;

@end

