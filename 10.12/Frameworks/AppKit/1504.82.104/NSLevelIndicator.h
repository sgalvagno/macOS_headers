//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@interface NSLevelIndicator : NSControl
{
}

+ (void)initialize;
- (struct NSEdgeInsets)alignmentRectInsets;
- (double)tickMarkValueAtIndex:(long long)arg1;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (void)setAlwaysDrawRatingPlaceholder:(BOOL)arg1;
- (BOOL)alwaysDrawRatingPlaceholder;
@property long long numberOfMajorTickMarks;
@property long long numberOfTickMarks;
@property unsigned long long tickMarkPosition;
@property double criticalValue;
@property double warningValue;
@property double maxValue;
@property double minValue;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
@property unsigned long long levelIndicatorStyle;
- (id)ns_widgetType;

@end

