//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PlacesKit/PXPlacesMapLayout.h>

@class NSArray;

@interface PXPlacesMapThumbnailClusterLayout : PXPlacesMapLayout
{
    double _horizontalClusteringDistancePixels;
    double _verticalClusteringDistancePixels;
    id <PXPlacesMapLayoutResult> _currentMapLayoutResult;
    unsigned long long _currentChangeType;
    NSArray *_geotaggablesSortDescriptors;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *geotaggablesSortDescriptors; // @synthesize geotaggablesSortDescriptors=_geotaggablesSortDescriptors;
@property(nonatomic) unsigned long long currentChangeType; // @synthesize currentChangeType=_currentChangeType;
@property(retain, nonatomic) id <PXPlacesMapLayoutResult> currentMapLayoutResult; // @synthesize currentMapLayoutResult=_currentMapLayoutResult;
@property(nonatomic) double verticalClusteringDistancePixels; // @synthesize verticalClusteringDistancePixels=_verticalClusteringDistancePixels;
@property(nonatomic) double horizontalClusteringDistancePixels; // @synthesize horizontalClusteringDistancePixels=_horizontalClusteringDistancePixels;
- (id)_copyLayoutItem:(id)arg1;
- (long long)_substractRect:(CDStruct_02837cd9)arg1 from:(CDStruct_02837cd9)arg2 into:(CDStruct_02837cd9 *)arg3;
- (long long)_divideRectsOf:(id)arg1 from:(id)arg2 into:(CDStruct_02837cd9 *)arg3;
- (CDStruct_02837cd9)_minimalRectAtCoordinate:(struct CLLocationCoordinate2D)arg1 atScale:(double)arg2;
- (CDStruct_02837cd9)_minimalRectForGeotaggable:(id)arg1 atScale:(double)arg2;
- (CDStruct_02837cd9)_minimalRectForLayoutItem:(id)arg1 atScale:(double)arg2;
- (BOOL)_zoom:(double)arg1 isEqualToZoom:(double)arg2;
- (unsigned long long)_viewPortChangeTypeFrom:(id)arg1 to:(id)arg2;
- (void)_sortLayoutItems:(id)arg1;
- (id)_primaryGeotaggleInLayoutItem:(id)arg1;
- (void)_sortGeotaggables:(id)arg1;
- (id)_mutableSortedOrderdGeotaggablesSetFromSet:(id)arg1;
- (id)_clusterGeotaggables:(id)arg1 usingHorizontalClusteringDistance:(double)arg2 verticalClusteringDistance:(double)arg3 viewPort:(id)arg4 dataSource:(id)arg5 primaryLayoutGeotaggables:(id)arg6 maskToMapRect:(CDStruct_02837cd9)arg7;
- (id)_clusterGeotaggables:(id)arg1 fromMapRect:(CDStruct_02837cd9)arg2 viewPort:(id)arg3;
- (id)_clusterGeotaggablesInRect:(CDStruct_02837cd9)arg1 forViewPort:(id)arg2;
- (id)_clusterGeotaggablesInViewPort:(id)arg1;
- (id)_createIncrementalClusterForViewport:(id)arg1 fromViewPort:(id)arg2 appendLayoutItems:(id)arg3;
- (id)_createIncrementalClusterForViewport:(id)arg1 relativeToLayoutResult:(id)arg2 dataSourceChange:(id)arg3;
- (id)_handleZoomOutToViewPort:(id)arg1;
- (id)_handleZoomInToViewPort:(id)arg1;
- (id)_handlePitchChangeToViewPort:(id)arg1 dataSourceChange:(id)arg2;
- (id)_handlePanToViewPort:(id)arg1 dataSourceChange:(id)arg2;
- (id)layoutForViewPort:(id)arg1 andDataSourceChange:(id)arg2;

@end

