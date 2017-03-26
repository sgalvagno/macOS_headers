//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSMutableArray, NSToolbarItem, NSToolbarView;

@interface NSToolbarItemViewer : NSView
{
    NSToolbarItem *_item;
    NSToolbarView *_toolbarView;
    NSMutableArray *_labelViews;
    struct CGRect _labelRect;
    double _labelHeight;
    struct CGSize _maxViewerSize;
    struct CGSize _minViewerSize;
    struct CGRect _minIconFrame;
    struct CGRect _minLabelFrame;
    struct _NSToolbarMotion *_motion;
    double _xOriginForLayout;
    double _iconWidthForLayout;
    double _forcibleFrameWidthForLayout;
    struct {
        unsigned int drawsIconPart:1;
        unsigned int drawsLabelPart:1;
        unsigned int iconAreaIncludesLabelArea:1;
        unsigned int transparentBackground:1;
        unsigned int labelOnlyShowsAsPopupMenu:1;
        unsigned int inMotion:1;
        unsigned int inRecursiveDisplay:1;
        unsigned int RESERVED1:1;
        unsigned int needsViewerLayout:1;
        unsigned int needsModeConfiguration:1;
        unsigned int inPaletteView:1;
        unsigned int returnFocusToWindowAfterClick:1;
        unsigned int needsInitialAutovalidation:1;
        unsigned int needsRedrawForChangeInActiveState:1;
        unsigned int watchingBackgroundChangedNotification:1;
        unsigned int accessibilityAddedDescriptionToSubelements:1;
        unsigned int UNUSED:16;
    } _tbivFlags;
}

