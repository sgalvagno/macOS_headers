//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSAccessibilityElement.h>

@class NSAccessibilityWeakReferenceContainer, NSArray, NSCollectionView, NSCollectionViewAccessibilityHelper, NSCollectionViewFooterAccessibility, NSCollectionViewHeaderAccessibility;

__attribute__((visibility("hidden")))
@interface NSCollectionViewSectionAccessibility : NSAccessibilityElement
{
    NSAccessibilityWeakReferenceContainer *_collectionViewAccessibility;
    NSArray *_accessibilityVisibleChildren;
}

- (void)setAccessibilityVisibleChildren:(id)arg1;
- (id)description;
- (BOOL)accessibilityPerformScrollToVisible;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityShouldUseUniqueId;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (long long)accessibilityOrientation;
- (id)__accessibilityLabel;
- (id)accessibilityLabel;
- (id)accessibilityNextContentSibling;
- (id)accessibilityPreviousContentSibling;
- (id)accessibilityVisibleChildren;
- (id)accessibilityChildren;
- (struct CGRect)accessibilityFrame;
- (id)accessibilitySubrole;
- (id)accessibilityRole;
- (id)accessibilityParent;
- (BOOL)isAccessibilityElement;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSCollectionViewFooterAccessibility *supplementaryFooterElement; // @dynamic supplementaryFooterElement;
@property(readonly, nonatomic) NSCollectionViewHeaderAccessibility *supplementaryHeaderElement; // @dynamic supplementaryHeaderElement;
- (BOOL)hasSupplementaryFooterView;
- (BOOL)hasSupplementaryHeaderView;
- (id)supplementaryFooterView:(BOOL)arg1;
- (id)supplementaryHeaderView:(BOOL)arg1;
- (id)_supplementaryView:(BOOL)arg1 elementKind:(id)arg2 indexPath:(id)arg3;
- (unsigned long long)offsetForSupplementaryHeaderView;
- (id)_makeSupplementaryViewForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (BOOL)_hasSupplementaryViewForElementKind:(id)arg1;
- (id)visibleItemsInSection:(long long)arg1;
- (id)visibleSupplementaryViewsInSection:(long long)arg1;
- (void)_dumpVisibleChildren;
@property(readonly, nonatomic) __weak NSCollectionView *collectionView; // @dynamic collectionView;
- (id)firstElementInSection:(BOOL)arg1;
- (id)lastElementInSection:(BOOL)arg1;
- (void)accessibilityPrepareLayout;
- (void)accessibilityInvalidateLayout;
- (void)accessibilityDidEndScrolling;
@property(readonly, nonatomic) __weak NSCollectionViewAccessibilityHelper *collectionViewAccessibility; // @dynamic collectionViewAccessibility;
- (void)dealloc;
- (id)initWithCollectionViewAccessibility:(id)arg1;

@end

