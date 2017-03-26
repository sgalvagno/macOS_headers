//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterUI/UXViewController.h>

#import <GameCenterUI/GKViewController-Protocol.h>

@class GKLocalPlayer, GKRemoteViewController;
@protocol GKHostedSignInViewControllerDelegate;

@interface GKHostedSignInViewController : UXViewController <GKViewController>
{
    id _remoteViewController;
    BOOL _didRequestRemoteViewController;
    GKLocalPlayer *_localPlayer;
    id <GKHostedSignInViewControllerDelegate> _delegateWeak;
}

@property(retain) GKLocalPlayer *localPlayer; // @synthesize localPlayer=_localPlayer;
@property BOOL didRequestRemoteViewController; // @synthesize didRequestRemoteViewController=_didRequestRemoteViewController;
@property(retain, nonatomic) GKRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
- (BOOL)remoteViewControllerRequestingDismiss:(id)arg1;
- (void)remoteViewController:(id)arg1 receivedMessageFromService:(id)arg2;
- (struct CGSize)_gkSizeForDialogController;
- (void)viewDidDisappear;
- (void)setNavigationController:(id)arg1;
- (void)requestRemoteViewController;
- (void)loadView;
- (id)view;
- (void)dealloc;
- (id)initWithLocalPlayer:(id)arg1;
@property id <GKHostedSignInViewControllerDelegate> delegate; // @synthesize delegate=_delegateWeak;

@end

