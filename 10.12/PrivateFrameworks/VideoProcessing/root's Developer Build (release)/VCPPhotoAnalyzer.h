//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAsset, NSData, NSDictionary, NSMutableDictionary;

@interface VCPPhotoAnalyzer : NSObject
{
    unsigned long long _requestedAnalyses;
    struct CGAffineTransform _transform;
    struct __CVBuffer *_image;
    struct __CVBuffer *_imageLowRes;
    BOOL _isPano;
    NSDictionary *_exif;
    NSMutableDictionary *_analysis;
    NSMutableDictionary *_results;
    AVAsset *_irisAsset;
    unsigned long long _irisAnalyses;
    float _irisPhotoOffsetSec;
    float _irisPhotoExposureSec;
    NSData *_featureData;
    NSDictionary *_phFaceResults;
    unsigned long long _phFaceFlags;
    long long _status;
}

+ (BOOL)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;
@property(readonly) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)analyzeAsset:(CDUnknownBlockType)arg1;
- (int)analyzeImage:(unsigned long long *)arg1 performedAnalyses:(unsigned long long *)arg2 objectRect:(id)arg3 cancel:(CDUnknownBlockType)arg4;
- (int)downscaleImage:(struct __CVBuffer *)arg1 scaledImage:(struct __CVBuffer **)arg2 majorDimension:(int)arg3;
- (void)dealloc;
- (id)initWithImage:(struct __CVBuffer *)arg1 exif:(id)arg2 pairMovie:(id)arg3 forAnalysisTypes:(unsigned long long)arg4;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;

@end

