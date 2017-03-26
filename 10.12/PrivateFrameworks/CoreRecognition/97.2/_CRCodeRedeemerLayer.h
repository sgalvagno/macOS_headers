//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreRecognition/CRCodeRedeemerLayer.h>

#import <CoreRecognition/AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h>
#import <CoreRecognition/CAAnimationDelegate-Protocol.h>

@class AVCaptureDevice, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, BoxLayer, CALayer, ErrorLayer, NSDate, NSDictionary, NSObject, NSString, NSTimer;
@protocol CALayerDelegate><CRCodeRedeemerLayerDelegate><CRCodeRedeemerLayerDelegatePrivate, CRCodeRedeemerLayerDebuggingDelegate, OS_dispatch_queue;

@interface _CRCodeRedeemerLayer : CRCodeRedeemerLayer <AVCaptureVideoDataOutputSampleBufferDelegate, CAAnimationDelegate>
{
    id <CRCodeRedeemerLayerDebuggingDelegate> _debuggingDelegate;
    AVCaptureSession *_session;
    AVCaptureDevice *_inputDevice;
    AVCaptureVideoPreviewLayer *_previewLayer;
    AVCaptureVideoDataOutput *_videoDataOutput;
    struct vImage_Buffer _lastvImageBuffer;
    unsigned long long _cameraModel;
    NSString *_cameraPreset;
    CALayer *_containerLayer;
    CALayer *_overlayLayer;
    ErrorLayer *_errorTextLayer;
    BoxLayer *_boxLayer;
    struct CGPoint _oldPosition;
    double _oldAngle;
    struct CGSize _oldSize;
    NSDate *_date;
    NSDate *_boxFoundDate;
    NSDate *_boxMovedTimestamp;
    int _isCaptureModeOnly;
    BOOL _isBatchModeOnly;
    BOOL _isActiveRedeemer;
    BOOL _isReadyForProcessing;
    BOOL _isContinuousCapture;
    BOOL _redeemerShowsMessageError;
    long long _whiteBalanceMode;
    long long _focusMode;
    long long _exposureMode;
    long long _torchMode;
    long long _cameraMode;
    unsigned long long _numberOfLinesInErrorText;
    NSString *_currentCode;
    double _confidenceThreshold;
    double _sessionTimeout;
    BOOL _isFirstBoxDetection;
    BOOL _isCaptureUpsideDown;
    BOOL _isLastCapture;
    BOOL _sessionIsRunning;
    struct CGColor *_defaultColor;
    BOOL _isRectangleMoving;
    NSTimer *_statusFadeTimer;
    BOOL _cameraIsRunning;
    NSDictionary *_lastRectangleInfos;
    BOOL _foundBoundingBox;
    id <CALayerDelegate><CRCodeRedeemerLayerDelegate><CRCodeRedeemerLayerDelegatePrivate> _delegate;
    NSObject<OS_dispatch_queue> *_videoQueue;
    BOOL _videoQueueSuspended;
}

