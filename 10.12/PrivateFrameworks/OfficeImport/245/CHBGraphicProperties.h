//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : NSObject
{
}

+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)oadStrokeFrom:(const struct XlChartLineStyle *)arg1;
+ (id)oadGraphicPropertiesFromState:(id)arg1 xlLineStyle:(const struct XlChartLineStyle *)arg2 xlFillStyle:(const struct XlChartFillStyle *)arg3;
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const struct XlChartSeriesFormat *)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromXlChartTextFrame:(struct XlChartTextFrame *)arg1 state:(id)arg2;
+ (id)oadGraphicPropertiesFromShapePropsStream:(const char *)arg1 size:(unsigned int)arg2;
+ (id)oadGraphicPropertiesFromXlChartFrameType:(struct XlChartFrameType *)arg1 state:(id)arg2;
+ (int)lineWeightEnumFromWidth:(float)arg1;
+ (int)presetLinePatternEnumFromDash:(id)arg1;
+ (float)widthFromLineWeightEnum:(int)arg1;
+ (BOOL)oaPresetDashTypeFromLinePatternEnum:(int)arg1;
+ (id)mapAssociatedEscherObjectstate:(id)arg1;
+ (id)mapFillStyleForMarker:(const struct XlChartMarkerStyle *)arg1 complex:(_Bool)arg2 state:(id)arg3;
+ (id)mapFillStyle:(const struct XlChartFillStyle *)arg1 xlPictureFormat:(const struct XlChartPicF *)arg2 state:(id)arg3;
+ (id)mapPresetDashFromPattern:(int)arg1;

@end