@property(nonatomic) double forcibleFrameWidthForLayout; // @synthesize forcibleFrameWidthForLayout=_forcibleFrameWidthForLayout;
@property(nonatomic) double iconWidthForLayout; // @synthesize iconWidthForLayout=_iconWidthForLayout;
@property(nonatomic) double xOriginForLayout; // @synthesize xOriginForLayout=_xOriginForLayout;
- (id)_toolbarView;
- (void)_menuFormRepresentationChanged;
- (void)_itemChangedLabelOrPaletteLabel;
- (void)_itemLayoutChanged;
- (void)_itemChangedToolTip;
- (void)_itemEnabledStateChanged;
- (void)_itemChanged;
- (long long)_itemVisibilityPriority;
- (BOOL)_labelOnlyShowsAsPopupMenu;
- (BOOL)_isSizedSmallerThanMinWidth;
- (BOOL)_widthIsFlexible;
- (BOOL)_heightIsFlexible;
- (BOOL)_needsViewerLayout;
- (void)_setNeedsViewerLayout:(BOOL)arg1;
- (BOOL)_needsModeConfiguration;
- (void)_setNeedsModeConfiguration:(BOOL)arg1;
- (void)_endToolbarEditingMode;
- (void)_beginToolbarEditingMode;
- (void)_simulateClickInLabelView:(id)arg1 deferringPopUpsForAccessibility:(BOOL)arg2;
- (void)mouseDown:(id)arg1;
- (BOOL)_simultaneousSegmentAndLabelTrackingWithEvent:(id)arg1 forSegmentAtIndex:(long long)arg2 withLabelRect:(struct CGRect)arg3;
- (void)_segmentedControlDidChangeHighlightDuringTracking:(id)arg1;
- (BOOL)_supportsSimultaneousSegmentAndLabelTrackingWithEvent:(id)arg1 segment:(long long *)arg2;
- (void)mouseUp:(id)arg1;
- (BOOL)_shouldMinimizeWindowForEvent:(id)arg1;
- (void)trackMouseForPopupMenuFormRepresentation:(id)arg1;
- (void)trackMouseForPopupMenuFormRepresentation:(id)arg1 forItem:(id)arg2 forLabelView:(id)arg3;
- (void)_popUpMenuFormRepresentationInLabelView:(id)arg1;
- (struct CGSRegionObject *)_regionForOpaqueDescendants:(struct CGRect)arg1 forMove:(BOOL)arg2 forUnderTitlebar:(BOOL)arg3;
- (BOOL)_shouldPreventCustomViewFromDraggingWindow:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)performClick:(id)arg1;
- (void)labelOnlyMenuDidSendActionNotification:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)_selectLabelView:(id)arg1;
- (id)_initialLabelViewToSelectFromDirection:(long long)arg1;
- (id)_labelViewToSelectInDirection:(long long)arg1;
- (double)_spaceRequiredToSatisfySplitViewTrackingForMinimumLeftOrigin:(struct CGPoint)arg1 inWindow:(id)arg2;
- (BOOL)_isPartitionItem;
- (BOOL)_labelViewIsSelectable:(id)arg1;
- (BOOL)_allowsIndividualLabelViewSelection;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)acceptsFirstResponder;
- (BOOL)_acceptsFirstResponderInItem:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)setNeedsDisplay:(BOOL)arg1;
- (id)description;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)_setHighlighted:(BOOL)arg1 displayNow:(BOOL)arg2;
- (void)_setHighlighted:(BOOL)arg1 pieces:(unsigned long long)arg2 forItemAtIndex:(unsigned long long)arg3 displayNow:(BOOL)arg4;
- (long long)_backgroundStyleForLabelCell:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (BOOL)_reallyShouldDrawFocusAroundLabel;
- (void)updateLayer;
- (Class)_classToCheckForWantsUpdateLayer;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)_updateEnableStateOfLabelViews;
- (void)drawSelectionIndicatorInRect:(struct CGRect)arg1;
- (void)_drawSelectionIndicatorInRect:(struct CGRect)arg1 clipRect:(struct CGRect)arg2;
- (BOOL)_shouldDrawFocus;
- (BOOL)_useSquareToolbarSelectionHighlight;
- (BOOL)_useLeopardToolbarSelectionHighlight;
- (BOOL)_shouldDrawSelectionIndicator;
- (void)_recursiveDisplayAllDirtyWithLockFocus:(BOOL)arg1 visRect:(struct CGRect)arg2;
- (void)_drawWithImageCache;
- (void)_captureVisibleIntoImageCache;
- (BOOL)_hasImageCache;
- (void)_captureVisibleIntoLiveResizeCache;
- (BOOL)_wantsLiveResizeToUseCachedImage;
- (BOOL)preservesContentDuringLiveResize;
- (void)_windowChangedKeyState;
- (void)_endInsertionOptimization;
- (void)_startInsertionOptimization;
- (struct CGPoint)destination;
- (BOOL)isInMotion;
- (void)stepTowardsDestinationWithCurrentTime:(double)arg1;
- (void)setDestinationRect:(struct CGRect)arg1 targetIconWidth:(double)arg2 travelTimeInSeconds:(double)arg3;
- (void)_teardownMotionData;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)_setFrameAssumingLTR:(struct CGRect)arg1;
- (void)_setFrameOriginAssumingLTR:(struct CGPoint)arg1;
- (struct CGRect)_frameAssumingLTR;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)setLayer:(id)arg1;
- (void)_stopWatchingBackgroundGradientNotification;
- (void)_watchBackgroundGradientNotification;
- (void)_invalidateLabelViewsWhenLayerBacked:(id)arg1;
- (struct CGSize)minIconSize;
- (struct CGSize)minViewerSize;
- (struct CGSize)maxSize;
- (void)layoutToFitInIconWidth:(double)arg1;
- (double)frameWidthForIconWidth:(double)arg1;
- (void)layoutToFitInViewerFrameHeight:(double)arg1;
- (void)layoutToFitInMinimumIconSizeInWindow:(id)arg1;
- (void)layoutToFitInMinimumIconSize;
- (void)_hackUpTheItemSizesAndFrameToHaveSpaceFor10_11Borders;
- (void)configureForLayoutInDisplayMode:(unsigned long long)arg1 andSizeMode:(unsigned long long)arg2 inToolbarView:(id)arg3;
- (void)_configureLabelCellStringValue;
- (void)_noteToolbarSizeModeChanged;
- (void)_recomputeLabelHeight;
- (void)_computeLayoutInfoForIconViewSize:(struct CGSize)arg1 frameSize:(struct CGSize *)arg2 iconFrame:(struct CGRect *)arg3 labelFrame:(struct CGRect *)arg4;
- (struct CGAffineTransform)_getPixelAligningTransformForLayout;
- (double)_widthRequiredForLabelLayout;
- (BOOL)_itemCanBeDraggedInTemporaryEditingModeFromPoint:(struct CGPoint)arg1;
- (void)_updateLabelViewByLabelRectInWindow:(id)arg1;
- (void)_updateLabelViewByLabelRect;
- (const struct __NSToolbarMetrics *)_metrics;
- (struct CGRect)itemViewRect;
- (BOOL)isOpaque;
- (BOOL)transparentBackground;
- (void)setTransparentBackground:(BOOL)arg1;
- (void)dealloc;
- (id)_backgroundColorForFontSmoothing;
- (void)_clearToolbarView;
- (void)_setToolbarItem:(id)arg1;
- (id)item;
- (id)initWithItem:(id)arg1 forToolbarView:(id)arg2;
- (id)_firstLabelView;
- (void)_setLabelViewCount:(unsigned long long)arg1;
- (id)_labelFont;
- (Class)labelViewClass;
- (void)_accessibilityConfigureToolbarItem;
- (void)_accessibilityConfigureViewItemToolbarItem;
- (BOOL)element:(id)arg1 hasOverriddenAttribute:(id)arg2;
- (id)_accessibilityToolbarItemLabelAtIndex:(unsigned long long)arg1;
- (id)_accessibilityToolbarItemLabel;
- (void)_accessibilityShowMenu:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)arg1;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsTitleAttributeSettable;
- (id)accessibilityTitleAttribute;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsIgnored;
- (Class)_accessibilityToolbarItemViewerHelperClass;
- (long long)_accessibilityToolbarItemViewerConfiguration;
- (id)_accessibilityLabelElements;
- (id)_accessibilityTitleElement;
- (id)_accessibilityParentAdjustedFocusedUIElement:(id)arg1;
- (id)_accessibilityParentAdjustedHitTestElement:(id)arg1 atLocation:(id)arg2;
- (BOOL)_accessibilityIsInCustomizationSheet;
- (BOOL)_accessibilityIsCommonToolbarButtonItem;
- (BOOL)_accessibilityIsSpaceOrSeparatorItem;
- (BOOL)_accessibilityTreatButtonAsToolbarButton:(id)arg1;
- (BOOL)_accessibilityTreatSegmentedControlAsToolbarButtons:(id)arg1;

@end

