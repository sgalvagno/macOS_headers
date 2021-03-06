//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EFLoggable.h"

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

+ (id)remoteInterface;
+ (id)signpostLog;
+ (id)log;
- (void).cxx_destruct;
@property(retain) EMRemoteConnection *connection; // @synthesize connection=_connection;
- (unsigned long long)numberOfPendingMessages;
- (BOOL)isProcessing;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (void)suspendDeliveryQueue;
- (BOOL)outboxContainsMessageFromAccount:(id)arg1;
- (id)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)initWithRemoteConnection:(id)arg1;
- (unsigned long long)signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

