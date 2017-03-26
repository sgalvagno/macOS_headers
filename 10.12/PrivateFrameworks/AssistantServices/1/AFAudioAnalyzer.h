//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/Endpointer-Protocol.h>

@class NSDictionary, NSMutableData, NSString;
@protocol AFAudioAnalyzerDelegate;

@interface AFAudioAnalyzer : NSObject <Endpointer>
{
    BOOL _detectedOneShotStartpoint;
    BOOL _detectedRecurrentStartpoint;
    BOOL _communicatedStartPointDetection;
    BOOL _detectedOneShotEndpoint;
    BOOL _detectedRecurrentEndpoint;
    BOOL _communicatedEndpointDetection;
    BOOL _haveSeenNonZeroSamples;
    double _sampleRate;
    double _samplesSeen;
    unsigned int _frameRate;
    double _totalSamples;
    double _lastOneShotStartpoint;
    double _lastOneShotEndpoint;
    double _lastRecurrentStartpoint;
    double _lastRecurrentEndpoint;
    NSMutableData *_floatSampleBuffer;
    NSDictionary *_topLevelParameterDict;
    NSString *_modelDictPath;
    struct ComponentInstanceRecord *_audioUnitEPVAD2;
    BOOL _isConfigured;
    BOOL _saveSampleSeenInReset;
    double _previousSamplesSeen;
    int _endpointMode;
    double _startWaitTime;
    double _interspeechWaitTime;
    double _endWaitTime;
    long long _style;
    double _delay;
    double _automaticEndpointingSuspensionEndTime;
    double _minimumDurationForEndpointer;
    id <AFAudioAnalyzerDelegate> _delegate;
}

@property(nonatomic) __weak id <AFAudioAnalyzerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double minimumDurationForEndpointer; // @synthesize minimumDurationForEndpointer=_minimumDurationForEndpointer;
@property(nonatomic) double automaticEndpointingSuspensionEndTime; // @synthesize automaticEndpointingSuspensionEndTime=_automaticEndpointingSuspensionEndTime;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) long long style; // @synthesize style=_style;
@property double endWaitTime; // @synthesize endWaitTime=_endWaitTime;
@property double interspeechWaitTime; // @synthesize interspeechWaitTime=_interspeechWaitTime;
@property double startWaitTime; // @synthesize startWaitTime=_startWaitTime;
@property int endpointMode; // @synthesize endpointMode=_endpointMode;
- (void).cxx_destruct;
- (void)reset;
- (int)getStatus:(struct AudioQueueBuffer *)arg1;
- (void)_detectVoiceActivityInSamples:(float *)arg1 numSamples:(unsigned int)arg2;
- (BOOL)configureWithASBD:(struct AudioStreamBasicDescription *)arg1 andFrameRate:(unsigned int)arg2;
- (void)_configureWithSampleRate:(double)arg1 andFrameRate:(unsigned int)arg2;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
- (void)saveSamplesSeenOnNextReset;
- (void)preheat;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

