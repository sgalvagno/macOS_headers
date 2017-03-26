//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <MultipeerConnectivity/MCNearbyServiceBrowserDelegate-Protocol.h>
#import <MultipeerConnectivity/MCSessionPrivateDelegate-Protocol.h>

@class MCNearbyServiceBrowser, MCPeerID, MCSession, NSArrayController, NSBundle, NSButton, NSMutableArray, NSNumber, NSObject, NSString;
@protocol MCBrowserViewControllerDelegate, OS_dispatch_queue;

@interface MCBrowserViewController : NSViewController <MCSessionPrivateDelegate, MCNearbyServiceBrowserDelegate>
{
    unsigned long long _minimumNumberOfPeers;
    unsigned long long _maximumNumberOfPeers;
    id <MCBrowserViewControllerDelegate> _delegate;
    MCNearbyServiceBrowser *_browser;
    MCSession *_session;
    MCPeerID *_myPeerID;
    NSMutableArray *_peers;
    NSButton *_doneButton;
    NSButton *_cancelButton;
    NSBundle *_frameworkBundle;
    NSArrayController *_peersArrayController;
    NSNumber *_spinning;
    NSString *_sectionTitle;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    unsigned long long _invitedPeersCount;
    unsigned long long _declinedPeersCount;
}

@property(nonatomic) unsigned long long declinedPeersCount; // @synthesize declinedPeersCount=_declinedPeersCount;
@property(nonatomic) unsigned long long invitedPeersCount; // @synthesize invitedPeersCount=_invitedPeersCount;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(copy) NSString *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain) NSNumber *spinning; // @synthesize spinning=_spinning;
@property(retain) NSArrayController *peersArrayController; // @synthesize peersArrayController=_peersArrayController;
@property(retain) NSBundle *frameworkBundle; // @synthesize frameworkBundle=_frameworkBundle;
@property(retain) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain) NSButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain) NSMutableArray *peers; // @synthesize peers=_peers;
@property(copy) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;
@property(retain) MCSession *session; // @synthesize session=_session;
@property(retain) MCNearbyServiceBrowser *browser; // @synthesize browser=_browser;
- (void)session:(id)arg1 didFinishReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 atURL:(id)arg4 withError:(id)arg5 propagate:(char *)arg6;
- (void)session:(id)arg1 didStartReceivingResourceWithName:(id)arg2 fromPeer:(id)arg3 withProgress:(id)arg4 propagate:(char *)arg5;
- (void)session:(id)arg1 didReceiveStream:(id)arg2 withName:(id)arg3 fromPeer:(id)arg4 propagate:(char *)arg5;
- (void)session:(id)arg1 peer:(id)arg2 didChangeState:(long long)arg3 propagate:(char *)arg4;
- (void)session:(id)arg1 didReceiveData:(id)arg2 fromPeer:(id)arg3 propagate:(char *)arg4;
- (id)nearbySectionTitle;
- (void)updateSectionTitle;
- (BOOL)minimumNumberOfPeersReached;
- (BOOL)maximumNumberOfPeersReached;
- (void)browser:(id)arg1 lostPeer:(id)arg2;
- (void)browser:(id)arg1 foundPeer:(id)arg2 withDiscoveryInfo:(id)arg3;
- (void)invitePeerClicked:(id)arg1;
- (void)verifyPeerIsAccountedFor:(id)arg1;
- (void)addPeer:(id)arg1 isAdvertising:(BOOL)arg2;
- (id)dictionaryForPeer:(id)arg1;
- (id)detailStringForPeerState:(int)arg1;
- (void)cancelTapped:(id)arg1;
- (void)peer:(id)arg1 changedStateTo:(int)arg2;
- (void)updateDoneButton;
- (void)doneTapped:(id)arg1;
@property unsigned long long maximumNumberOfPeers;
@property unsigned long long minimumNumberOfPeers;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
@property(readonly, copy) NSString *description;
@property __weak id <MCBrowserViewControllerDelegate> delegate;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithServiceType:(id)arg1 session:(id)arg2;
- (id)initWithBrowser:(id)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

