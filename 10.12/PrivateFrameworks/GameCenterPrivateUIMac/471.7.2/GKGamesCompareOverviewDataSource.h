//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKSplittingDataSource.h>

@class GKPlayer, NSDictionary, NSMutableIndexSet;

@interface GKGamesCompareOverviewDataSource : GKSplittingDataSource
{
    GKPlayer *_player;
    NSMutableIndexSet *_loadedPages;
    NSDictionary *_initialLoadedItems;
}

+ (id)gamesCompareOverviewDataSourceWithPlayer:(id)arg1;
@property(retain, nonatomic) NSDictionary *initialLoadedItems; // @synthesize initialLoadedItems=_initialLoadedItems;
@property(retain, nonatomic) NSMutableIndexSet *loadedPages; // @synthesize loadedPages=_loadedPages;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (unsigned long long)pageForItemIndex:(unsigned long long)arg1;
- (struct _NSRange)itemRangeForPageRange:(struct _NSRange)arg1;
- (unsigned long long)pageSize;
- (unsigned long long)indexForIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 withItem:(id)arg2;
- (void)loadDetailsForItems:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadDetailsForItemsInPages:(struct _NSRange)arg1 handler:(CDUnknownBlockType)arg2;
- (void)willUpdateSectionsWithItems:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionViewWillBecomeActive:(id)arg1;
- (void)configureDataSource;
- (void)configureCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;

@end

