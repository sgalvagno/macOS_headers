//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

@class CNRecentLikenessesViewController, NSTextField, NSView;

@interface CNLikenessCollectionItem : NSCollectionViewItem
{
    CNRecentLikenessesViewController *_recentsViewController;
    NSTextField *_label;
    NSView *_selectionView;
}

@property(retain) NSView *selectionView; // @synthesize selectionView=_selectionView;
@property __weak NSTextField *label; // @synthesize label=_label;
@property __weak CNRecentLikenessesViewController *recentsViewController; // @synthesize recentsViewController=_recentsViewController;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGRect)accessibilityFrame;
- (BOOL)accessibilityPerformPress;
- (void)mouseDown:(id)arg1;
- (id)contentView;
- (void)showSelectionImage:(id)arg1;
- (void)loadView;

@end

