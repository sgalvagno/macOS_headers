//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/NSUICollectionReusableView.h>

@class NSButton, NSProgressIndicator, NSTextField;

@interface GKMultiplayerFooterView : NSUICollectionReusableView
{
    NSTextField *_statusLabel;
    NSProgressIndicator *_spinner;
    NSButton *_cancelButton;
    NSButton *_inviteButton;
    NSButton *_playButton;
}

+ (id)footerView;
@property NSButton *playButton; // @synthesize playButton=_playButton;
@property NSButton *inviteButton; // @synthesize inviteButton=_inviteButton;
@property NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property NSProgressIndicator *spinner; // @synthesize spinner=_spinner;
@property NSTextField *statusLabel; // @synthesize statusLabel=_statusLabel;
- (void)removeAllAnimationsFromBubbles;
- (void)scatterOutBubblesWithCompletion:(CDUnknownBlockType)arg1;
- (void)setBubblesHidden:(BOOL)arg1;
- (void)floatInBubbles;
- (void)playButtonPressed:(id)arg1;
- (void)shareButtonPressed:(id)arg1;
- (void)inviteButtonPressed:(id)arg1;
- (void)cancelButtonPressed:(id)arg1;
- (void)setInvitePlayButtonsHidden:(BOOL)arg1;
- (void)setStatusHidden:(BOOL)arg1;
- (void)showFooterStatus:(id)arg1;
- (void)awakeFromNib;

@end

