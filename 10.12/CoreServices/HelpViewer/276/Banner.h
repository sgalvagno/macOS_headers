//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BarBackground, NSView, WebViewPlus;

@interface Banner : NSObject
{
    NSView *bannerContents;
    NSView *firstKeySubview;
    NSView *lastKeySubview;
    WebViewPlus *_webView;
    NSView *_viewBelowBanner;
    BarBackground *_bannerView;
    BOOL _animationInProgress;
    BOOL _animatingIntoPlace;
    struct CGRect _animationEnclosingRect;
    double _animationStartTime;
    double _animationDuration;
}

+ (BOOL)bannerHasBottomBorder;
+ (int)bannerSortOrder;
+ (id)bannerColor;
+ (double)animationDuration;
- (void).cxx_destruct;
- (void)willUninstallBannerView;
- (void)willInstallBannerView;
- (void)webViewDidMoveToWindow;
- (id)webView;
- (void)viewBelowBannerWasResizedFromFrame:(struct CGRect)arg1 animationProgress:(double)arg2 installing:(BOOL)arg3;
- (void)uninstallWithAnimation:(BOOL)arg1;
- (void)uninstall:(id)arg1;
- (BOOL)isInstalled;
- (void)installWithAnimation:(BOOL)arg1;
- (void)didUninstallBannerView;
- (void)didInstallBannerView;
- (void)detachWebView;
- (long long)compareBanners:(id)arg1;
- (id)bannerView;
- (id)bannerNibName;
- (id)initWithWebView:(id)arg1;
- (id)init;
- (void)_setViewBelowBanner:(id)arg1;
- (void)_populateBannerViewFromNib:(id)arg1;
- (void)_moveBannerIntoPlace:(BOOL)arg1 withAnimation:(BOOL)arg2;
- (id)_createBannerView;
- (struct CGRect)_computeAnimationEnclosingRect;
- (void)_advanceAnimation;

@end

