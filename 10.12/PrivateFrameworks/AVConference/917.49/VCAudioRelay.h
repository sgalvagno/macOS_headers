//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class VCAudioRelayIO;
@protocol OS_dispatch_source;

@interface VCAudioRelay : NSObject
{
    BOOL _isRelayRunning;
    float _IOBufferDuration;
    struct _opaque_pthread_t {
        long long _field1;
        struct __darwin_pthread_handler_rec *_field2;
        char _field3[8176];
    } *_relayThread;
    struct _opaque_pthread_cond_t _wakeUpCondition;
    struct _opaque_pthread_mutex_t _wakeUpMutex;
    struct OpaqueAudioConverter *_clientToRemoteConverter;
    struct OpaqueAudioConverter *_remoteToClientConverter;
    VCAudioRelayIO *_remoteIO;
    VCAudioRelayIO *_clientIO;
    struct _opaque_pthread_mutex_t _relayLock;
    NSObject<OS_dispatch_source> *_periodicHealthPrintDispatchSource;
    unsigned int _blocksRelayedCount;
    float _clientUplinkPowerMovingAverage;
    float _clientDownlinkPowerMovingAverage;
    struct opaqueCMSimpleQueue *_eventQueue;
    CDStruct_bdecc0cd _threadEvent;
}

@property(readonly) CDStruct_bdecc0cd threadEvent; // @synthesize threadEvent=_threadEvent;
@property(readonly) struct opaqueCMSimpleQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(readonly) float clientUplinkPowerMovingAverage; // @synthesize clientUplinkPowerMovingAverage=_clientUplinkPowerMovingAverage;
@property(readonly) float clientDownlinkPowerMovingAverage; // @synthesize clientDownlinkPowerMovingAverage=_clientDownlinkPowerMovingAverage;
@property(readonly) unsigned int blocksRelayedCount; // @synthesize blocksRelayedCount=_blocksRelayedCount;
@property(readonly) NSObject<OS_dispatch_source> *periodicHealthPrintDispatchSource; // @synthesize periodicHealthPrintDispatchSource=_periodicHealthPrintDispatchSource;
@property(readonly) struct OpaqueAudioConverter *clientToRemoteConverter; // @synthesize clientToRemoteConverter=_clientToRemoteConverter;
@property(readonly) struct OpaqueAudioConverter *remoteToClientConverter; // @synthesize remoteToClientConverter=_remoteToClientConverter;
@property(readonly) float IOBufferDuration; // @synthesize IOBufferDuration=_IOBufferDuration;
@property(readonly) BOOL isRelayRunning; // @synthesize isRelayRunning=_isRelayRunning;
@property(readonly, copy) VCAudioRelayIO *clientIO; // @synthesize clientIO=_clientIO;
@property(readonly, copy) VCAudioRelayIO *remoteIO; // @synthesize remoteIO=_remoteIO;
- (void)startPeriodicHealthPrint;
- (void)updateRealTimeStats;
- (void)sleepTillTime:(struct timespec *)arg1;
- (void)forwardSamplesFromIO:(id)arg1 toIO:(id)arg2 withConverter:(struct OpaqueAudioConverter *)arg3;
- (float)rmsPowerOfBuffer:(float *)arg1 numSamples:(unsigned int)arg2;
- (void)printStreamFormats;
- (void)destroyAudioConverters;
- (struct OpaqueAudioConverter *)newAudioConverterWithInputFormat:(struct AudioStreamBasicDescription *)arg1 outputFormat:(struct AudioStreamBasicDescription *)arg2 withError:(id *)arg3;
- (BOOL)createAudioConvertersWithError:(id *)arg1;
- (void)stopRelayThread;
- (BOOL)startRelayThreadWithError:(id *)arg1;
- (BOOL)canSetPropertyWithError:(id *)arg1;
- (void)stop;
- (BOOL)start;
- (BOOL)startRelayIO:(id)arg1 name:(id)arg2;
- (BOOL)setClientIO:(id)arg1 withError:(id *)arg2;
- (BOOL)setRemoteIO:(id)arg1 withError:(id *)arg2;
- (BOOL)setIOBufferDuration:(float)arg1 withError:(id *)arg2;
- (void)dealloc;
- (id)init;

@end

