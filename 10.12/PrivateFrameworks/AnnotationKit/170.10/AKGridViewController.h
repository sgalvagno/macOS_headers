//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <AnnotationKit/NSCollectionViewDelegate-Protocol.h>

@class AKController, NSArray, NSArrayController, NSLayoutConstraint, NSString;

@interface AKGridViewController : NSViewController <NSCollectionViewDelegate>
{
    AKController *_controller;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _potentialActionBlock;
    NSArrayController *_itemArrayController;
    NSArray *_items;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property(retain) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(retain) NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain) NSArrayController *itemArrayController; // @synthesize itemArrayController=_itemArrayController;
@property(copy) CDUnknownBlockType potentialActionBlock; // @synthesize potentialActionBlock=_potentialActionBlock;
@property(copy) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 draggingSession:(id)arg2 endedAtPoint:(struct CGPoint)arg3 dragOperation:(unsigned long long)arg4;
- (id)collectionView:(id)arg1 pasteboardWriterForItemAtIndex:(unsigned long long)arg2;
- (void)performActionOnPotentialSelection;
- (void)performActionOnSelection;
- (void)menuDidClose:(id)arg1;
- (void)menuDidOpen:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (id)selectedObjects;
- (id)selectionIndexes;
- (BOOL)setSelectionIndexes:(id)arg1;
- (id)gridView;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithDefaultNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

