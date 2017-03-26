//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSDraggingDestination-Protocol.h>

@class NSCollectionView, NSString, NSView;

__attribute__((visibility("hidden")))
@interface _NSCollectionViewDropReceiver : NSObject <NSDraggingDestination>
{
    NSCollectionView *collectionView;
    long long sessionNumber;
    unsigned long long _currentDragOperation;
    long long _currentDropOperation;
    NSView *_dropTargetGapIndicatorView;
    NSView *_dropTargetSectionFrameView;
    BOOL _sourceIsThisCollectionView;
    BOOL _acceptedDrop;
    BOOL _exitedDrag;
    struct CGPoint _lastDraggingLocation;
}

+ (id)dropReceiverWithCollectionView:(id)arg1;
- (void)dealloc;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (void)_updateDragAndDropStateWithDraggingInfo:(id)arg1 newDragOperation:(unsigned long long)arg2 newDropTargetIndexPath:(id)arg3 newDropTargetRect:(struct CGRect)arg4 newDropOperation:(long long)arg5;
- (id)setHighlightState:(long long)arg1 forItemsAtIndexPaths:(id)arg2;
- (unsigned long long)_validateDragWithInfo:(id)arg1 dropTargetIndexPath:(id *)arg2 dropTargetRect:(struct CGRect *)arg3 dropOperation:(long long *)arg4 allowDropOnOnly:(BOOL)arg5;
- (id)_dropIndexPathForDraggingInfo:(id)arg1 dropTargetRect:(struct CGRect *)arg2 proposedDropOperation:(long long *)arg3 allowDropOnOnly:(BOOL)arg4;
- (void)_setWholeSectionDropTargetRect:(struct CGRect)arg1;
- (void)_setDropTargetGapRect:(struct CGRect)arg1;
- (id)initWithCollectionView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

