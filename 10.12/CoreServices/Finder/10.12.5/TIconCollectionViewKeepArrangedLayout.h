//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewFlowLayout.h>

@interface TIconCollectionViewKeepArrangedLayout : NSCollectionViewFlowLayout
{
    struct vector<double, std::__1::allocator<double>> _columnOffsets;
    _Bool _isJustifiedLayout;
}

@property(getter=isJustifiedLayout) _Bool justifiedLayout; // @synthesize justifiedLayout=_isJustifiedLayout;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)_adjustItemLayoutAttributes:(id)arg1 byXOffset:(double)arg2;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)setInterItemSpacingForIconSize:(const struct CGSize *)arg1 titleOnBottom:(_Bool)arg2;
- (id)init;

@end

