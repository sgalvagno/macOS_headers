//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderTrackOutput;

@interface VCPVideoTrackStandardDecoder : VCPVideoTrackDecoder
{
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_trackOutput;
    struct opaqueCMSampleBuffer *_nextSample;
    long long _status;
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (long long)status;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;

@end

