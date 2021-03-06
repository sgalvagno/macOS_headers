//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSObjectController, NSValue, PVPDFMetricsSizeUnitBoxValueTransformer, PVPDFMetricsSizeUnitValueTransformer;

@interface PVInspectorPDFMetricsController : NSObject
{
    NSObjectController *_inspectedWindowController;
    PVPDFMetricsSizeUnitValueTransformer *_sizeUnitValueTransformer;
    PVPDFMetricsSizeUnitBoxValueTransformer *_boxValueTransformer;
    unsigned long long _sizeUnit;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
- (id)objectInArray:(id)arg1 withValue:(id)arg2;
- (id)inspectedWindowController;
- (void)cropSelection:(id)arg1;
- (void)rotateSelectionRight:(id)arg1;
- (void)rotateSelectionLeft:(id)arg1;
- (BOOL)validateMarqueeHeight:(id *)arg1 error:(id *)arg2;
@property __weak NSNumber *marqueeHeight;
- (BOOL)validateMarqueeWidth:(id *)arg1 error:(id *)arg2;
@property __weak NSNumber *marqueeWidth;
- (BOOL)validateMarqueeTop:(id *)arg1 error:(id *)arg2;
@property __weak NSNumber *marqueeTop;
- (BOOL)validateMarqueeLeft:(id *)arg1 error:(id *)arg2;
@property __weak NSNumber *marqueeLeft;
@property(readonly) __weak NSValue *cropBox;
@property(readonly) __weak NSValue *mediaBox;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(retain) NSDictionary *sizeUnit;
- (id)sizeUnits;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

