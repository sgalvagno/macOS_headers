//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTrackableOutlineView.h>

@class FI_TTableViewShrinkToFitController;
@protocol TSidebarViewDelegate;

__attribute__((visibility("hidden")))
@interface FI_TSidebarView : NSTrackableOutlineView
{
    _Bool _shouldHandleCommandClickOnMouseUp;
    _Bool _keyOnMouseDown;
    _Bool _shouldCancelPendingInvoke;
    _Bool _handlingCmdMouseDown;
    _Bool _handlingItemClick;
    _Bool _suppressSelectionClearForScreenCapture;
    FI_TTableViewShrinkToFitController *_stfController;
}

@property(nonatomic) _Bool suppressSelectionClearForScreenCapture; // @synthesize suppressSelectionClearForScreenCapture=_suppressSelectionClearForScreenCapture;
@property(nonatomic) _Bool handlingItemClick; // @synthesize handlingItemClick=_handlingItemClick;
@property(nonatomic) _Bool keyOnMouseDown; // @synthesize keyOnMouseDown=_keyOnMouseDown;
@property(nonatomic) _Bool shouldCancelPendingInvoke; // @synthesize shouldCancelPendingInvoke=_shouldCancelPendingInvoke;
@property(nonatomic) _Bool shouldHandleCommandClickOnMouseUp; // @synthesize shouldHandleCommandClickOnMouseUp=_shouldHandleCommandClickOnMouseUp;
- (struct CGRect)selectionRect;
- (void)viewDidMoveToWindow;
- (void)_drawClearForSelectionArea;
- (id)stfEditorController;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)cancelPendingInvoke;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)rowHit:(long long)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedWorkaround;
- (void)deselectRow:(long long)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct TFENode)nodeForRow:(long long)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setRowSizeStyle:(long long)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (BOOL)wantsUpdateLayer;
@property id <TSidebarViewDelegate> delegate; // @dynamic delegate;
- (id)controller;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

