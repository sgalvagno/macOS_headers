//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class NSColor;

@protocol _MKCalloutAccessoryView <NSObject>

@optional
- (double)_mapkit_minimumCalloutWidthMultiplier;
- (double)_mapkit_calloutCustomRightMargin;
- (double)_mapkit_calloutCustomLeftMargin;
- (BOOL)_mapkit_calloutShouldAlignToDetailBaseline;
- (BOOL)_mapkit_calloutShouldUseIntrinsicContentSize;
- (BOOL)_mapkit_shouldFillCalloutHeight;
- (void)_mapkit_setCalloutAlignedToDetailView:(BOOL)arg1;
- (void)_mapkit_setCalloutTextColor:(NSColor *)arg1;
- (void)_mapkit_setCalloutBackgroundColor:(NSColor *)arg1;
@end

