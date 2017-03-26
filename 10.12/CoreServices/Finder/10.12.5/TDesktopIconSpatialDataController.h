//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TIconSpatialDataController.h"

@interface TDesktopIconSpatialDataController : TIconSpatialDataController
{
    struct vector<unsigned int, std::__1::allocator<unsigned int>> _displayList;
    struct TDisplayConfiguration _displayConfiguration;
    struct vector<TSpatialDataCacheElement, std::__1::allocator<TSpatialDataCacheElement>> _volumeSpatialDataCache;
    struct TNSRef<NSMutableDictionary *, void> _bulkNodesAndSpatialData;
}

+ (struct TString)createKeyString:(const struct TFENode *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearVolume:(const struct TFENode *)arg1;
- (void)removeVolumeFromCache:(const struct TFENode *)arg1;
- (void)setNodePropertyList:(struct TFENodePropertyList *)arg1 spatialData:(const struct DataBrowserItemSpatialData *)arg2;
- (_Bool)loadSpatialData:(struct DataBrowserItemSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (_Bool)loadDesktopSpatialData:(struct DesktopIconSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (void)writeSpatialDataInBulk:(const struct TFENode *)arg1 nodes:(const struct TFENodeVector *)arg2 spatialData:(const vector_3577cbd0 *)arg3;
- (void)writeSpatialData:(const struct DataBrowserItemSpatialData *)arg1 forNode:(const struct TFENode *)arg2;
- (void)setSpatialDataBulkMode:(_Bool)arg1 forParent:(const struct TFENode *)arg2;
- (void)relativeSpatialData:(const struct DesktopIconSpatialData *)arg1 toAbsoluteSpatialData:(struct DataBrowserItemSpatialData *)arg2 homothetic:(_Bool)arg3;
- (_Bool)absoluteSpatialData:(const struct DataBrowserItemSpatialData *)arg1 toRelativeSpatialData:(struct DesktopIconSpatialData *)arg2;
- (unsigned int)displayContaining:(const struct CGPoint *)arg1 getClosestCorner:(unsigned int *)arg2 andRelativeLocation:(struct CGPoint *)arg3;
- (unsigned int)displayByIndex:(unsigned long long)arg1;
- (unsigned int)primaryDisplay;
- (void)configurationChanged;
- (id)init;

@end

