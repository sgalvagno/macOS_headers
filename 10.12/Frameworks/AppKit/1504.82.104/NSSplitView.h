//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/_NSTransientUIElement-Protocol.h>

@class NSArray, NSColor, NSString;
@protocol NSSplitViewDelegate;

@interface NSSplitView : NSView <_NSTransientUIElement>
{
    id _variables;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)defaultAnimationForKey:(id)arg1;
+ (void)initialize;
+ (id)_autosaveDefaultsKeyForName:(id)arg1;
- (double)_automaticMaximumSizeForArrangedView:(id)arg1;
- (void)_uncollapseWithOverlayArrangedView:(id)arg1 animated:(BOOL)arg2;
- (void)_uncollapseArrangedView:(id)arg1 animated:(BOOL)arg2;
- (void)_uncollapseArrangedView:(id)arg1;
- (void)_collapseArrangedView:(id)arg1 animated:(BOOL)arg2;
- (void)_setArrangedView:(id)arg1 isCollapsed:(BOOL)arg2;
- (BOOL)_isArrangedViewAnimating:(id)arg1;
- (struct CGRect)_resizeViewsForOffset:(long long)arg1 coordinate:(double)arg2;
- (void)_setSplitViewControllerAllowsPropertyChange:(BOOL)arg1;
- (BOOL)_splitViewControllerAllowsPropertyChange;
- (BOOL)_canMakePropertyChange;
- (BOOL)_splitViewOwnedBySplitViewController;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_stopObservingView:(id)arg1;
- (void)_startObservingView:(id)arg1;
- (void)_stopObservingViews:(id)arg1;
- (void)_startObservingViews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)_compatibility_seemsToBeVertical;
- (void)encodeWithCoder:(id)arg1;
- (void)restoreStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)_constraintsFreezingFrameForView:(id)arg1 identifierIndex:(long long)arg2;
- (id)_constraintsForPerpendicularAxisForView:(id)arg1 identifierIndex:(long long)arg2 divider:(BOOL)arg3;
- (id)_constraintsForStacking:(id)arg1 toView:(id)arg2 previousIndex:(long long)arg3 identifierIndex:(long long)arg4 spacing:(double)arg5 canLiveCollapse:(BOOL)arg6 forDivider:(BOOL)arg7;
- (id)_constraintsForTrailingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(BOOL)arg4 forOverlay:(BOOL)arg5;
- (id)_constraintsForLeadingView:(id)arg1 identifierIndex:(long long)arg2 spacing:(double)arg3 canLiveCollapse:(BOOL)arg4 forOverlay:(BOOL)arg5;
- (BOOL)_needsLayoutEngine;
- (void)_setLayoutEngine:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (void)_updateConstraintsForProportionalResizing;
- (BOOL)_needsUpdateConstraintsForProportionalResizing;
- (void)updateConstraints;
- (void)_updateSizeConstraints;
- (void)_updateStackConstraints;
- (void)_removeStackConstraints;
- (void)_invalidateStackConstraints;
- (void)_invalidateStackAndSizeConstraints;
- (void)_invalidateSizeConstraints;
- (void)setHoldingPriority:(float)arg1 forSubviewAtIndex:(long long)arg2;
- (float)holdingPriorityForSubviewAtIndex:(long long)arg1;
- (void)setStayPutPriority:(float)arg1 forSubviewAtIndex:(long long)arg2;
- (float)stayPutPriorityForSubviewAtIndex:(long long)arg1;
- (BOOL)_usesAlternateDrag;
- (BOOL)_delegateImplementsAutolayoutIncompatibleMethods;
- (BOOL)_splitViewUseConstraintBasedLayout;
- (BOOL)_nsib_splitViewIntegralizesInUserSpace;
- (void)_nsib_setSplitViewIntegralizesInUserSpace:(BOOL)arg1;
- (BOOL)_nsib_splitViewAlwaysLaysOutAccordingToAlignmentRects;
- (void)_nsib_setSplitViewAlwaysLaysOutAccordingToAlignmentRects:(BOOL)arg1;
- (void)_windowChangedKeyState;
- (void)willRemoveSubview:(id)arg1;
- (void)_removeSubview:(id)arg1;
- (BOOL)_inDividerLiveResize;
- (BOOL)_inWindowLiveResize;
- (void)_didMeasureMinSizeForFullscreen;
- (void)_willMeasureMinSizeForFullscreen;
- (void)_updateConstraintsForMinMaxMeasure;
- (void)_resetUserPreferredThicknessAfterUserResizeWithDelay;
- (void)_cancelResetUserPreferredThicknessAfterUserResizeWithDelay;
- (void)_windowDidEndLiveResize:(id)arg1;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (BOOL)_usesExplicitSizeForAutoCollapse;
- (void)_setExplicitAutocollapseThicknessDisabled:(BOOL)arg1;
- (BOOL)_explicitAutocollapseThicknessDisabled;
- (void)_setMinimumSizeForInlineSidebars:(double)arg1;
- (double)_minimumSizeForInlineSidebars;
- (BOOL)_canAutocollapseArrangedView:(id)arg1;
- (BOOL)_canLiveCollapseArrangedView:(id)arg1;
- (BOOL)_liveCollapseIsCanned;
- (BOOL)_canLiveCollapseArrangedViews;
- (void)viewWillDraw;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2;
- (void)_adjustArrangedViewsIfNecessary;
- (BOOL)shouldBeTreatedAsInkEvent:(id)arg1;
- (void)setAutoresizesSubviews:(BOOL)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)layout;
- (BOOL)_checkForAutoUncollapsedViews;
- (BOOL)_checkForEarlyCollapseArrangedViews;
- (void)_doLayerBackedLayout;
- (void)setLayer:(id)arg1;
- (id)_makeShadowView;
- (void)_updateLayerDividersIfNeeded;
- (id)_priorityGroups;
- (BOOL)_validateArrangedViewFrames;
- (void)resetCursorRects;
- (void)replaceSubview:(id)arg1 with:(id)arg2;
- (BOOL)preservesContentDuringLiveResize;
- (BOOL)mouseDownCanMoveWindow;
- (void)_invalidateCursorRectsAndDragRegion;
- (void)mouseDown:(id)arg1;
- (struct CGRect)_opaqueRectForWindowMoveWhenInTitlebar;
- (id)_cursorOfDividerAtIndex:(unsigned long long)arg1 position:(double)arg2 dragLimits:(CDStruct_0a28aba5)arg3;
- (BOOL)isOpaque;
- (BOOL)_allSubviewsAreOpaque;
- (BOOL)isFlipped;
- (id)_hitTestToBlockWindowResizing:(struct CGPoint)arg1 forResizeDirection:(long long)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (long long)_visualIndexOfDividerForLocation:(struct CGPoint)arg1 andReturnFrame:(struct CGRect *)arg2;
- (long long)_indexOfDividerForLocation:(struct CGPoint)arg1 andReturnFrame:(struct CGRect *)arg2;
- (BOOL)_canCollapseArrangedView:(id)arg1;
- (struct CGRect)_additionalEffectiveFrameOfDividerAtIndex:(long long)arg1;
- (struct CGRect)_effectiveFrameForDrawnFrame:(struct CGRect)arg1 ofDividerAtIndex:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateLayer;
- (id)_makeDividerLayerWithFrame:(struct CGRect)arg1;
- (void)_updateDividerLayer:(id)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)_removeDividerLayers;
- (void)_setDividerLayers:(id)arg1;
- (id)_dividerLayers;
- (BOOL)_isSubclassThatOverridesDrawingMethods;
- (BOOL)wantsUpdateLayer;
- (BOOL)_shouldDrawDivider;
- (void)_windowWillExitFullScreen:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)sortSubviewsUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)setSubviews:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_addSubview:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)_sortSubviews;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)isPaneSplitter;
- (void)setIsPaneSplitter:(BOOL)arg1;
- (void)setPosition:(double)arg1 ofDividerAtIndex:(long long)arg2;
- (double)_presentDividerDragResult:(CDStruct_8e9e3288)arg1 withParams:(id)arg2;
- (double)_doConstraintBasedPresentDividerDragResult:(CDStruct_8e9e3288)arg1 withParams:(id)arg2;
- (long long)_visualDividerIndexForLogicalIndex:(long long)arg1;
- (long long)_logicalDividerIndexForVisualIndex:(long long)arg1;
- (id)_trailingViewForLogicalSeparatorIndex:(long long)arg1;
- (id)_leadingViewForLogicalSeparatorIndex:(long long)arg1;
- (CDStruct_8e9e3288)_resultOfDividerDragToLeadingPosition:(double)arg1 withParams:(id)arg2;
- (id)_dragParamsOfDividerAtVisualIndex:(unsigned long long)arg1;
- (id)_dividerDraggingAnchor;
- (double)_constantFromDividerPosition:(double)arg1 toAnchorView:(id)arg2;
- (double)_distanceFromTrailingEdgeOfView:(id)arg1 toAnchor:(id)arg2;
- (double)_trailingDistanceFromSelf:(struct CGRect)arg1;
- (double)_leadingDistanceFromSelf:(struct CGRect)arg1;
- (CDStruct_0a28aba5)_dragLimitsOfDividerAtLogicalIndex:(unsigned long long)arg1;
- (double)_unscaledDividerThickness;
- (double)maxPossiblePositionOfDividerAtIndex:(long long)arg1;
- (double)minPossiblePositionOfDividerAtIndex:(long long)arg1;
- (BOOL)isSubviewCollapsed:(id)arg1;
- (void)adjustSubviews;
- (void)_setFrameOrAlignmentRect:(struct CGRect)arg1 ofArrangedView:(id)arg2;
- (struct CGRect)_frameOrAlignmentRectOfArrangedView:(id)arg1;
- (BOOL)_arrangedViewsOrDividersHaveChangedSinceAdjustment;
- (void)_setArrangedViewsAreAdjusted:(BOOL)arg1;
- (void)_finishedMakingConnections;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (void)setUserInterfaceLayoutDirection:(long long)arg1;
- (long long)_effectiveUserInterfaceLayoutDirection;
- (BOOL)_shouldMirrorForRTL;
- (id)_dividerFrames;
- (double)_scaledDividerThickness;
- (BOOL)_shouldAdjustSizeOfArrangedView:(id)arg1;
- (BOOL)_hasHidableDividerAtLogicalIndex:(long long)arg1;
- (BOOL)_dividerIsHiddenAtLogicalIndex:(long long)arg1;
@property(readonly) double dividerThickness;
@property(readonly, copy) NSColor *dividerColor;
- (void)setDividerColor:(id)arg1;
- (BOOL)_hasBehaviorForLinkedOnOrAfter:(long long)arg1;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (void)_drawDividerDimpleInRect:(struct CGRect)arg1 indicatorOnly:(BOOL)arg2;
- (struct __CFString *)_currentStateKey;
- (struct __CFString *)_currentVerticalKey;
- (struct __CFString *)_currentDividerDimpleVariant;
- (BOOL)_isInTexturedWindow;
@property __weak id <NSSplitViewDelegate> delegate;
@property(copy) NSString *autosaveName;
@property long long dividerStyle;
@property(getter=isVertical) BOOL vertical;
- (long long)orientation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initVariables;
@property(readonly, copy) NSArray *arrangedSubviews;
- (void)_didRemoveArrangedSubview:(id)arg1;
- (void)_willRemoveArrangedSubview:(id)arg1;
- (void)_didAddArrangedSubview:(id)arg1;
- (void)_willAddArrangedSubview:(id)arg1;
- (void)insertArrangedSubview:(id)arg1 atIndex:(long long)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)addArrangedSubview:(id)arg1;
@property BOOL arrangesAllSubviews;
- (BOOL)isArrangedViewCollapsed:(id)arg1;
- (BOOL)_isArrangedViewOverlaid:(id)arg1;
- (void)_didRemoveOverlay:(id)arg1;
- (void)_willAddOverlayView:(id)arg1;
- (void)_overlayArrangedView:(id)arg1;
- (void)_uncollapseAndOverlayArrangedView:(id)arg1;
- (void)_fakeCollapse:(BOOL)arg1 arrangedView:(id)arg2 canOverlay:(BOOL)arg3 withHandler:(CDUnknownBlockType)arg4;
- (BOOL)_uncollapseArrangedView:(id)arg1 overlayIfNecessary:(BOOL)arg2;
@property(readonly) BOOL _canOverlayArrangedViews;
- (BOOL)_testingForOverlays;
@property(getter=isSpringLoaded) BOOL springLoaded;
- (void)_setInTransientSpringLoad:(BOOL)arg1;
- (BOOL)_inTransientSpringLoad;
- (void)_updateDividerViews;
- (id)_appearanceForDividerAtIndex:(unsigned long long)arg1;
- (long long)_blendingModeForDividerAtIndex:(unsigned long long)arg1;
- (BOOL)_dividerShouldBeVibrantAtIndex:(unsigned long long)arg1;
- (id)_customThickness;
- (id)_customDividerColor;
- (BOOL)_canUseDividerViewsAsSubviews;
- (void)_scheduleAutosaveArrangedViewLayoutIfNecessary;
- (void)_autosaveSubviewLayoutIfNecessary;
- (void)_autosaveArrangedViewLayoutIfNecessary;
- (id)_arrangedViewLayoutDescriptions;
- (BOOL)_walkLayoutDescriptionArray:(id)arg1 withFrameHandler:(CDUnknownBlockType)arg2;
- (void)_removeTrackingOverlayView:(id)arg1;
- (void)_addTrackingOverlayView:(id)arg1;
@property(setter=_setShowsOverlayMetrics:) BOOL _showsOverlayMetrics;
- (BOOL)_isArrangedViewAutoCollapsed:(id)arg1;
- (void)_setArrangedView:(id)arg1 isAutocollapsed:(BOOL)arg2;
- (void)_animatedAutoCollapseArrangedView:(id)arg1;
- (void)_autoCollapseArrangedView:(id)arg1;
- (void)_autoCollapseArrangedView:(id)arg1 animated:(BOOL)arg2;
@property(setter=_setAnimatesAutocollapses:) BOOL _animatesAutocollapses;
- (id)debugReasonForLayoutMode;
@property(readonly, copy) NSString *debugDescription;
- (id)_debugDividerType;
- (id)_debugLayoutType;
- (void)_resetUserPreferredThicknessFromSetAlignmentFrameForAllArrangedSubviews;
- (void)_removeUserPreferredThicknessForArrangedSubview:(id)arg1;
- (void)_resetUserPreferredThicknessFromLayoutAlignmentFrameForArrangedSubview:(id)arg1;
- (void)_resetUserPreferredThicknessFromSetAlignmentFrameForArrangedSubview:(id)arg1;
- (void)_setUserPreferredThickness:(double)arg1 forArrangedSubview:(id)arg2;
- (double)_userPreferredThicknessForArrangedSubview:(id)arg1;
- (void)_closeForToolbarPresentingOnWindow:(id)arg1;
- (void)_closeForSheetPresentingOnWindow:(id)arg1;
- (void)_closeForKeyDownEvent:(id)arg1;
- (void)_closeForNonDragOrResizeClickWithEvent:(id)arg1;
- (BOOL)_isAffectedByEventsInWindow:(id)arg1;
@property(readonly) long long _transientBehavior;
@property(setter=_setRegisteredTransientBehavior:) long long _registeredTransientBehavior;
- (id)_accessibilitySplitterRects;
- (id)accessibilitySizeOfChild:(id)arg1;
- (id)accessibilityPositionOfChild:(id)arg1;
- (BOOL)accessibilityIsChildFocusable:(id)arg1;
- (id)accessibilityHelpStringForChild:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityResetChildrenAttribute;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilitySplitterAtIndex:(unsigned long long)arg1;
- (BOOL)accessibilityIsSplittersAttributeSettable;
- (id)accessibilitySplittersAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly, getter=isDetached) BOOL detached;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

