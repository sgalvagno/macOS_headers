//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXContentParent.h"

@class NSDictionary, NSEnumerator, NSString, NSValue;

@protocol AXAbstractSlide <AXContentParent>
- (id <AXImageData>)axCreateThumbnailForSize:(NSValue *)arg1;
- (id <AXImageData>)axGetThumbnailForSize:(NSValue *)arg1;
- (NSEnumerator *)axGetThumbnailSizeEnumerator;
- (void)axSetTransitionDuration:(double)arg1;
- (double)axGetTransitionDuration;
- (void)axSetTransition:(NSString *)arg1 withProperties:(NSDictionary *)arg2;
- (NSDictionary *)axGetTransitionProperties;
- (NSString *)axGetTransitionType;
- (id <AXGuide>)axCreateGuide;
- (id <AXGuide>)axGetGuide:(int)arg1;
- (int)axGetGuideCount;
- (id <AXFillStyle>)axGetBackgroundFillStyle;
- (id <AXBodyPlaceholder>)axGetBodyPlaceholder;
- (id <AXTitlePlaceholder>)axGetTitlePlaceholder;
- (id <AXDrawable>)axGetDrawable:(int)arg1;
- (int)axGetDrawableCount;
@end

