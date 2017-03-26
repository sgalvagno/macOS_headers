//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionView.h>

@class AKGridViewController;

@interface AKGridView : NSCollectionView
{
    BOOL _itemsAllowDrag;
    BOOL _itemsShowSelection;
    BOOL _eventsCurrentlyInside;
    AKGridViewController *_gridViewController;
    id _gridViewEventMonitor;
}

@property BOOL eventsCurrentlyInside; // @synthesize eventsCurrentlyInside=_eventsCurrentlyInside;
@property(retain) id gridViewEventMonitor; // @synthesize gridViewEventMonitor=_gridViewEventMonitor;
@property BOOL itemsShowSelection; // @synthesize itemsShowSelection=_itemsShowSelection;
@property BOOL itemsAllowDrag; // @synthesize itemsAllowDrag=_itemsAllowDrag;
@property __weak AKGridViewController *gridViewController; // @synthesize gridViewController=_gridViewController;
- (void).cxx_destruct;
- (void)selectAll:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)newItemForRepresentedObject:(id)arg1;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;

@end

