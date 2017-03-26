//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject
{
    AVCaptureOutputInternal *_outputInternal;
}

+ (void)initialize;
- (int)configureAudioSplitter:(int)arg1 mixer:(int)arg2 converter:(int)arg3 forGraph:(struct OpaqueCMIOGraph *)arg4 connection:(id)arg5 withSettings:(id)arg6 audioFileType:(unsigned int)arg7 forceConverterToPassThru:(BOOL)arg8 setClientSequenceID:(BOOL)arg9;
- (void)_updateVideoDecompressorNodeForConnection:(id)arg1;
- (void)_updateCompressorNodesForConnection:(id)arg1;
- (void)inputPortFormatDescriptionDidChange:(id)arg1;
- (BOOL)supportsVideoMaxFrameDurationForConnection:(id)arg1;
- (BOOL)supportsVideoMinFrameDurationForConnection:(id)arg1;
- (long long)defaultVideoFieldModeForConnection:(id)arg1;
- (BOOL)supportsVideoFieldModeForConnection:(id)arg1;
- (long long)defaultVideoOrientationForConnection:(id)arg1;
- (BOOL)supportsVideoOrientationForConnection:(id)arg1;
- (BOOL)defaultVideoMirroringForConnection:(id)arg1;
- (BOOL)supportsVideoMirroringForConnection:(id)arg1;
- (BOOL)getAudioSplitterNode:(int *)arg1 andAudioMixerNode:(int *)arg2 forConnection:(id)arg3;
- (int)videoDecompressionRequirementForConnection:(id)arg1;
- (id)videoDecompressionSettingsForVideoConnection:(id)arg1;
- (id)h264ProfileLevelForBitRate:(long long)arg1;
- (long long)h264BitRateForConnection:(id)arg1;
- (id)_preferredInputPixelBufferAttributesForConnection:(id)arg1;
- (id)_vtCompressionPropertiesForConnection:(id)arg1;
- (struct CGSize)_videoOutputSettingsSizeForConnection:(id)arg1;
- (id)avCaptureOutputSettingsForConnection:(id)arg1 fileType:(id)arg2;
- (void)graphWillStopForSession:(id)arg1 error:(id)arg2;
- (void)graphWillStartForSession:(id)arg1;
- (unsigned int)connectionUnitInputNumberForConnection:(id)arg1;
- (id)outputGraphNodeDescriptionForConnection:(id)arg1;
- (int)connectionGraphNodeForConnection:(id)arg1;
- (BOOL)setEnabled:(BOOL)arg1 forConnection:(id)arg2;
- (void)removeOutputUnitsForConnection:(id)arg1 fromGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3;
- (BOOL)addOutputUnitsForConnection:(id)arg1 toGraph:(struct OpaqueCMIOGraph *)arg2 ofCaptureSession:(id)arg3 error:(id *)arg4;
- (id)firstActiveConnection;
- (id)activeConnections;
- (void)removeConnection:(id)arg1;
- (id)insertConnection:(id)arg1 atIndex:(unsigned long long)arg2 error:(id *)arg3;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)firstEnabledConnectionForMediaType:(id)arg1;
- (id)notReadyError;
- (BOOL)prefersMixedAudio;
- (id)connectionWithMediaType:(id)arg1;
@property(readonly, nonatomic) NSArray *connections;
- (BOOL)canAddConnectionForMediaType:(id)arg1;
- (id)connectionMediaTypes;
- (void)setSession:(id)arg1;
- (id)session;
- (void)dealloc;
- (id)init;

@end

