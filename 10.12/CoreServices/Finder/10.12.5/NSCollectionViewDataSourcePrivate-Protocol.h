//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSCollectionViewDataSource-Protocol.h"

@class NSCollectionView, NSCollectionViewItem, NSIndexPath;

@protocol NSCollectionViewDataSourcePrivate <NSCollectionViewDataSource>

@optional
- (NSCollectionViewItem *)collectionView:(NSCollectionView *)arg1 itemForRepresentedObject:(id)arg2 atIndexPath:(NSIndexPath *)arg3;
- (id)collectionView:(NSCollectionView *)arg1 child:(long long)arg2 ofRepresentedObject:(id)arg3;
- (long long)collectionView:(NSCollectionView *)arg1 numberOfChildrenOfRepresentedObject:(id)arg2;
@end

