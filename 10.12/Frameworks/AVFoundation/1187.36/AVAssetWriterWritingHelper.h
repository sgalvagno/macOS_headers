//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AVFoundation/AVAssetWriterHelper.h>

#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate-Protocol.h>

@class AVAssetWriterFigAssetWriterNotificationHandler, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AVAssetWriterWritingHelper : AVAssetWriterHelper <AVAssetWriterFigAssetWriterNotificationHandlerDelegate>
{
    struct OpaqueFigAssetWriter *_figAssetWriter;
    NSObject<OS_dispatch_queue> *_figAssetWriterAccessQueue;
    BOOL _startSessionCalled;
    AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;
}

+ (id)finalStepWorkaroundOperationWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1;
+ (id)prepareInputsOperationsWithInputs:(id)arg1;
- (id)_transitionToFinishWritingHelperWithFinishWritingOperations:(id)arg1;
- (id)_makeFinishWritingOperationsWithCustomFigAssetWriterFinishOperation:(id)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)finishWriting;
- (void)cancelWriting;
- (struct OpaqueFigAssetWriter *)_retainedFigAssetWriter;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (long long)status;
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)figTrackReferences;
- (id)initWithConfigurationState:(id)arg1 error:(id *)arg2;
- (id)initWithConfigurationState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

