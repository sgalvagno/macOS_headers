//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSImageView, NSTextField, NSView;

@interface GKNotificationBannerWindow : NSWindow
{
    NSTextField *label;
    NSImageView *iconView;
    BOOL _canTransitionToPlayerAvatar;
    NSView *_iconContainerView;
    NSImageView *_avatarImageView;
}

+ (id)notificationBannerWithTitle:(id)arg1 message:(id)arg2;
+ (id)semaphore;
+ (id)queue;
- (void).cxx_destruct;
@property BOOL canTransitionToPlayerAvatar; // @synthesize canTransitionToPlayerAvatar=_canTransitionToPlayerAvatar;
@property(retain) NSImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property NSView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain) NSImageView *iconView; // @synthesize iconView;
- (void)showWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showPlayerAvatarAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)transitionToPlayerAvatar;
- (void)startLoadingPlayerAvatar;
- (void)showForDuration:(double)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)sendEvent:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (id)icon;
- (void)setIcon:(id)arg1;

// Remaining properties
@property(retain) NSView *contentView; // @dynamic contentView;

@end

