//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <ContactsUI/NSCollectionViewDataSource-Protocol.h>
#import <ContactsUI/NSCollectionViewDelegate-Protocol.h>

@class NSArray, NSCollectionView, NSString, NSTextField;
@protocol CNCancelable, CNRecentLikenessesDataSource, CNRecentLikenessesViewDelegate, NSAccessibilityGroup;

@interface CNRecentLikenessesViewController : NSViewController <NSCollectionViewDelegate, NSCollectionViewDataSource>
{
    id <CNRecentLikenessesViewDelegate> _delegate;
    id <CNRecentLikenessesDataSource> _dataSource;
    NSTextField *_descriptionField;
    NSCollectionView<NSAccessibilityGroup> *_likenessCollectionView;
    NSArray *_likenessesFromStore;
    NSArray *_displayedItems;
    id <CNCancelable> _contactLikenessesModelCancelable;
}

@property(retain) id <CNCancelable> contactLikenessesModelCancelable; // @synthesize contactLikenessesModelCancelable=_contactLikenessesModelCancelable;
@property(retain) NSArray *displayedItems; // @synthesize displayedItems=_displayedItems;
@property(retain) NSArray *likenessesFromStore; // @synthesize likenessesFromStore=_likenessesFromStore;
@property(retain) NSCollectionView<NSAccessibilityGroup> *likenessCollectionView; // @synthesize likenessCollectionView=_likenessCollectionView;
@property(retain) NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property(retain, nonatomic) id <CNRecentLikenessesDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <CNRecentLikenessesViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)existingLikenessPerformPress:(id)arg1;
- (void)newLikenessPerformPress;
- (id)likeness;
- (void)removeLikeness:(id)arg1;
- (void)editLikeness:(id)arg1;
- (void)addNewLikeness;
- (id)_selectedLikeness;
- (BOOL)likenessIsDeletable:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 shouldSelectItemsAtIndexPaths:(id)arg2;
- (id)collectionView:(id)arg1 itemForRepresentedObjectAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)isCollectionIndexNewButton:(id)arg1;
- (void)displayContactLikenessesModel:(id)arg1;
- (double)desiredHeight;
- (void)stopFetchingRecentLikenesses;
- (void)startFetchingRecentLikenesses;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)setDescriptionString:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