+ (id)layer;
+ (BOOL)isCRCodeRedeemerAvailable;
+ (id)defaultSupportedDevice;
+ (void)loadFonts;
@property BOOL videoQueueSuspended; // @synthesize videoQueueSuspended=_videoQueueSuspended;
@property NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(retain, nonatomic) NSDictionary *lastRectangleInfos; // @synthesize lastRectangleInfos=_lastRectangleInfos;
@property(nonatomic) unsigned long long cameraModel; // @synthesize cameraModel=_cameraModel;
@property(nonatomic) unsigned long long numberOfLinesInErrorText; // @synthesize numberOfLinesInErrorText=_numberOfLinesInErrorText;
@property(nonatomic) BOOL redeemerShowsMessageError; // @synthesize redeemerShowsMessageError=_redeemerShowsMessageError;
@property(nonatomic) BOOL foundBoundingBox; // @synthesize foundBoundingBox=_foundBoundingBox;
@property(retain, nonatomic) NSTimer *statusFadeTimer; // @synthesize statusFadeTimer=_statusFadeTimer;
@property(nonatomic) BOOL isRectangleMoving; // @synthesize isRectangleMoving=_isRectangleMoving;
- (void)setDefaultColor:(struct CGColor *)arg1;
- (struct CGColor *)defaultColor;
@property(retain, nonatomic) ErrorLayer *errorTextLayer; // @synthesize errorTextLayer=_errorTextLayer;
@property(nonatomic) BOOL isContinuousCapture; // @synthesize isContinuousCapture=_isContinuousCapture;
@property(retain, nonatomic) NSDate *boxMovedTimestamp; // @synthesize boxMovedTimestamp=_boxMovedTimestamp;
@property(retain, nonatomic) NSDate *boxFoundDate; // @synthesize boxFoundDate=_boxFoundDate;
@property(nonatomic) struct CGSize oldSize; // @synthesize oldSize=_oldSize;
@property(nonatomic) double oldAngle; // @synthesize oldAngle=_oldAngle;
@property(nonatomic) struct CGPoint oldPosition; // @synthesize oldPosition=_oldPosition;
@property(retain, nonatomic) CALayer *overlayLayer; // @synthesize overlayLayer=_overlayLayer;
@property(nonatomic) BOOL sessionIsRunning; // @synthesize sessionIsRunning=_sessionIsRunning;
@property(nonatomic) BOOL isFirstBoxDetection; // @synthesize isFirstBoxDetection=_isFirstBoxDetection;
@property(copy, nonatomic) NSString *currentCode; // @synthesize currentCode=_currentCode;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) double confidenceThreshold; // @synthesize confidenceThreshold=_confidenceThreshold;
@property(nonatomic) BOOL isActiveRedeemer; // @synthesize isActiveRedeemer=_isActiveRedeemer;
@property(nonatomic) id <CRCodeRedeemerLayerDebuggingDelegate> debuggingDelegate; // @synthesize debuggingDelegate=_debuggingDelegate;
- (void)setSessionTimeout:(double)arg1;
- (double)sessionTimeout;
- (void)setDelegate:(id)arg1;
- (id)delegate;
@property(retain, nonatomic) NSString *cameraPreset; // @synthesize cameraPreset=_cameraPreset;
@property(nonatomic) long long cameraMode; // @synthesize cameraMode=_cameraMode;
@property(nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) long long exposureMode; // @synthesize exposureMode=_exposureMode;
@property(nonatomic) long long focusMode; // @synthesize focusMode=_focusMode;
@property(nonatomic) long long whiteBalanceMode; // @synthesize whiteBalanceMode=_whiteBalanceMode;
@property(nonatomic) BOOL isReadyForProcessing; // @synthesize isReadyForProcessing=_isReadyForProcessing;
@property(nonatomic) BOOL isCaptureUpsideDown; // @synthesize isCaptureUpsideDown=_isCaptureUpsideDown;
@property(nonatomic) BOOL isBatchModeOnly; // @synthesize isBatchModeOnly=_isBatchModeOnly;
@property(nonatomic) BOOL isLastCapture; // @synthesize isLastCapture=_isLastCapture;
@property(nonatomic) int isCaptureModeOnly; // @synthesize isCaptureModeOnly=_isCaptureModeOnly;
@property(retain, nonatomic) CALayer *containerLayer; // @synthesize containerLayer=_containerLayer;
@property(retain, nonatomic) BoxLayer *boxLayer; // @synthesize boxLayer=_boxLayer;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) AVCaptureDevice *inputDevice; // @synthesize inputDevice=_inputDevice;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (struct CGSize)frameSizeForText:(id)arg1 withContrainedWidth:(double)arg2;
- (id)generateStringFromDate:(id)arg1;
- (void)didStartMaskAnimationOnLayer:(id)arg1 withDuration:(double)arg2;
- (id)generateGradientLayer;
- (void)showCodeRedeemStatus:(id)arg1 withColor:(struct CGColor *)arg2 forDuration:(double)arg3 style:(int)arg4;
- (void)showCodeRedeemStatus:(id)arg1 withColor:(struct CGColor *)arg2 withGlow:(struct CGColor *)arg3 forDuration:(double)arg4 style:(int)arg5;
- (void)shutdownCameraSession;
- (void)stopSession;
- (void)startSession;
- (void)startSessionWithImage:(struct vImage_Buffer)arg1;
- (id)findRectInImageBuffer:(struct vImage_Buffer)arg1;
- (struct __CFArray *)codeImagesFromImageBuffer:(struct vImage_Buffer)arg1 andPointList:(id)arg2;
- (id)recognizeDigitImages:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)preprocessImageSource:(struct vImage_Buffer)arg1 destination:(const struct vImage_Buffer *)arg2;
- (void)generateBoxFromPoints:(id)arg1 withTextCode:(id)arg2;
- (void)manageFadeoutTransition;
- (void)timedStatusMessageFadeOut;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)fadeoutLayerBox;
- (void)initialColorSettingForBoxLayer;
- (void)setupInitialLayerConfiguration;
- (void)setupCameraSession;
- (id)init;
- (void)screenSwitch:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

