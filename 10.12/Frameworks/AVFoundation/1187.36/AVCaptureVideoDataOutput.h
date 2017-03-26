//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVCaptureOutput.h>

@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject;
@protocol AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface AVCaptureVideoDataOutput : AVCaptureOutput
{
    AVCaptureVideoDataOutputInternal *_internal;
}

+ (void)initialize;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoOrientationForConnection:(id)arg1;
- (BOOL)supportsVideoMirroringForConnection:(id)arg1;
- (void)_updateCompressorNodesForConnection:(id)arg1;
- (void)_updateVideoFrameRateGovernorNodeForConnection:(id)arg1;
- (void)_updateVideoDecompressorNodeForConnection:(id)arg1;
- (id)outputGraphNodeDescriptionForConnection:(id)arg1;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) BOOL alwaysDiscardsLateVideoFrames;
@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;
@property(copy, nonatomic) NSDictionary *videoSettings;
- (id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2;
@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;
@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;
- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;
@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;
- (void)dealloc;
- (id)init;

@end

