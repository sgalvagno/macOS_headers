//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSSStylePropertyChangeSet.h"

#import "GSSPAutoEncodable-Protocol.h"

@class TSCHSpecChartErrorBarCustomData, TSCHSpecFormatObject, TSCHSpecNumberFormat, TSSSpecBool, TSSSpecDouble, TSSSpecInteger, TSSSpecString;

@interface TSCHChartSeriesNonStylePropertyChangeSet : TSSStylePropertyChangeSet <GSSPAutoEncodable>
{
    TSCHSpecFormatObject *_default10DateFormat;
    TSCHSpecNumberFormat *_default10NumberFormat;
    TSCHSpecNumberFormat *_pie10NumberFormat;
    TSSSpecDouble *_pie23LabelExplosion;
    TSSSpecDouble *_bubbleAdjustmentScale;
    TSCHSpecFormatObject *_defaultDateFormat;
    TSCHSpecFormatObject *_defaultDurationFormat;
    TSSSpecInteger *_areaEnableCalloutLine;
    TSSSpecInteger *_barEnableCalloutLine;
    TSSSpecInteger *_bubbleEnableCalloutLine;
    TSSSpecInteger *_defaultEnableCalloutLine;
    TSSSpecInteger *_lineEnableCalloutLine;
    TSSSpecInteger *_pieEnableCalloutLine;
    TSSSpecInteger *_scatterEnableCalloutLine;
    TSSSpecInteger *_stackedAreaEnableCalloutLine;
    TSSSpecInteger *_stackedBarEnableCalloutLine;
    TSCHSpecChartErrorBarCustomData *_defaultErrorBarCustomNegativeData;
    TSCHSpecChartErrorBarCustomData *_defaultErrorBarCustomNegativeDataScatterX;
    TSCHSpecChartErrorBarCustomData *_defaultErrorBarCustomPositiveData;
    TSCHSpecChartErrorBarCustomData *_defaultErrorBarCustomPositiveDataScatterX;
    TSSSpecDouble *_defaultErrorBarFixedValue;
    TSSSpecDouble *_defaultErrorBarFixedValueScatterX;
    TSSSpecDouble *_defaultErrorBarPercentValue;
    TSSSpecDouble *_defaultErrorBarPercentValueScatterX;
    TSSSpecInteger *_defaultErrorBarSetting;
    TSSSpecInteger *_defaultErrorBarSettingScatterX;
    TSSSpecDouble *_defaultErrorBarStdDevValue;
    TSSSpecDouble *_defaultErrorBarStdDevValueScatterX;
    TSSSpecInteger *_defaultErrorBarType;
    TSSSpecInteger *_defaultErrorBarTypeScatterX;
    TSSSpecDouble *_pieLabelExplosion;
    TSSSpecInteger *_bubbleLineType;
    TSSSpecInteger *_lineLineType;
    TSSSpecInteger *_mixedLineLineType;
    TSSSpecInteger *_scatterLineType;
    TSCHSpecNumberFormat *_defaultNumberFormat;
    TSCHSpecNumberFormat *_pieNumberFormat;
    TSSSpecInteger *_defaultNumberFormatType;
    TSSSpecInteger *_pieNumberFormatType;
    TSCHSpecNumberFormat *_stackedPercentNumberFormat;
    TSSSpecInteger *_defaultSeriesType;
    TSSSpecBool *_defaultShowErrorBar;
    TSSSpecBool *_defaultShowErrorBarScatterX;
    TSSSpecBool *_bubbleShowLabelsInFront;
    TSSSpecBool *_defaultShowLabelsInFront;
    TSSSpecBool *_scatterShowLine;
    TSSSpecBool *_bubbleShowNegativeData;
    TSSSpecBool *_bubbleShowSeriesLabels;
    TSSSpecBool *_pieShowSeriesLabels;
    TSSSpecBool *_scatterShowSeriesLabels;
    TSSSpecBool *_areaShowSymbol;
    TSSSpecBool *_lineShowSymbol;
    TSSSpecBool *_mixedAreaShowSymbol;
    TSSSpecBool *_mixedLineShowSymbol;
    TSSSpecBool *_scatterShowSymbol;
    TSSSpecBool *_defaultShowTrendLine;
    TSSSpecBool *_areaShowValueLabels;
    TSSSpecBool *_barShowValueLabels;
    TSSSpecBool *_bubbleShowValueLabels;
    TSSSpecBool *_defaultShowValueLabels;
    TSSSpecBool *_lineShowValueLabels;
    TSSSpecBool *_mixedShowValueLabels;
    TSSSpecBool *_pieShowValueLabels;
    TSSSpecBool *_scatterShowValueLabels;
    TSSSpecInteger *_bubbleSizeDimension;
    TSSSpecBool *_areaStackLabels;
    TSSSpecBool *_barStackLabels;
    TSSSpecBool *_bubbleStackLabels;
    TSSSpecBool *_defaultStackLabels;
    TSSSpecBool *_lineStackLabels;
    TSSSpecBool *_pieStackLabels;
    TSSSpecBool *_scatterStackLabels;
    TSSSpecBool *_stackedAreaStackLabels;
    TSSSpecBool *_stackedBarStackLabels;
    TSSSpecInteger *_areaSymbolType;
    TSSSpecInteger *_lineSymbolType;
    TSSSpecInteger *_mixedAreaSymbolType;
    TSSSpecInteger *_mixedLineSymbolType;
    TSSSpecInteger *_scatterSymbolType;
    TSSSpecDouble *_defaultTrendLineEquationOffsetX;
    TSSSpecDouble *_defaultTrendLineEquationOffsetY;
    TSSSpecString *_defaultTrendLineLabelString;
    TSSSpecInteger *_defaultTrendLineOrder;
    TSSSpecInteger *_defaultTrendLinePeriod;
    TSSSpecDouble *_defaultTrendLineRSquaredOffsetX;
    TSSSpecDouble *_defaultTrendLineRSquaredOffsetY;
    TSSSpecBool *_defaultTrendLineShowEquation;
    TSSSpecBool *_defaultTrendLineShowLabel;
    TSSSpecBool *_defaultTrendLineShowR2Value;
    TSSSpecInteger *_defaultTrendLineType;
    TSSSpecInteger *_bubbleValueLabelsAxis;
    TSSSpecInteger *_scatterValueLabelsAxis;
    TSSSpecDouble *_pieWedgeExplosion;
    TSSSpecInteger *_defaultYAxisOrdinal;
    BOOL _definedDefault10DateFormat;
    BOOL _definedDefault10NumberFormat;
    BOOL _definedPie10NumberFormat;
    BOOL _definedPie23LabelExplosion;
    BOOL _definedBubbleAdjustmentScale;
    BOOL _definedDefaultDateFormat;
    BOOL _definedDefaultDurationFormat;
    BOOL _definedAreaEnableCalloutLine;
    BOOL _definedBarEnableCalloutLine;
    BOOL _definedBubbleEnableCalloutLine;
    BOOL _definedDefaultEnableCalloutLine;
    BOOL _definedLineEnableCalloutLine;
    BOOL _definedPieEnableCalloutLine;
    BOOL _definedScatterEnableCalloutLine;
    BOOL _definedStackedAreaEnableCalloutLine;
    BOOL _definedStackedBarEnableCalloutLine;
    BOOL _definedDefaultErrorBarCustomNegativeData;
    BOOL _definedDefaultErrorBarCustomNegativeDataScatterX;
    BOOL _definedDefaultErrorBarCustomPositiveData;
    BOOL _definedDefaultErrorBarCustomPositiveDataScatterX;
    BOOL _definedDefaultErrorBarFixedValue;
    BOOL _definedDefaultErrorBarFixedValueScatterX;
    BOOL _definedDefaultErrorBarPercentValue;
    BOOL _definedDefaultErrorBarPercentValueScatterX;
    BOOL _definedDefaultErrorBarSetting;
    BOOL _definedDefaultErrorBarSettingScatterX;
    BOOL _definedDefaultErrorBarStdDevValue;
    BOOL _definedDefaultErrorBarStdDevValueScatterX;
    BOOL _definedDefaultErrorBarType;
    BOOL _definedDefaultErrorBarTypeScatterX;
    BOOL _definedPieLabelExplosion;
    BOOL _definedBubbleLineType;
    BOOL _definedLineLineType;
    BOOL _definedMixedLineLineType;
    BOOL _definedScatterLineType;
    BOOL _definedDefaultNumberFormat;
    BOOL _definedPieNumberFormat;
    BOOL _definedDefaultNumberFormatType;
    BOOL _definedPieNumberFormatType;
    BOOL _definedStackedPercentNumberFormat;
    BOOL _definedDefaultSeriesType;
    BOOL _definedDefaultShowErrorBar;
    BOOL _definedDefaultShowErrorBarScatterX;
    BOOL _definedBubbleShowLabelsInFront;
    BOOL _definedDefaultShowLabelsInFront;
    BOOL _definedScatterShowLine;
    BOOL _definedBubbleShowNegativeData;
    BOOL _definedBubbleShowSeriesLabels;
    BOOL _definedPieShowSeriesLabels;
    BOOL _definedScatterShowSeriesLabels;
    BOOL _definedAreaShowSymbol;
    BOOL _definedLineShowSymbol;
    BOOL _definedMixedAreaShowSymbol;
    BOOL _definedMixedLineShowSymbol;
    BOOL _definedScatterShowSymbol;
    BOOL _definedDefaultShowTrendLine;
    BOOL _definedAreaShowValueLabels;
    BOOL _definedBarShowValueLabels;
    BOOL _definedBubbleShowValueLabels;
    BOOL _definedDefaultShowValueLabels;
    BOOL _definedLineShowValueLabels;
    BOOL _definedMixedShowValueLabels;
    BOOL _definedPieShowValueLabels;
    BOOL _definedScatterShowValueLabels;
    BOOL _definedBubbleSizeDimension;
    BOOL _definedAreaStackLabels;
    BOOL _definedBarStackLabels;
    BOOL _definedBubbleStackLabels;
    BOOL _definedDefaultStackLabels;
    BOOL _definedLineStackLabels;
    BOOL _definedPieStackLabels;
    BOOL _definedScatterStackLabels;
    BOOL _definedStackedAreaStackLabels;
    BOOL _definedStackedBarStackLabels;
    BOOL _definedAreaSymbolType;
    BOOL _definedLineSymbolType;
    BOOL _definedMixedAreaSymbolType;
    BOOL _definedMixedLineSymbolType;
    BOOL _definedScatterSymbolType;
    BOOL _definedDefaultTrendLineEquationOffsetX;
    BOOL _definedDefaultTrendLineEquationOffsetY;
    BOOL _definedDefaultTrendLineLabelString;
    BOOL _definedDefaultTrendLineOrder;
    BOOL _definedDefaultTrendLinePeriod;
    BOOL _definedDefaultTrendLineRSquaredOffsetX;
    BOOL _definedDefaultTrendLineRSquaredOffsetY;
    BOOL _definedDefaultTrendLineShowEquation;
    BOOL _definedDefaultTrendLineShowLabel;
    BOOL _definedDefaultTrendLineShowR2Value;
    BOOL _definedDefaultTrendLineType;
    BOOL _definedBubbleValueLabelsAxis;
    BOOL _definedScatterValueLabelsAxis;
    BOOL _definedPieWedgeExplosion;
    BOOL _definedDefaultYAxisOrdinal;
}

+ (id)newFromArchive:(const struct ChartSeriesNonStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
+ (void)saveObject:(id)arg1 toArchive:(struct ChartSeriesNonStylePropertyChangeSetArchive *)arg2 archiver:(id)arg3;
- (void).cxx_destruct;
- (void)enumerateDefinedPropertiesWithBlock:(CDUnknownBlockType)arg1;
- (void)setUnsetSpecForProperty:(int)arg1;
- (void)setSpec:(id)arg1 forProperty:(int)arg2;
- (void)setBoxedValue:(id)arg1 forProperty:(int)arg2;
- (void)populateGSSPChartSeriesNonStylePropertyChangeSet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (id)initChartSeriesNonStylePropertyChangeSetWithArchive:(const struct ChartSeriesNonStylePropertyChangeSetArchive *)arg1 unarchiver:(id)arg2;
- (void)saveChartSeriesNonStylePropertyChangeSetToArchive:(struct ChartSeriesNonStylePropertyChangeSetArchive *)arg1 archiver:(id)arg2;

@end

