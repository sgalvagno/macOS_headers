//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSliderCell.h>

@interface NSProSliderCell : NSSliderCell
{
    long long _nibVersion;
    struct {
        unsigned int needToSendEndSliderAction:1;
        unsigned int reserved:31;
    } _pscFlags;
    void *_proReserved3;
}

+ (void)drawKnobInCell:(id)arg1 rect:(struct CGRect)arg2;
+ (union _themeatom_union)_atomForKnobInCell:(id)arg1;
+ (id)metricsForCell:(id)arg1;
+ (id)_knobMetricsForCell:(id)arg1;
+ (id)_trackMetricsForCell:(id)arg1;
+ (id)_metricsCacheKeyForCell:(id)arg1;
+ (id)_knobFacetUsingBestOverridePointForCell:(id)arg1;
+ (id)_knobFacetForCell:(id)arg1;
+ (id)_knobFacet;
+ (BOOL)_implementsDeprecatedSelector:(SEL)arg1;
+ (void)initialize;
+ (long long)_knobDirectionForCell:(id)arg1;
- (void)_setNibVersion:(long long)arg1;
- (long long)_nibVersion;
- (BOOL)isValidControlSize:(unsigned long long)arg1;
- (BOOL)_supportsClassicLargeMetrics;
- (BOOL)_needRedrawOnWindowChangedKeyState;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)_sendActionFrom:(id)arg1;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (struct CGRect)rectOfTickMarkAtIndex:(long long)arg1;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)drawBarInside:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (BOOL)_calcTrackRect:(struct CGRect *)arg1 andAdjustRect:(BOOL)arg2;
- (void)drawKnob;
- (void)drawKnob:(struct CGRect)arg1;
- (struct CGRect)knobRectFlipped:(BOOL)arg1;
- (struct CGRect)_oldKnobRectFlipped:(BOOL)arg1;
- (double)knobThickness;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)_drawTrackInRect:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (struct CGRect)barImageBoundsInTrackRect:(struct CGRect)arg1;
- (id)_baseFacet;
- (long long)_currentThemeStateInView:(id)arg1;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;

@end

