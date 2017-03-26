//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MRContext, MRImage, MRLayerEffect, MRLayerNavigator, MRLayerParallelizer, MRRenderArguments, MRSlideFocusState, NSArray, NSConditionLock, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol MRAsynchronousOperationsDelegate, MRLiveSlideshowDelegate, OS_dispatch_queue;

@interface MRRendererInternal : NSObject
{
    MRContext *mContext;
    double mMasterStartTime;
    double mMasterDuration;
    int mMasterMode;
    NSObject<OS_dispatch_queue> *mRenderDispatchQueue;
    NSConditionLock *mFrameLock;
    double mTimeOffset;
    double mUnalteredTimeOffset;
    double mMasterClock;
    BOOL mIsStalled;
    BOOL mRenderingRequested;
    BOOL mSlaveFrameMode;
    struct CGPoint mContextOffset;
    MRRenderArguments *mRenderArguments;
    struct CGImage *mSnapshotAsCGImage;
    NSConditionLock *mSnapshotAsCGImageLock;
    int mPreviousMode;
    double mModeChangeTime;
    NSMutableArray *mSelectedLayers;
    NSMutableDictionary *mLayerTrackings;
    NSMutableSet *mLayersCurrentlyTrackedIn;
    NSMutableDictionary *mGestureRecognizers;
    MRLayerEffect *mLayerCurrentlyTextEditing;
    NSString *mCurrentlyEditedTextElement;
    BOOL mShouldPauseWhenStill;
    BOOL mNeedsToResize;
    BOOL mNeedsToTemporaryResize;
    BOOL mNeedsToResumeOrPauseLayers;
    BOOL mNeedsToSynchronizeTimeInLayers;
    BOOL mNeedsToSynchronizeTimeInAudioMovies;
    struct CGSize mTemporarySize;
    double mMorphingStartTime;
    double mMorphingDuration;
    double mMorphingProgress;
    double mMorphingRotationAngle;
    BOOL mMorphingHandlesRotation;
    MRImage *mSnapshotForMorphing;
    NSMutableArray *mActions;
    NSDictionary *mDefaultActions;
    NSString *mTransitionLayerPlugObjectID;
    MRLayerParallelizer *mSlideFocusLayer;
    MRLayerNavigator *mSlideFocusNavigator;
    MRLayerEffect *mSlideFocuser[3];
    unsigned long long mCurrentSlideFocuserIndex;
    MRSlideFocusState *mSlideFocusState;
    NSMutableDictionary *mAudioPlayerBuckets;
    NSArray *mAudioPlayerSortedBuckets;
    id <MRLiveSlideshowDelegate> mLiveSlideshowDelegate;
    id <MRAsynchronousOperationsDelegate> mAsynchronousOperationsDelegate;
    BOOL mScreenBurnTest;
    unsigned long long mScreenBurnTestCurrentPass;
    MRImage *mScreenBurnTestAccumulationImage1;
    MRImage *mScreenBurnTestAccumulationImage2;
    NSMutableArray *mNavigatorHistoryBack;
    NSMutableArray *mNavigatorHistoryForth;
    BOOL mHideTextWhileEditing;
    double mFrameTime[64];
    unsigned int mFrameTimeIndex;
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *mRenderingLogFile;
    double mPreviousLogTime;
    double mLastSavedLogTime;
    NSString *mCurrentIDs;
    MRImage *mCurrentIDsImage;
    NSString *mPreviousCurrentIDs;
    double mOuterTime;
    int mTimeSyncRequestCount;
    int mIsPlayingSyncRequestCount;
    BOOL mOuterIsPlaying;
    BOOL mInnerIsPlaying;
    unsigned long long mCountOfPreloadingImages;
    NSMutableArray *mTouchesForVisualFeedback;
    NSMutableArray *mHitZonesForVisualFeedback;
    BOOL mUsesExternalDisplayLink;
}

@end

