//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDImageProxyStateTable : RDTable
{
    LiKeyPath *_versionUuidKeyPath;
    LiKeyPath *_versionIdKeyPath;
    LiKeyPath *_thumbnailsCurrentKeyPath;
    LiKeyPath *_miniThumbnailsCurrentKeyPath;
    LiKeyPath *_tinyThumbnailsCurrentKeyPath;
    LiKeyPath *_fullSizePreviewUpToDateKeyPath;
    LiKeyPath *_thumbnailCacheIndexKeyPath;
    LiKeyPath *_thumbnailRenderedKeyPath;
    LiKeyPath *_previewRenderedKeyPath;
    LiKeyPath *_previewJpegHeightKeyPath;
    LiKeyPath *_previewJpegWidthKeyPath;
    LiKeyPath *_fullSizePreviewPathKeyPath;
    LiKeyPath *_thumbnailPathKeyPath;
    LiKeyPath *_thumbnailHeightKeyPath;
    LiKeyPath *_thumbnailWidthKeyPath;
    LiKeyPath *_miniThumbnailHeightKeyPath;
    LiKeyPath *_miniThumbnailWidthKeyPath;
    LiKeyPath *_tinyThumbnailHeightKeyPath;
    LiKeyPath *_tinyThumbnailWidthKeyPath;
    LiKeyPath *_miniThumbnailPathKeyPath;
    LiKeyPath *_faceTilePathKeyPath;
    LiKeyPath *_faceTilesCurrentKeyPath;
    LiKeyPath *_previewGenerationVersionKeyPath;
    LiKeyPath *_microThumbnailOrientationKeyPath;
    LiKeyPath *_previewJpegOrientationKeyPath;
    LiKeyPath *_thumbnailOrientationKeyPath;
    LiKeyPath *_miniThumbnailOrientationKeyPath;
    LiKeyPath *_tinyThumbnailOrientationKeyPath;
    LiKeyPath *_microThumbnailsCurrentKeyPath;
    LiKeyPath *_microThumbnailHeightKeyPath;
    LiKeyPath *_microThumbnailWidthKeyPath;
    LiKeyPath *_segmentColorSpaceKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *segmentColorSpaceKeyPath; // @synthesize segmentColorSpaceKeyPath=_segmentColorSpaceKeyPath;
@property(readonly, nonatomic) LiKeyPath *microThumbnailWidthKeyPath; // @synthesize microThumbnailWidthKeyPath=_microThumbnailWidthKeyPath;
@property(readonly, nonatomic) LiKeyPath *microThumbnailHeightKeyPath; // @synthesize microThumbnailHeightKeyPath=_microThumbnailHeightKeyPath;
@property(readonly, nonatomic) LiKeyPath *microThumbnailsCurrentKeyPath; // @synthesize microThumbnailsCurrentKeyPath=_microThumbnailsCurrentKeyPath;
@property(readonly, nonatomic) LiKeyPath *tinyThumbnailOrientationKeyPath; // @synthesize tinyThumbnailOrientationKeyPath=_tinyThumbnailOrientationKeyPath;
@property(readonly, nonatomic) LiKeyPath *miniThumbnailOrientationKeyPath; // @synthesize miniThumbnailOrientationKeyPath=_miniThumbnailOrientationKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailOrientationKeyPath; // @synthesize thumbnailOrientationKeyPath=_thumbnailOrientationKeyPath;
@property(readonly, nonatomic) LiKeyPath *previewJpegOrientationKeyPath; // @synthesize previewJpegOrientationKeyPath=_previewJpegOrientationKeyPath;
@property(readonly, nonatomic) LiKeyPath *microThumbnailOrientationKeyPath; // @synthesize microThumbnailOrientationKeyPath=_microThumbnailOrientationKeyPath;
@property(readonly, nonatomic) LiKeyPath *previewGenerationVersionKeyPath; // @synthesize previewGenerationVersionKeyPath=_previewGenerationVersionKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceTilesCurrentKeyPath; // @synthesize faceTilesCurrentKeyPath=_faceTilesCurrentKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceTilePathKeyPath; // @synthesize faceTilePathKeyPath=_faceTilePathKeyPath;
@property(readonly, nonatomic) LiKeyPath *miniThumbnailPathKeyPath; // @synthesize miniThumbnailPathKeyPath=_miniThumbnailPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *tinyThumbnailWidthKeyPath; // @synthesize tinyThumbnailWidthKeyPath=_tinyThumbnailWidthKeyPath;
@property(readonly, nonatomic) LiKeyPath *tinyThumbnailHeightKeyPath; // @synthesize tinyThumbnailHeightKeyPath=_tinyThumbnailHeightKeyPath;
@property(readonly, nonatomic) LiKeyPath *miniThumbnailWidthKeyPath; // @synthesize miniThumbnailWidthKeyPath=_miniThumbnailWidthKeyPath;
@property(readonly, nonatomic) LiKeyPath *miniThumbnailHeightKeyPath; // @synthesize miniThumbnailHeightKeyPath=_miniThumbnailHeightKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailWidthKeyPath; // @synthesize thumbnailWidthKeyPath=_thumbnailWidthKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailHeightKeyPath; // @synthesize thumbnailHeightKeyPath=_thumbnailHeightKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailPathKeyPath; // @synthesize thumbnailPathKeyPath=_thumbnailPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *fullSizePreviewPathKeyPath; // @synthesize fullSizePreviewPathKeyPath=_fullSizePreviewPathKeyPath;
@property(readonly, nonatomic) LiKeyPath *previewJpegWidthKeyPath; // @synthesize previewJpegWidthKeyPath=_previewJpegWidthKeyPath;
@property(readonly, nonatomic) LiKeyPath *previewJpegHeightKeyPath; // @synthesize previewJpegHeightKeyPath=_previewJpegHeightKeyPath;
@property(readonly, nonatomic) LiKeyPath *previewRenderedKeyPath; // @synthesize previewRenderedKeyPath=_previewRenderedKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailRenderedKeyPath; // @synthesize thumbnailRenderedKeyPath=_thumbnailRenderedKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailCacheIndexKeyPath; // @synthesize thumbnailCacheIndexKeyPath=_thumbnailCacheIndexKeyPath;
@property(readonly, nonatomic) LiKeyPath *fullSizePreviewUpToDateKeyPath; // @synthesize fullSizePreviewUpToDateKeyPath=_fullSizePreviewUpToDateKeyPath;
@property(readonly, nonatomic) LiKeyPath *tinyThumbnailsCurrentKeyPath; // @synthesize tinyThumbnailsCurrentKeyPath=_tinyThumbnailsCurrentKeyPath;
@property(readonly, nonatomic) LiKeyPath *miniThumbnailsCurrentKeyPath; // @synthesize miniThumbnailsCurrentKeyPath=_miniThumbnailsCurrentKeyPath;
@property(readonly, nonatomic) LiKeyPath *thumbnailsCurrentKeyPath; // @synthesize thumbnailsCurrentKeyPath=_thumbnailsCurrentKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionIdKeyPath; // @synthesize versionIdKeyPath=_versionIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionUuidKeyPath; // @synthesize versionUuidKeyPath=_versionUuidKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;
- (id)renderPropertyPaths;

@end

