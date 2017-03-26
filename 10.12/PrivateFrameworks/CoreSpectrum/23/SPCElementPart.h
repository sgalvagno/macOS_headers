//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSArray, NSMapTable, NSMutableArray, SPCElementStateDefinition;

@interface SPCElementPart : SPCObject
{
    SPCElementStateDefinition *_stateDefinition;
    NSMutableArray *_layers;
    long long _themeDocumentElementPartID;
    NSMapTable *_metricsStorageByState;
    NSMapTable *_unmodifiedMetricsStorageByState;
    struct CGSize _renditionSize;
}

@property(retain, nonatomic) NSMapTable *unmodifiedMetricsStorageByState; // @synthesize unmodifiedMetricsStorageByState=_unmodifiedMetricsStorageByState;
@property(retain, nonatomic) NSMapTable *metricsStorageByState; // @synthesize metricsStorageByState=_metricsStorageByState;
@property(nonatomic) long long themeDocumentElementPartID; // @synthesize themeDocumentElementPartID=_themeDocumentElementPartID;
@property(retain, nonatomic) NSMutableArray *layers; // @synthesize layers=_layers;
@property(copy) SPCElementStateDefinition *stateDefinition; // @synthesize stateDefinition=_stateDefinition;
@property(nonatomic) struct CGSize renditionSize; // @synthesize renditionSize=_renditionSize;
- (id)logicalPathToEnvironment;
- (void)applyAssetFilesToElementPartStates:(id)arg1;
- (void)applyAssetToElementPartStates:(id)arg1;
- (id)imageForState:(id)arg1 scaleFactor:(double)arg2;
- (id)imageForState:(id)arg1;
- (id)primaryImageFillEffectForState:(id)arg1;
- (BOOL)hasSingleImageFillEffectForState:(id)arg1;
- (struct CGSize)defaultSizeForState:(id)arg1;
- (void)removeObjectFromLayersAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertObject:(id)arg1 inLayersAtIndex:(unsigned long long)arg2;
- (void)addLayer:(id)arg1;
@property(readonly) NSArray *layersInVisualOrder;
- (id)recursiveDescription;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;
- (void)setSize:(id)arg1 forElementState:(id)arg2;
- (id)sizeForElementState:(id)arg1 includeInherited:(BOOL)arg2;
- (id)metricsStorageForElementState:(id)arg1;
@property(readonly, nonatomic) NSArray *elementStatesWithMetrics;
- (void)metricsStorageDidChange:(id)arg1;

@end

