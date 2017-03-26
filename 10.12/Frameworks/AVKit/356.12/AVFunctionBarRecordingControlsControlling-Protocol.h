//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVFunctionBarCaptureInputSourceItem, NSArray, NSNumber;

@protocol AVFunctionBarRecordingControlsControlling <NSObject>
@property(readonly) BOOL canStopRecording;
@property(readonly) BOOL canResumeRecording;
@property(readonly) BOOL canPauseRecording;
@property(readonly) BOOL canStartRecording;
@property(readonly, getter=isPaused) BOOL paused;
@property(readonly, getter=isRecording) BOOL recording;
@property(readonly) NSNumber *recordedFileSize;
@property(readonly) double recordedTime;
- (void)stopRecording;
- (void)resumeRecording;
- (void)pauseRecording;
- (void)startRecording;

@optional
@property(readonly) AVFunctionBarCaptureInputSourceItem *selectedScreenFunctionBarInputSourceItem;
@property(readonly) NSArray *screenFunctionBarInputSourceItems;
@property(readonly) AVFunctionBarCaptureInputSourceItem *selectedAudioFunctionBarInputSourceItem;
@property(readonly) NSArray *audioFunctionBarInputSourceItems;
@property(readonly) AVFunctionBarCaptureInputSourceItem *selectedVideoFunctionBarInputSourceItem;
@property(readonly) NSArray *videoFunctionBarInputSourceItems;
- (void)selectFunctionBarInputSourceItem:(AVFunctionBarCaptureInputSourceItem *)arg1;
@end

