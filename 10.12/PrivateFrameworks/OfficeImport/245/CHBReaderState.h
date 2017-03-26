//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/CHBState.h>

@class EBReaderSheetState, OADColorScheme;
@protocol CHAutoStyling;

__attribute__((visibility("hidden")))
@interface CHBReaderState : CHBState
{
    EBReaderSheetState *mEBReaderSheetState;
    struct XlChartBinaryReader *mXlReader;
    id <CHAutoStyling> mAutoStyling;
    int mAxisGroup;
    struct XlChartPlot *mXlCurrentPlot;
    int mXlCurrentPlotIndex;
}

@property(readonly, nonatomic) OADColorScheme *colorScheme;
- (const struct XlChartSeriesFormat *)defaultFormatForXlSeries:(const struct XlChartDataSeries *)arg1;
- (const struct XlChartSeriesFormat *)xlCurrentDefaultSeriesFormat;
- (void)setXlCurrentPlot:(struct XlChartPlot *)arg1;
- (struct XlChartPlot *)xlCurrentPlot;
- (void)setXlCurrentPlotIndex:(int)arg1;
- (int)xlCurrentPlotIndex;
- (int)xlPlotCount;
- (void)readAndCacheXlChartDataSeries;
- (void)setAxisGroup:(int)arg1;
- (int)axisGroup;
- (id)autoStyling;
- (void)setChart:(id)arg1;
- (struct XlChartBinaryReader *)xlReader;
- (id)resources;
- (id)workbook;
- (id)ebReaderSheetState;
- (void)dealloc;
- (id)initWithEBReaderSheetState:(id)arg1;

@end

