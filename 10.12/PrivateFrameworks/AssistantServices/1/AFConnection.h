//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSError, NSMutableDictionary, NSString, NSXPCConnection;
@protocol AFAssistantUIService, AFSpeechDelegate, OS_dispatch_group, OS_dispatch_source;

@interface AFConnection : NSObject
{
    NSXPCConnection *_connection;
    NSString *_outstandingRequestClass;
    NSArray *_cachedBulletins;
    long long _activeRequestType;
    BOOL _hasActiveTimeout;
    long long _activeRequestUsefulUserResultType;
    NSMutableDictionary *_replyHandlerForAceId;
    unsigned int _stateInSync:1;
    unsigned int _shouldSpeak:1;
    unsigned int _isCapturingSpeech:1;
    unsigned int _hasOutstandingRequest:1;
    NSData *_levelsSharedData;
    NSObject<OS_dispatch_source> *_levelsTimer;
    unsigned int _clientStateIsInSync:1;
    unsigned int _voiceOverIsActive:1;
    NSError *_lastRetryError;
    NSObject<OS_dispatch_group> *_speechCallbackGroup;
    NSString *_requestIdString;
    id <AFAssistantUIService> _delegate;
    id <AFSpeechDelegate> _speechDelegate;
}

+ (void)defrost;
+ (id)outputVoice;
+ (id)currentLanguageCode;
+ (BOOL)userDataSyncNeeded;
+ (void)stopMonitoringAvailability;
+ (BOOL)isAvailable;
+ (void)beginMonitoringAvailability;
+ (BOOL)assistantIsSupported;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 productName:(id)arg2 productVersion:(id)arg3 error:(id *)arg4;
+ (BOOL)siriIsSupportedForLanguageCode:(id)arg1 deviceProductVersion:(id)arg2 error:(id *)arg3;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <AFSpeechDelegate> speechDelegate; // @synthesize speechDelegate=_speechDelegate;
@property(nonatomic) __weak id <AFAssistantUIService> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_speechRecordingDidFailWithError:(id)arg1;
- (void)stopCurrentAudioPlaybackRequest:(BOOL)arg1;
- (void)startAudioPlaybackRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)checkLanguageReady:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)willPresentUsefulUserResultWithType:(long long)arg1 forCommand:(id)arg2;
- (void)willPresentUsefulUserResultWithType:(long long)arg1;
- (void)usefulUserResultWillPresent;
- (void)telephonyRequestCompleted;
- (void)prepareForPhoneCall;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;
- (void)setApplicationContextForApplicationInfos:(id)arg1;
- (void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;
- (void)setApplicationContext:(id)arg1;
- (void)willSetApplicationContextWithRefId:(id)arg1;
- (void)clearContext;
- (void)getCachedObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendReplyCommand:(id)arg1;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(CDUnknownBlockType)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (float)peakPower;
- (float)averagePower;
- (BOOL)shouldSpeak;
@property(readonly, nonatomic) BOOL hasActiveRequest;
@property(readonly, nonatomic) BOOL isRecording;
- (void)rollbackRequest;
- (void)rollbackClearContext;
- (void)recordRequestMetric:(id)arg1 withTimestamp:(double)arg2;
- (void)recordUIMetrics:(id)arg1;
- (void)updateSpeechOptions:(id)arg1;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)stopSpeech;
- (void)cancelSpeech;
- (void)startAcousticIDRequestWithOptions:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (CDUnknownBlockType)startRecordingAndGetContinueBlockForPendingSpeechRequestWithOptions:(id)arg1;
- (void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)_startRequestWithInfo:(id)arg1 analyticsEventProvider:(CDUnknownBlockType)arg2;
- (void)startRequestWithInfo:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2 userSelectionResults:(id)arg3;
- (void)startContinuationRequestWithUserInfo:(id)arg1;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithText:(id)arg1;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)didDismissUI;
- (void)willPresentUI;
- (void)forceAudioSessionInactive;
- (void)forceAudioSessionActive;
- (void)boostedPreheatWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;
- (void)preheatWithStyle:(long long)arg1;
- (void)invalidate;
- (void)endSession;
- (void)_willPresentUsefulUserResultWithType:(long long)arg1;
- (void)_willCompleteRequest;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willCancelRequest;
- (void)_willEndSession;
- (void)_willStartRequestForSpeech:(BOOL)arg1 analyticsEventProvider:(CDUnknownBlockType)arg2;
- (void)_updateClientState;
- (void)_updateState;
- (void)_extendExistingRequestTimeout;
- (void)_extendRequestTimeout;
- (void)_cancelRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_scheduleRequestTimeout;
- (id)_connection;
- (void)_clearConnection;
- (void)_connectionInterrupted;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateSpeechRecognizedPartialResult:(id)arg1;
- (void)_tellSpeechDelegateDidRecognizePhrases:(id)arg1 utterances:(id)arg2;
- (void)_tellSpeechDelegateRecognitionUpdateWillBeginForTask:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFinishRecognitionUpdateWithError:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidUpdateRecognitionPhrases:(id)arg1 utterances:(id)arg2 refId:(id)arg3;
- (void)_tellSpeechDelegateRecognizedAdditionalSpeechInterpretation:(id)arg1 refId:(id)arg2;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateToPerformTwoShotPromptWithType:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_tellSpeechDelegateRecordingDidDetectStartpoint;
- (void)_tellSpeechDelegateRecordingDidChangeAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;
- (void)_tellDelegateAudioSessionDidEndInterruption:(BOOL)arg1;
- (void)_tellDelegateAudioSessionDidBeginInterruption;
- (void)_tellDelegateExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;
- (void)_tellDelegateExtensionRequestWillStartForApplication:(id)arg1;
- (void)_tellDelegateCacheImage:(id)arg1;
- (void)_tellDelegateInvalidateCurrentUserActivity;
- (void)_tellDelegateSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;
- (void)_tellDelegateDidFinishAcousticIDRequestWithSuccess:(BOOL)arg1;
- (void)_tellDelegateDidDetectMusic;
- (void)_tellDelegateWillStartAcousticIDRequest;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateRequestWillStart;
- (void)_stopLevelUpdates;
- (void)_setLevelsWithSharedMem:(id)arg1;
- (void)_aceConnectionWillRetryOnError:(id)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_doCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3 analyticsEventProvider:(CDUnknownBlockType)arg4;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 analyticsEventProvider:(CDUnknownBlockType)arg3;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)sendFeedbackToAppPreferencesPredictorForMetricsContext:(id)arg1 selectedBundleId:(id)arg2;
- (void)requestBarrier:(CDUnknownBlockType)arg1;
- (void)cancelRequest;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)startUIRequest;
- (id)_cachedBulletins;
- (id)_clientServiceWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)_clientService;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_barrier;

@end

