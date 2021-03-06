//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSView, PXGHitTestResult;
@protocol PXAnonymousCoordinateSpace, PXDisplayAsset;

@protocol PXGViewAccessibilityDelegate <NSObject>
- (void)notifySelectedCellsChanged;
- (void)axScrollToAsset:(id <PXDisplayAsset>)arg1;
- (id <PXDisplayAsset>)assetClosestToAsset:(id <PXDisplayAsset>)arg1 inDirection:(unsigned long long)arg2;
- (void)selectAsset:(id <PXDisplayAsset>)arg1;
- (PXGHitTestResult *)hitTestResultAtPoint:(struct CGPoint)arg1 inCoordinateSpace:(NSView<PXAnonymousCoordinateSpace> *)arg2;
- (BOOL)itemDidShowDefaultUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemDidShowAlternateUIAtLocation:(struct CGPoint)arg1;
- (BOOL)itemWasRightClickedWithHitTestResult:(PXGHitTestResult *)arg1 location:(struct CGPoint)arg2;
- (BOOL)itemWasDoubleClickedWithHitTestResult:(PXGHitTestResult *)arg1;
@end

