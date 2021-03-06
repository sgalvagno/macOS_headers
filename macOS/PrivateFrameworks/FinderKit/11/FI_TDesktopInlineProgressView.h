//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TUpdateLayerView.h>

#import "CAAnimationDelegate.h"
#import "CALayerDelegate.h"
#import "TTrackingAreaOwnerProtocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FI_TDesktopInlineProgressView : FI_TUpdateLayerView <TTrackingAreaOwnerProtocol, CAAnimationDelegate, CALayerDelegate>
{
    struct TNSRef<FI_TInlineProgressHostLayer, void> _inlineProgressHostLayer;
    function_b1fce659 _cancelButtonHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)updateTrackingAreas;
- (void)stopTrackingCancelButton;
- (void)startTrackingCancelButton;
- (BOOL)acceptsFirstResponder;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)completeAnimation;
- (void)setCancelButtonHandler:(const function_b1fce659 *)arg1;
- (void)setIconFrame:(const struct CGRect *)arg1 baselineOffset:(double)arg2;
- (struct CGRect)iconFrame;
- (double)baselineOffset;
@property(nonatomic) _Bool canCancel; // @dynamic canCancel;
@property(nonatomic) unsigned int state; // @dynamic state;
- (void)setPercentCompleteWithoutAnimation:(double)arg1;
@property(nonatomic) double percentComplete; // @dynamic percentComplete;
- (void)initCommon;
- (void)dealloc;
- (id)initWithFrame:(const struct CGRect *)arg1 canCancel:(_Bool)arg2 initialPercentComplete:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

