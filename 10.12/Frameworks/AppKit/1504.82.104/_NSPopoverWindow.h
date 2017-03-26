//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSPopover, NSPopoverFrame;

__attribute__((visibility("hidden")))
@interface _NSPopoverWindow : NSPanel
{
    NSPopover *_popover;
    id _popoverAccessibilityParent;
    BOOL _animates;
    BOOL _nonActivating;
}

+ (Class)frameViewClassForStyleMask:(unsigned long long)arg1;
+ (unsigned long long)_validateStyleMask:(unsigned long long)arg1;
+ (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4 hasTitlebar:(BOOL)arg5;
+ (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 appearance:(id)arg2 anchorSize:(struct CGSize)arg3 contentInset:(struct NSEdgeInsets)arg4 hasTitlebar:(BOOL)arg5;
+ (id)keyPathsForValuesAffectingAnchorPoint;
@property BOOL animates; // @synthesize animates=_animates;
@property(retain) id popoverAccessibilityParent; // @synthesize popoverAccessibilityParent=_popoverAccessibilityParent;
@property NSPopover *_popover; // @synthesize _popover;
- (float)_backdropBleedAmount;
- (unsigned long long)styleMask;
- (BOOL)_isNonactivatingPanel;
- (void)_setNonactivatingPanel:(BOOL)arg1;
- (id)presentationWindowForError:(id)arg1 originatedInWindow:(id)arg2;
- (BOOL)canBecomeMainWindow;
- (BOOL)canBecomeKeyWindow;
- (void)performClose:(id)arg1;
- (void)cancelOperation:(id)arg1;
- (BOOL)_ignoreForFullScreenTransitionSnapshot;
- (BOOL)_ignoreForFullScreenTransition;
- (BOOL)_wantsSnapshotProxyWindowForOrderOutAnimation;
- (double)animationResizeTime:(struct CGRect)arg1;
- (id)_windowTransformAnimationForOrdering:(long long)arg1 animationType:(long long)arg2 interruptingAnimation:(id)arg3;
- (void)_setOrderOutAnimationType:(long long)arg1;
- (long long)_orderOutAnimationType;
- (void)_setOrderFrontAnimationType:(long long)arg1;
- (long long)_orderFrontAnimationType;
- (void)mouseDown:(id)arg1;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (id)_parentWindowForAddingToMovementGroupWithProposedParent:(id)arg1;
- (long long)_childWindowOrderingPriority;
- (void)setParentWindow:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)_fromConstraintsSetWindowFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
@property long long popoverAppearance; // @dynamic popoverAppearance;
@property struct NSEdgeInsets contentInset; // @dynamic contentInset;
@property struct CGSize anchorSize; // @dynamic anchorSize;
@property unsigned long long anchorEdge; // @dynamic anchorEdge;
@property struct CGPoint anchorPoint; // @dynamic anchorPoint;
- (BOOL)_shouldRemoveFromParentIfPossible;
- (void)dealloc;
- (id)_initWithPopover:(id)arg1;
- (BOOL)_canBeSnappingTarget;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
@property(readonly) NSPopoverFrame *_popoverFrame;
- (BOOL)_hasActiveDragTypes;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

@end

