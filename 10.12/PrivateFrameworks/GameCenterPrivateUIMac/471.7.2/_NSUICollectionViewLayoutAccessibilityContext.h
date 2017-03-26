//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSUICollectionViewLayout;

@interface _NSUICollectionViewLayoutAccessibilityContext : NSObject
{
    NSUICollectionViewLayout *_layout;
    NSArray *_itemProxiesArray;
    NSDictionary *_itemIndexPathToProxyMap;
    NSArray *_supplementaryViewProxiesArray;
}

- (void).cxx_destruct;
- (id)accessibilityProxiesForChildren;
- (id)accessibilityProxiesForChildrenInIndexRange:(struct _NSRange)arg1;
- (id)accessibilityProxyForChildAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfChildProxy:(id)arg1;
- (unsigned long long)numberOfChildren;
- (unsigned long long)numberOfSupplementaryViews;
- (id)_supplementaryViewProxiesArray;
- (id)accessibilityProxyForItemAtIndexPath:(id)arg1;
- (unsigned long long)numberOfItems;
- (id)_itemProxiesArray;
- (void)_obtainAccessibilityProxies;
- (id)initWithLayout:(id)arg1;

@end

