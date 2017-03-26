//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreMediaStream/MSCupidStateMachine.h>

#import <CoreMediaStream/MSDeleteStreamsProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSDeleter-Protocol.h>

@class MSDeleteStreamsProtocol, MSMediaStreamDaemon, MSObjectQueue, NSMutableArray, NSString;
@protocol MSDeleterDelegate;

@interface MSDeleter : MSCupidStateMachine <MSDeleter, MSDeleteStreamsProtocolDelegate>
{
    MSDeleteStreamsProtocol *_protocol;
    int _state;
    MSObjectQueue *_deleteQueue;
    NSMutableArray *_requestedDeleteWrappers;
    int _batchSize;
    int _maxErrorCount;
    id <MSDeleterDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
}

+ (BOOL)isInRetryState;
+ (void)abortAllActivities;
+ (void)stopAllActivities;
+ (id)personIDsWithOutstandingActivities;
+ (id)nextActivityDateForPersonID:(id)arg1;
+ (id)nextActivityDate;
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;
+ (void)forgetPersonID:(id)arg1;
+ (id)_clearInstantiatedDeletersByPersonID;
+ (id)existingDeleterForPersonID:(id)arg1;
+ (id)deleterForPersonID:(id)arg1;
@property(nonatomic) int batchSize; // @synthesize batchSize=_batchSize;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSDeleterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)_isInRetryState;
- (void)stop;
- (void)abort;
- (void)_forget;
- (void)_abort;
- (id)_abortedError;
- (void)_stop;
- (void)deleteProtocol:(id)arg1 didFinishSuccessfulCollections:(id)arg2 failedCollections:(id)arg3 error:(id)arg4;
- (void)deleteProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)_sendDeleteRequest;
- (void)performOutstandingActivities;
- (void)deleteAssetCollections:(id)arg1;
- (BOOL)_isAllowedToDelete;
- (void)_updateMasterManifest;
- (void)dealloc;
- (void)deactivate;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

