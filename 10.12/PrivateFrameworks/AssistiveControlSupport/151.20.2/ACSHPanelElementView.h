//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHView.h>

#import <AssistiveControlSupport/ACSHPanelElementViewContainer-Protocol.h>

@class ACSHPanelElement, ACSHResizeHandlesView, NSArray, NSMutableArray, NSString;

@interface ACSHPanelElementView : ACSHView <ACSHPanelElementViewContainer>
{
    ACSHPanelElement *_panelElement;
    ACSHResizeHandlesView *_resizeHandleView;
    NSMutableArray *_panelElementViews;
    NSMutableArray *_selectedPanelElementViews;
    struct CGRect _lastUpdatedDrawingFrame;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _disabled;
    BOOL _animateAction;
    BOOL _focused;
    BOOL _isObservingModel;
    BOOL _wasObservingModel;
    double _customScaleFactor;
    BOOL _semiHighlighted;
    BOOL _canShowResizeHandles;
}

+ (void)setModelObservationEnabled:(BOOL)arg1;
+ (id)createWithPanelElement:(id)arg1;
+ (Class)_viewClassForPanelElement:(id)arg1;
+ (double)viewPadding;
+ (void)initialize;
@property(nonatomic) BOOL canShowResizeHandles; // @synthesize canShowResizeHandles=_canShowResizeHandles;
@property(nonatomic) double customScaleFactor; // @synthesize customScaleFactor=_customScaleFactor;
@property(nonatomic) BOOL semiHighlighted; // @synthesize semiHighlighted=_semiHighlighted;
@property(nonatomic) BOOL focused; // @synthesize focused=_focused;
@property(nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(readonly, retain, nonatomic) ACSHPanelElement *panelElement; // @synthesize panelElement=_panelElement;
@property(readonly, nonatomic) NSArray *panelElementViews; // @synthesize panelElementViews=_panelElementViews;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (void)setShowResizeHandles:(BOOL)arg1;
- (void)selectIfContainsDwellAction:(long long)arg1;
- (void)_updateResizeHandleVisibility;
- (id)_resizeHandleView;
- (struct CGRect)resizeHandleRect;
- (BOOL)supportsResizeHandleDrawing;
- (struct CGRect)frameForDrawing;
- (id)parentPanelElementView;
- (void)performBlockOnViewAndAncestors:(CDUnknownBlockType)arg1;
- (void)performBlockOnAncestors:(CDUnknownBlockType)arg1;
- (void)_performBlockOnAncestors:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (void)performBlockOnDescendents:(CDUnknownBlockType)arg1;
- (void)performBlockOnViewAndDescendents:(CDUnknownBlockType)arg1;
- (void)_performBlockOnDescendents:(CDUnknownBlockType)arg1 includeSelf:(BOOL)arg2;
- (id)viewInTreeForPanelElement:(id)arg1;
- (id)selectedPanelElementView;
- (void)removeAllSelectedViews;
- (void)removeViewFromSelection:(id)arg1;
- (void)addViewToSelection:(id)arg1;
- (void)_didChangeSelectedViews;
- (void)_willChangeSelectedViews;
- (id)selectedPanelElements;
- (id)selectedPanelElementViews;
- (void)updateUIForSelection;
- (void)_updateUIForSelection;
- (id)panelElementViewContainer;
- (void)notifyAncestorsOfUserViewManipulationEnd;
- (void)notifyAncestorsOfUserViewManipulationStart;
- (void)userViewManipulationDidEnd;
- (void)userViewManipulationDidBegin;
- (struct CGSize)displayTextSize;
- (id)deepestFocusedView;
- (id)resourceCollection;
- (id)panelView;
@property(readonly, nonatomic) BOOL shouldResetLookAfterSelect;
- (void)resetLook;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGRect)convertRect:(struct CGRect)arg1 toDefaultSpaceFromSpace:(struct CGRect)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromDefaultSpaceToSpace:(struct CGRect)arg2;
- (struct CGSize)defaultSpace;
- (void)updateSubviewZOrder;
- (void)inputMethodWasUpdated;
- (struct CGRect)panelRectForItemAtIndexPath:(id)arg1;
- (struct CGRect)panelRectForTrailingExtraAtIndexPath:(id)arg1;
- (struct CGRect)panelRectForLeadingExtraAtIndexPath:(id)arg1;
- (void)panelHighlightElementsForMouseButtonState:(unsigned long long)arg1;
- (void)panelHighlightElementsForModifiers:(unsigned long long)arg1 lockedModifiers:(unsigned long long)arg2;
- (void)panelHighlightAllItems;
- (void)panelHighlightNoElements;
- (void)panelHighlightTrailingExtraAtIndexPath:(id)arg1;
- (void)panelHighlightLeadingExtraAtIndexPath:(id)arg1;
- (void)panelHighlightItemAtIndexPath:(id)arg1 isTrailingExtra:(BOOL)arg2 highlightCount:(unsigned long long)arg3;
- (void)panelItemAtIndexPath:(id)arg1 displayAsSelected:(BOOL)arg2;
- (id)panelElementViewAtIndexPath:(id)arg1;
- (void)setSelectedRecursive:(BOOL)arg1;
- (void)setHighlightedRecursive:(BOOL)arg1;
- (void)updateSizeAndPositionOfPanelElementViews;
- (struct CGRect)_rectForDrawingPanelElementViews;
@property(readonly, copy) NSString *description;
- (void)setPanelElement:(id)arg1 animated:(BOOL)arg2;
- (void)_stopObservingModel;
- (void)_startObservingModel;
- (void)_resumeObservingModel;
- (void)_suspendObservingModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removePanelElementView:(id)arg1 animated:(BOOL)arg2;
- (void)willRemovePanelElementView:(id)arg1;
- (void)_addPanelElementView:(id)arg1 animated:(BOOL)arg2 atIndex:(unsigned long long)arg3;
- (void)_addPanelElementView:(id)arg1 animated:(BOOL)arg2;
- (void)initView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

