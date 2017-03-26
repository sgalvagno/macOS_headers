//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MailCore/MCTask.h>

#import <Mail/MCBodyTracker-Protocol.h>
#import <Mail/MFEWSBodyFetchOperationDelegate-Protocol.h>
#import <Mail/MFEWSBodyPersistOperationDelegate-Protocol.h>

@class MFEWSBodyFetchOperation, MFEWSBodyPersistOperation, NSMutableDictionary, NSMutableSet, NSString;

@interface MFEWSVisibleBodyFetchTask : MCTask <MFEWSBodyFetchOperationDelegate, MFEWSBodyPersistOperationDelegate, MCBodyTracker>
{
    MFEWSBodyFetchOperation *_fetchOperation;
    MFEWSBodyPersistOperation *_persistOperation;
    NSMutableSet *_messagesToFetch;
    NSMutableDictionary *_fetchedBodiesByMessage;
    NSMutableDictionary *_fetchedCalendarEventsByMessage;
}

- (void).cxx_destruct;
- (void)bodyTracker:(id)arg1 didCacheBodiesForMessages:(id)arg2;
- (void)bodyPersistOperation:(id)arg1 didPersistBodyForMessages:(id)arg2;
- (void)bodyFetchOperation:(id)arg1 didFetchBodiesByMessage:(id)arg2 calendarEventsByMessage:(id)arg3 missedMessages:(id)arg4;
- (void)operationFinished:(id)arg1;
- (id)nextPersistenceOperation;
- (id)nextNetworkOperation;
- (void)recalculatePriorities;
- (void)cacheVisibleMessages:(id)arg1;
@property(retain, nonatomic) MFEWSBodyPersistOperation *persistOperation;
@property(retain, nonatomic) MFEWSBodyFetchOperation *fetchOperation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

