//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSCollectionViewItem.h>

__attribute__((visibility("hidden")))
@interface FI_TNewIconViewController : NSCollectionViewItem
{
}

+ (id)itemIdentifier;
- (id)_titleViews;
- (BOOL)_hasOpaquePartsInRect:(struct CGRect)arg1;
- (void)updateHighlightedOrSelectedAppearance;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlightState:(long long)arg1;
- (id)iconViewNoLoad;
- (id)iconView;
- (void)aboutToTearDown;
- (void)dealloc;
- (BOOL)_viewControllerSupports10_10Features;
- (void)loadView;

@end

