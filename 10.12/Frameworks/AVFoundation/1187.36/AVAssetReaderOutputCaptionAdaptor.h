//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAssetReaderOutputAdaptor-Protocol.h>

@class AVAssetReaderOutputCaptionAdaptorInternal, AVAssetReaderTrackOutput;
@protocol AVAssetReaderCaptionValidationHandling;

@interface AVAssetReaderOutputCaptionAdaptor : NSObject <AVAssetReaderOutputAdaptor>
{
    AVAssetReaderOutputCaptionAdaptorInternal *_internal;
}

+ (id)assetReaderOutputCaptionAdaptorWithAssetReaderTrackOutput:(id)arg1;
- (id)captionsNotPresentInPreviousGroupsInCaptionGroup:(id)arg1;
- (id)nextCaptionGroup;
- (id)_readSampleBuffersAndReturnAVCaption;
@property(readonly, nonatomic) AVAssetReaderTrackOutput *assetReaderTrackOutput;
- (int)addExtractionForOutput:(id)arg1 figAssetReader:(struct OpaqueFigAssetReader *)arg2 options:(id)arg3 withOutputExtactionID:(int *)arg4;
- (void)finalize;
- (void)dealloc;
- (id)initWithAssetReaderTrackOutput:(id)arg1;
@property __weak id <AVAssetReaderCaptionValidationHandling> validationDelegate;
- (void)setFigCaptionToAVCaptionMapping:(const struct __CFDictionary *)arg1;
- (id)pairedAVCaptionForFigCaption:(const struct OpaqueFigCaption *)arg1;
- (void)appendOutputCaptionGroup:(id)arg1;

@end

