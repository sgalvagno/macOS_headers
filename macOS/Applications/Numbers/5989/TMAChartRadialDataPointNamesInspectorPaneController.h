//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartInspectorPaneGroupController.h"

@class NSArrayController, TMAInspectorCheckBoxButton;

@interface TMAChartRadialDataPointNamesInspectorPaneController : TMAChartInspectorPaneGroupController
{
    NSArrayController *mSeriesArrayController;
    TMAInspectorCheckBoxButton *_dataPointNameCheckBox;
    TMAInspectorCheckBoxButton *_valueCheckBox;
}

+ (unsigned long long)sortOrder;
+ (long long)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (id)chartEditorProxyVisibilityKey;
+ (id)nibName;
@property(nonatomic) __weak TMAInspectorCheckBoxButton *valueCheckBox; // @synthesize valueCheckBox=_valueCheckBox;
@property(nonatomic) __weak TMAInspectorCheckBoxButton *dataPointNameCheckBox; // @synthesize dataPointNameCheckBox=_dataPointNameCheckBox;
@property(retain, nonatomic) NSArrayController *seriesArrayController; // @synthesize seriesArrayController=mSeriesArrayController;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (double)spaceBelow;

@end

