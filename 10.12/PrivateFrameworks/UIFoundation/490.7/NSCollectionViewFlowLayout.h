//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <UIFoundation/NSCollectionViewLayout.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, _NSFlowLayoutInfo;

@interface NSCollectionViewFlowLayout : NSCollectionViewLayout
{
    struct {
        unsigned int delegateSizeForItem:1;
        unsigned int delegateSizeForInsertionGap:1;
        unsigned int delegateReferenceSizeForHeader:1;
        unsigned int delegateReferenceSizeForFooter:1;
        unsigned int delegateInsetForSection:1;
        unsigned int delegateInteritemSpacingForSection:1;
        unsigned int delegateLineSpacingForSection:1;
        unsigned int delegateAlignmentOptions:1;
        unsigned int layoutDataIsValid:1;
        unsigned int delegateInfoIsValid:1;
        unsigned int roundsToScreenScale:1;
        unsigned int sectionHeadersFloat:1;
        unsigned int sectionFootersFloat:1;
        unsigned int isSingleColumnOrRow:1;
        unsigned int collapsesSectionsToFirstItem:1;
        unsigned int suppressGapOpening:1;
    } _gridLayoutFlags;
    double _interitemSpacing;
    double _lineSpacing;
    struct CGSize _itemSize;
    struct CGSize _estimatedItemSize;
    struct CGSize _headerReferenceSize;
    struct CGSize _footerReferenceSize;
    struct NSEdgeInsets _sectionInset;
    _NSFlowLayoutInfo *_data;
    struct CGSize _currentLayoutSize;
    NSMutableDictionary *_insertedItemsAttributesDict;
    NSMutableDictionary *_insertedSectionHeadersAttributesDict;
    NSMutableDictionary *_insertedSectionFootersAttributesDict;
    NSMutableDictionary *_deletedItemsAttributesDict;
    NSMutableDictionary *_deletedSectionHeadersAttributesDict;
    NSMutableDictionary *_deletedSectionFootersAttributesDict;
    long long _scrollDirection;
    NSDictionary *_rowAlignmentsOptionsDictionary;
    struct CGPoint _contentOffsetAdjustment;
    struct CGSize _contentSizeAdjustment;
    NSMutableArray *_indexPathsToValidate;
    NSMutableIndexSet *_collapsedSectionIndexes;
    NSMutableDictionary *_collapsedSectionScrollOffsets;
}

