//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreMediaStream/MSSharingManager-Protocol.h>
#import <CoreMediaStream/MSSharingProtocolDelegate-Protocol.h>

@class MSMediaStreamDaemon, MSSharingProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSTimer;
@protocol MSSharingManagerDelegate;

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate>
{
    NSString *_personID;
    NSString *_manifestPath;
    NSArray *_shares;
    NSMutableArray *_sharesWithLocalModifications;
    MSSharingProtocol *_protocol;
    int _state;
    BOOL _requestCurrentStateRequested;
    NSMutableArray *_invitationQueue;
    NSMutableArray *_invitationResponseQueue;
    NSMutableDictionary *_manageShareByPersonID;
    NSMutableArray *_deleteQueue;
    NSTimer *_manageShareDebounceTimer;
    id <MSSharingManagerDelegate> _delegate;
    MSMediaStreamDaemon *_daemon;
}

+ (void)forgetPersonID:(id)arg1;
+ (void)abortAllActivities;
+ (id)_clearInstantiatedSharingManagersByPersonID;
+ (id)existingSharingManagerForPersonID:(id)arg1;
+ (id)sharingManagerForPersonID:(id)arg1;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSSharingManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *personID; // @synthesize personID=_personID;
- (void).cxx_destruct;
- (void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2;
- (void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2;
- (void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2;
- (void)abort;
- (void)_performNextQueuedAction;
- (void)_requestCurrentShareState;
- (void)_sendNextManagedShare;
- (void)_sendNextInvitationResponse;
- (void)_sendNextInvitation;
- (void)_sendNextDeletion;
- (id)_sharesWithLocalModifications;
- (void)refreshCurrentShareState;
- (void)removeShare:(id)arg1;
- (void)modifyShare:(id)arg1;
- (void)_shareDebounceTimerDidFire:(id)arg1;
- (void)respondToInvitation:(id)arg1 accept:(BOOL)arg2;
- (void)sendInvitationsForShares:(id)arg1;
@property(retain, nonatomic) NSArray *shares;
- (void)dealloc;
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

