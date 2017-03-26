//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSDictionary, NSError, NSString, VCCallSession, VCCaptionsTranscription, VCVideoRule, VideoAttributes;

@protocol VCCallSessionDelegate
- (void)didReceiveCaptions:(VCCaptionsTranscription *)arg1 remoteClient:(unsigned int)arg2;
- (BOOL)session:(VCCallSession *)arg1 stopVideoReceive:(id *)arg2 isPausing:(BOOL)arg3;
- (BOOL)stopVideoSend:(BOOL)arg1 error:(id *)arg2;
- (BOOL)session:(VCCallSession *)arg1 startVideoReceive:(id *)arg2;
- (BOOL)session:(VCCallSession *)arg1 startVideoSend:(id *)arg2 captureRule:(VCVideoRule *)arg3 isUnpausing:(BOOL)arg4;
- (void)session:(VCCallSession *)arg1 remoteCallingModeChanged:(unsigned int)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 localAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)session:(VCCallSession *)arg1 remoteAudioEnabled:(BOOL)arg2 withCallID:(unsigned int)arg3;
- (void)didChangeLocalVariablesForSession:(VCCallSession *)arg1;
- (void)session:(VCCallSession *)arg1 didReceiveData:(NSData *)arg2 messageType:(unsigned int)arg3 withCallID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 changeVideoRulesToCaptureRule:(VCVideoRule *)arg2 encodeRule:(VCVideoRule *)arg3 featuresListString:(NSString *)arg4;
- (void)session:(VCCallSession *)arg1 connectionDidChangeWithLocalInterfaceType:(NSString *)arg2 remoteInterfaceType:(NSString *)arg3 callID:(unsigned int)arg4;
- (void)session:(VCCallSession *)arg1 localIPChange:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)session:(VCCallSession *)arg1 didChangeVideoRule:(VCVideoRule *)arg2;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (void)session:(VCCallSession *)arg1 withCallID:(unsigned int)arg2 videoIsDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)setBWEOptions:(BOOL)arg1 UseNewBWEMode:(BOOL)arg2 FakeLargeFrameMode:(BOOL)arg3 ProbingSenderLog:(BOOL)arg4;
- (void)session:(VCCallSession *)arg1 didChangeRemoteScreenAttributes:(VideoAttributes *)arg2;
- (_Bool)didDetectBandwidth:(BOOL)arg1 upstreamBandwidth:(int)arg2 downstreamBandwidth:(int)arg3;
- (void)session:(VCCallSession *)arg1 packMeters:(char *)arg2 withLength:(char *)arg3;
- (void)session:(VCCallSession *)arg1 remoteMediaStalled:(BOOL)arg2;
- (void)session:(VCCallSession *)arg1 receivedNoPacketsForSeconds:(double)arg2;
- (void)session:(VCCallSession *)arg1 cancelRelayRequest:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 sendRelayResponse:(NSDictionary *)arg2;
- (void)session:(VCCallSession *)arg1 initiateRelayRequest:(NSDictionary *)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)remoteAudioDidPause:(BOOL)arg1 callID:(unsigned int)arg2;
- (void)session:(VCCallSession *)arg1 didPauseVideo:(BOOL)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didPauseAudio:(BOOL)arg2 error:(NSError *)arg3;
- (BOOL)session:(VCCallSession *)arg1 didStopVideoIO:(BOOL)arg2 error:(id *)arg3;
- (_Bool)session:(VCCallSession *)arg1 receivedRemoteFrame:(struct __CVBuffer *)arg2 atTime:(CDStruct_1b6d18a9)arg3 withScreenAttributes:(VideoAttributes *)arg4 videoAttributes:(VideoAttributes *)arg5 isFirstFrame:(BOOL)arg6 isVideoPaused:(BOOL)arg7;
- (_Bool)session:(VCCallSession *)arg1 startVideoIO:(id *)arg2 captureRule:(VCVideoRule *)arg3 isUnpausing:(BOOL)arg4;
- (void)session:(VCCallSession *)arg1 didStopWithError:(NSError *)arg2;
- (void)session:(VCCallSession *)arg1 cleanUpWithDelay:(long long)arg2 error:(NSError *)arg3;
- (void)session:(VCCallSession *)arg1 didStart:(BOOL)arg2 connectionType:(unsigned int)arg3 localInterfaceType:(NSString *)arg4 remoteInterfaceType:(NSString *)arg5 error:(NSError *)arg6;
@end

