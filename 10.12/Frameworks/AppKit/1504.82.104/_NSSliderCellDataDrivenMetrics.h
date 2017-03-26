//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSSliderCellMetricsStrategy-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSSliderCellDataDrivenMetrics : NSObject <NSSliderCellMetricsStrategy>
{
    CDStruct_afd5e463 _state;
}

@property CDStruct_afd5e463 state; // @synthesize state=_state;
- (struct CGRect)rectOfMaxValueImageFlipped:(BOOL)arg1;
- (struct CGRect)rectOfMinValueImageFlipped:(BOOL)arg1;
- (struct CGRect)rectOfTickMarkForValue:(double)arg1 knobRect:(struct CGRect)arg2 barRect:(struct CGRect)arg3;
- (struct NSEdgeInsets)knobAlignmentRectInsets;
- (struct CGRect)knobRectFlipped:(BOOL)arg1 value:(double)arg2 knobValueRangeRect:(struct CGRect)arg3;
- (struct CGRect)knobValueRangeRect:(BOOL)arg1;
- (struct CGRect)barRectFlipped:(BOOL)arg1;
- (struct NSEdgeInsets)alignmentRectInsets;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

