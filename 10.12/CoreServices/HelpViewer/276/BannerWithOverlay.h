//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "Banner.h"

#import "NSAnimationDelegate-Protocol.h"
#import "NSFileManagerDelegate-Protocol.h"

@class FadingOverlay, NSAnimation, NSString;

@interface BannerWithOverlay : Banner <NSAnimationDelegate, NSFileManagerDelegate>
{
    FadingOverlay *_overlay;
    BOOL _overlayDisabled;
    BOOL _overlayRemovedWhileWebViewOffscreen;
    NSAnimation *_fadeInAnimation;
}

+ (Class)overlayViewClass;
+ (BOOL)overlayIgnoresMouseEvents;
+ (BOOL)overlayAppearsAutomatically;
- (void).cxx_destruct;
- (void)startFadeIn;
- (void)willDetachOverlay;
- (void)willAttachOverlay;
- (BOOL)showOverlay;
- (void)setOverlayDisabled:(BOOL)arg1;
- (id)overlay;
- (BOOL)isShowingFadingOverlay;
- (BOOL)isOverlayDisabled;
- (void)hideOverlay;
- (void)fadingOverlayNeedsUpdateInRect:(struct CGRect)arg1;
- (void)barBackgroundWillStartLiveResize:(id)arg1;
- (void)barBackgroundDidEndLiveResize:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)viewBelowBannerWasResizedFromFrame:(struct CGRect)arg1 animationProgress:(double)arg2 installing:(BOOL)arg3;
- (void)webViewDidMoveToWindow;
- (void)detachWebView;
- (id)initWithWebView:(id)arg1;
- (id)_fadingOverlayTargetView;
- (void)_animateFadeIn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

