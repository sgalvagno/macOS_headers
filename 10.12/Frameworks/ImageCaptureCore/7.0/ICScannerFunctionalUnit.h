//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet;

@interface ICScannerFunctionalUnit : NSObject
{
    id _fuProps;
}

+ (BOOL)automaticallyNotifiesObserversOfScanProgressPercentDone;
- (id)colorSyncProfilePath;
- (void)updateVendorFeature:(id)arg1;
- (id)scanner;
- (id)colorSyncModeForGrayOverview;
- (id)colorSyncModeForRGBOverview;
- (void)updateOverviewOvelayBuffer:(id)arg1;
- (void)updateScanProgressWithImageInfo:(id)arg1;
- (void)setBackgroundGrayValue:(unsigned char)arg1;
- (unsigned char)backgroundGrayValue;
- (void)clearOverviewImageBuffer;
- (id)initWithDictionary:(id)arg1 andScanner:(id)arg2;
- (void)finalize;
- (void)dealloc;
@property(readonly) NSDictionary *scanParams;
@property unsigned long long scanAreaOrientation;
- (void)updateOverviewSelectionRect:(struct CGRect)arg1;
@property struct CGRect scanArea;
@property(readonly) struct CGSize physicalSize;
- (void)addScanAreaToDictionary:(id)arg1;
- (void)setScanProgressPercentDone:(double)arg1;
@property unsigned long long overviewResolution;
- (void)setState:(unsigned int)arg1;
- (void)setVendorFeatures:(id)arg1;
@property unsigned long long scaleFactor;
@property unsigned long long resolution;
@property unsigned long long measurementUnit;
@property unsigned long long bitDepth;
@property unsigned long long pixelDataType;
@property(readonly) double scanProgressPercentDone;
- (id)overviewImageBufferRep;
- (struct CGImage *)grayOverviewImage;
@property(readonly) struct CGImage *overviewImage;
@property(readonly) BOOL overviewScanInProgress;
@property(readonly) BOOL scanInProgress;
@property(readonly) unsigned int state;
@property(readonly) BOOL canPerformOverviewScan;
- (id)currentSettings;
@property(readonly) NSArray *vendorFeatures;
@property(readonly) NSArray *templates;
@property unsigned char thresholdForBlackAndWhiteScanning;
@property(readonly) unsigned char defaultThresholdForBlackAndWhiteScanning;
@property BOOL usesThresholdForBlackAndWhiteScanning;
@property(readonly) BOOL acceptsThresholdForBlackAndWhiteScanning;
@property BOOL useOverviewImageAsFinalImage;
@property(readonly) BOOL supportsProgressNotificationsWithScanData;
- (unsigned long long)templateMeasurementUnit;
- (struct CGSize)minimumScanSizeInInches;
- (struct CGSize)physicalSizeInInches;
@property(readonly) NSIndexSet *preferredScaleFactors;
@property(readonly) NSIndexSet *supportedScaleFactors;
@property(readonly) NSIndexSet *preferredResolutions;
@property(readonly) NSIndexSet *supportedResolutions;
@property(readonly) unsigned long long nativeYResolution;
@property(readonly) unsigned long long nativeXResolution;
- (unsigned long long)measurementUnitPrivate;
@property(readonly) NSIndexSet *supportedMeasurementUnits;
@property(readonly) NSIndexSet *supportedBitDepths;
@property(readonly) unsigned long long type;

@end

