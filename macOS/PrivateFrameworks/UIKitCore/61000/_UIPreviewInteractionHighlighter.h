//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, UIControl, UIView, _UIInteractiveHighlightEffect;
@protocol UIInteraction, _UIInteractiveHighlighting;

@interface _UIPreviewInteractionHighlighter : NSObject
{
    UIView *_view;
    id <_UIInteractiveHighlighting> _interactiveHighlightView;
    UIControl *_compatibilityHighlightView;
    _UIInteractiveHighlightEffect *_interactiveHighlightEffect;
    NSArray *_accessoryHighlightEffects;
    _UIInteractiveHighlightEffect *_presentationControllerHighlightEffect;
    id <UIInteraction> _interaction;
    BOOL _animatesContentEffects;
    NSUUID *_contentAnimationIdentifier;
    BOOL _animatesBackgroundEffects;
    long long _preferredAnimationStyle;
    double _preferredMinimumScale;
    double _preferredMaximumScale;
    BOOL _shouldApplyEffectsOnProxyView;
    BOOL _shouldApplyContentEffects;
    BOOL _shouldApplyBackgroundEffects;
    BOOL _shouldEndWithCancelAnimation;
    BOOL _shouldTransferViewOwnership;
    BOOL _cancelsInteractionWhenScrolling;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _privateCompletionBlock;
    UIView *_customContainerView;
    UIView *_customBackgroundEffectView;
    CDUnknownBlockType _backgroundEffectApplyBlock;
}

@property(copy, nonatomic) CDUnknownBlockType backgroundEffectApplyBlock; // @synthesize backgroundEffectApplyBlock=_backgroundEffectApplyBlock;
@property(nonatomic) BOOL cancelsInteractionWhenScrolling; // @synthesize cancelsInteractionWhenScrolling=_cancelsInteractionWhenScrolling;
@property(nonatomic) BOOL shouldTransferViewOwnership; // @synthesize shouldTransferViewOwnership=_shouldTransferViewOwnership;
@property(retain, nonatomic) UIView *customBackgroundEffectView; // @synthesize customBackgroundEffectView=_customBackgroundEffectView;
@property(nonatomic) __weak UIView *customContainerView; // @synthesize customContainerView=_customContainerView;
@property(copy, nonatomic) CDUnknownBlockType privateCompletionBlock; // @synthesize privateCompletionBlock=_privateCompletionBlock;
@property(nonatomic) BOOL shouldEndWithCancelAnimation; // @synthesize shouldEndWithCancelAnimation=_shouldEndWithCancelAnimation;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(nonatomic) BOOL shouldApplyBackgroundEffects; // @synthesize shouldApplyBackgroundEffects=_shouldApplyBackgroundEffects;
@property(nonatomic) BOOL shouldApplyContentEffects; // @synthesize shouldApplyContentEffects=_shouldApplyContentEffects;
@property(nonatomic) BOOL shouldApplyEffectsOnProxyView; // @synthesize shouldApplyEffectsOnProxyView=_shouldApplyEffectsOnProxyView;
- (void).cxx_destruct;
- (void)_setHighlighted:(BOOL)arg1 forViewIfNeeded:(id)arg2;
- (void)_prepareAccessoryViewsForScrollView:(id)arg1 environment:(id)arg2;
- (void)_prepareContentEffectsForInteraction:(id)arg1;
- (void)_applyHighlightEffectsToViewControllerDuringCancellation:(id)arg1;
- (void)_viewControllerPresentationDidEnd;
- (void)_delayedViewControllerPresentationDidCancel;
- (void)_animateForDelayedViewControllerPresentation;
- (void)_animateAlongsideViewControllerPresentationDismiss;
- (void)_prepareForViewControllerPresentation:(id)arg1;
- (void)_finalizeAfterInteraction;
- (void)_finalizeAfterInteractionIfNeeded;
- (void)_updateFromInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3;
- (void)_prepareForInteraction:(id)arg1;
@property(readonly, nonatomic) _UIInteractiveHighlightEffect *interactiveHighlightEffect;
- (id)initWithView:(id)arg1;

@end