+ (Class)invalidationContextClass;
@property(nonatomic) struct NSEdgeInsets sectionInset; // @synthesize sectionInset=_sectionInset;
@property(nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_interitemSpacing;
@property(nonatomic) double minimumLineSpacing; // @synthesize minimumLineSpacing=_lineSpacing;
@property BOOL sectionFootersPinToVisibleBounds;
@property BOOL sectionHeadersPinToVisibleBounds;
- (BOOL)_roundsToScreenScale;
- (void)_setRoundsToScreenScale:(BOOL)arg1;
- (long long)_sectionArrayIndexForIndexPath:(id)arg1;
- (void)_updateContentSizeScrollingDimensionWithDelta:(double)arg1;
- (void)_setSingleColumnOrRow:(BOOL)arg1;
- (BOOL)_isSingleColumnOrRow;
- (void)_setCollapsesSectionsToFirstItem:(BOOL)arg1;
- (BOOL)_collapsesSectionsToFirstItem;
- (void)_scrollToItemsAtIndexPaths:(id)arg1 scrollPosition:(unsigned long long)arg2;
- (BOOL)_scrollSectionWithEvent:(id)arg1;
- (BOOL)_autoscrollSectionWithEvent:(id)arg1;
- (double)_setScrollOffset:(double)arg1 forCollapsedSection:(id)arg2 atIndex:(unsigned long long)arg3;
- (double)_scrollOffsetForCollapsedSection:(id)arg1 atIndex:(unsigned long long)arg2;
- (double)_scrollOffsetForCollapsedSectionAtIndex:(unsigned long long)arg1;
- (void)_scrollCollapsedSection:(id)arg1 atIndex:(unsigned long long)arg2 byDelta:(double)arg3;
- (void)_expandSectionAtIndex:(unsigned long long)arg1;
- (void)expandSectionAtIndex:(unsigned long long)arg1;
- (void)_collapseSectionAtIndex:(unsigned long long)arg1;
- (void)collapseSectionAtIndex:(unsigned long long)arg1;
- (BOOL)_sectionAtIndexIsCollapsed:(unsigned long long)arg1;
- (BOOL)sectionAtIndexIsCollapsed:(unsigned long long)arg1;
- (id)_makeCollapsedSectionScrollOffsets;
- (id)_collapsedSectionScrollOffsets;
- (id)_makeCollapsedSectionIndexes;
- (id)_collapsedSectionIndexes;
- (BOOL)_sectionAtIndex:(unsigned long long)arg1 shouldShowCollapseButton:(BOOL)arg2;
- (id)_findCollapseButtonForSectionAtIndex:(unsigned long long)arg1;
- (id)_rowAlignmentOptions;
- (void)_setRowAlignmentsOptions:(id)arg1;
- (void)_invalidateButKeepAllInfo;
- (void)_invalidateButKeepDelegateInfo;
- (struct CGSize)synchronizeLayout;
- (id)finalLayoutAttributesForFooterInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForHeaderInDeletedSection:(long long)arg1;
- (id)finalLayoutAttributesForDeletedItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForFooterInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForHeaderInInsertedSection:(long long)arg1;
- (id)initialLayoutAttributesForInsertedItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)_setNeedsLayoutComputationWithoutInvalidation;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2 floated:(char *)arg3;
- (struct CGRect)_frameForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2 floated:(char *)arg3;
- (struct CGRect)_frameForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (struct CGRect)_frameForItem:(long long)arg1 inSection:(long long)arg2 usingData:(id)arg3;
- (struct CGRect)_frameForSectionAtIndex:(unsigned long long)arg1;
- (void)_fetchItemsInfoForRect:(struct CGRect)arg1;
- (void)_updateItemsLayoutForRect:(struct CGRect)arg1;
- (void)_getSizingInfos;
- (void)_updateDelegateFlags;
@property(nonatomic) struct CGSize footerReferenceSize;
@property(nonatomic) struct CGSize headerReferenceSize;
@property(nonatomic) struct CGSize itemSize;
@property(nonatomic) long long scrollDirection;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)_layoutAttributesForItemsInRect:(struct CGRect)arg1;
- (struct CGSize)_sizeForInsertionGap;
@property(readonly, getter=_suppressGapOpening) BOOL suppressGapOpening;
- (void)_setCachedSizeForInsertionGap:(struct CGSize)arg1;
- (struct CGSize)_cachedSizeForInsertionGap;
- (BOOL)_estimatesSizes;
- (id)invalidationContextForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (BOOL)shouldInvalidateLayoutForPreferredLayoutAttributes:(id)arg1 withOriginalAttributes:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForInterItemGapBeforeIndexPath:(id)arg1;
- (id)layoutAttributesForDropTargetAtPoint:(struct CGPoint)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForFooterInSection:(long long)arg1;
- (id)layoutAttributesForHeaderInSection:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 usingData:(id)arg2;
- (id)layoutAttributesForFooterInSection:(long long)arg1 usingData:(id)arg2;
- (id)layoutAttributesForHeaderInSection:(long long)arg1 usingData:(id)arg2;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1;
- (id)indexesForSectionFootersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (id)indexesForSectionHeadersInRect:(struct CGRect)arg1 usingData:(id)arg2;
- (struct CGSize)collectionViewContentSize;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
@property(nonatomic) struct CGSize estimatedItemSize;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

