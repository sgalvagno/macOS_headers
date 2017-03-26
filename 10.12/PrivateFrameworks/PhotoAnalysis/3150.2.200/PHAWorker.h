//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/PHAWorkerConfiguration-Protocol.h>

@class NSString, NSURL, PHALibraryChangeListener, PHAManager, PHAServiceCancelableOperation, PHPhotoLibrary;
@protocol OS_dispatch_queue, PHAAssetResourceDataLoading;

@interface PHAWorker : NSObject <PHAWorkerConfiguration>
{
    PHAManager *_photoAnalysisManager;
    BOOL _shutdownHasBeenCalled;
    BOOL _warmedUp;
    id <PHAAssetResourceDataLoading> _dataLoader;
    PHAServiceCancelableOperation *_currentOperation;
    NSObject<OS_dispatch_queue> *_userInitiatedRequestQueue;
}

+ (void)configureXPCConnection:(id)arg1;
+ (BOOL)wantsToReceiveXPCRequestsOnUserInitiatedRequestQueue;
+ (BOOL)runsExclusively;
+ (short)workerType;
+ (long long)applicationDataFolderIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *userInitiatedRequestQueue; // @synthesize userInitiatedRequestQueue=_userInitiatedRequestQueue;
@property(retain) PHAServiceCancelableOperation *currentOperation; // @synthesize currentOperation=_currentOperation;
@property(retain, nonatomic) id <PHAAssetResourceDataLoading> dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic, getter=isWarmedUp) BOOL warmedUp; // @synthesize warmedUp=_warmedUp;
- (void).cxx_destruct;
@property(readonly, getter=isQuiescent) BOOL quiescent;
- (BOOL)allowCooldownForWorkerChange:(id)arg1;
- (BOOL)workerJobCausesCooldown:(id)arg1;
- (BOOL)shouldCooldownForConstraintChange:(id)arg1;
- (BOOL)shouldWarmupForConstraintChange:(id)arg1;
- (BOOL)warmupBasedOnConstraintChanges;
- (id)nextAdditionalJobWithScenario:(unsigned long long)arg1;
- (BOOL)hasAdditionalJobsForScenario:(unsigned long long)arg1;
- (BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)shutdown;
- (void)cooldown;
- (void)warmup;
- (void)startup;
- (id)libraryScopedWorkerPreferencesURL;
- (void)setLibraryScopedWorkerPreferencesValue:(id)arg1 forKey:(id)arg2;
- (void)updateLibraryScopedWorkerPreferencesWithEntriesFromDictionary:(id)arg1 keysToRemove:(id)arg2;
- (id)libraryScopedWorkerPreferences;
- (void)dispatchAsyncToExecutiveStateQueue:(CDUnknownBlockType)arg1;
- (void)assertUserInitiatedRequestQueue;
- (void)dispatchSyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (void)dispatchAsyncToUserInitiatedRequestQueue:(CDUnknownBlockType)arg1;
- (id)statusAsDictionary;
@property(readonly) BOOL isEnabled;
@property(readonly) PHALibraryChangeListener *changeListener;
@property(readonly) NSURL *persistentStorageDirectoryURL;
@property(readonly) NSObject<OS_dispatch_queue> *executiveStateQueue;
@property(readonly) PHPhotoLibrary *photoLibrary;
@property(readonly) PHAManager *photoAnalysisManager;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

