//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCaptureFileOutputRecordingOperationDescriptor, AVCaptureOperationDescriptorQueue, MediaIOGraphNodeDescription, NSArray, NSError, NSLock, NSMutableArray, NSTimer, NSURL;

@interface AVCaptureMovieFileOutputInternal : NSObject
{
    struct __CFDictionary *splitterUnits;
    struct __CFDictionary *mixerUnits;
    struct __CFDictionary *decompressorUnits;
    struct __CFDictionary *videoFrameRateGovernorUnits;
    struct __CFDictionary *compressorUnits;
    struct __CFDictionary *compressorRenderCallbackContextTokens;
    struct __CFDictionary *fileControlCallbackContextTokens;
    MediaIOGraphNodeDescription *fileWriterOutputUnit;
    unsigned int activeConnectionCount;
    AVCaptureOperationDescriptorQueue *operationDescriptorQueue;
    NSLock *operationDescriptorQueueLock;
    AVCaptureFileOutputRecordingOperationDescriptor *runningRecordingOperationDescriptor;
    struct os_unfair_lock_s runningRecordingOperationDescriptorLock;
    CDStruct_1b6d18a9 syncTime;
    void *syncTimeConnection;
    struct os_unfair_lock_s syncTimeLock;
    CDStruct_1b6d18a9 timeWritten;
    long long sizeWritten;
    struct os_unfair_lock_s statsLock;
    CDStruct_1b6d18a9 movieFragmentInterval;
    struct os_unfair_lock_s movieFragmentIntervalLock;
    NSArray *metadata;
    struct os_unfair_lock_s metadataLock;
    BOOL wasForcedToPause;
    NSError *stopError;
    struct os_unfair_lock_s stopErrorLock;
    NSMutableArray *activeConnections;
    NSArray *noDataConnections;
    struct os_unfair_lock_s connectionsLock;
    BOOL fileControlCallbackRanSinceLastCheck;
    BOOL fileControlCallbackTimedOut;
    struct os_unfair_lock_s fileControlCallbackTimeoutLock;
    NSTimer *fileControlCallbackTimeoutTimer;
    NSURL *outputFileURL;
    BOOL recordingPaused;
    struct os_unfair_lock_s recordingStateLock;
}

@end

