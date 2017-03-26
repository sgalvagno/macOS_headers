//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SceneKit/_SCNExportOperation.h>

@class AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor;

__attribute__((visibility("hidden")))
@interface SCNMovieExportOperation : _SCNExportOperation
{
    AVAssetWriterInput *_assetWriterInput;
    AVAssetWriterInputPixelBufferAdaptor *_avAdaptor;
    AVAssetWriter *_assetWriter;
    float _rate;
}

- (void)main;
- (void)appendImage:(struct CGImage *)arg1 withPresentationTime:(CDStruct_198678f7)arg2 usingAdaptor:(id)arg3;
- (void)_finishedExport;
- (struct CGImage *)_copySnapshotWithOptions:(id)arg1;
- (void)_setupMovieToWritableFile:(id)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1 size:(struct CGSize)arg2 attributes:(id)arg3 outputURL:(id)arg4;

@end

