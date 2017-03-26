//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SystemMigration/SMMigrationEngineProtocol-Protocol.h>
#import <SystemMigration/SMPathsProgressInfoDelegateProtocol-Protocol.h>
#import <SystemMigration/SMSystemScannerChangesProtocol-Protocol.h>
#import <SystemMigration/SMSystemScannerDaemonClient-Protocol.h>

@class NSArray, NSDate, NSError, NSMutableArray, NSMutableSet, NSProgress, NSString, SMEngineDelegateProxy, SMMigrationRequest, SMWindowsMacPathMapper;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SMMigrateEngine : NSObject <SMMigrationEngineProtocol, SMSystemScannerDaemonClient, SMSystemScannerChangesProtocol, SMPathsProgressInfoDelegateProtocol>
{
    BOOL _engineWaitingForPathing;
    BOOL _recordedOneMinuteRemainingTime;
    BOOL _reportTimeRemaining;
    unsigned long long _state;
    SMMigrationRequest *_migrationRequest;
    SMEngineDelegateProxy *_delegate;
    NSString *_tracingUUID;
    NSObject<OS_dispatch_queue> *_enginePropertiesQueue;
    NSObject<OS_dispatch_queue> *_engineQueue;
    unsigned long long _totalBytes;
    unsigned long long _deletedBytes;
    unsigned long long _finishedBytes;
    NSMutableArray *_engineSteps;
    NSArray *_engineStepsForCurrentMigration;
    NSMutableArray *_engineElements;
    unsigned long long _requestedDaemonScannerState;
    NSMutableSet *_pathsInSandbox;
    SMWindowsMacPathMapper *_windowsMacPathMap;
    NSProgress *_progress;
    NSDate *_startTime;
    NSError *_error;
    double _estimatedTotalTime;
    double _lastReportedTimeRemaining;
    NSDate *_lastTimeRemainingUpdate;
    double _extraTimeRemaining;
    double _lastReportedTransferRate;
    NSDate *_lastProgressUpdate;
    NSDate *_lastProgressLog;
    double _lastPercentComplete;
    double _oneMinuteRemainingTime;
    NSDate *_pathingStartTime;
    double _timeDelayedByPathing;
    NSObject<OS_dispatch_source> *_batteryLogSource;
}

+ (id)sortOrder;
@property(retain) NSObject<OS_dispatch_source> *batteryLogSource; // @synthesize batteryLogSource=_batteryLogSource;
@property BOOL reportTimeRemaining; // @synthesize reportTimeRemaining=_reportTimeRemaining;
@property double timeDelayedByPathing; // @synthesize timeDelayedByPathing=_timeDelayedByPathing;
@property(retain) NSDate *pathingStartTime; // @synthesize pathingStartTime=_pathingStartTime;
@property BOOL recordedOneMinuteRemainingTime; // @synthesize recordedOneMinuteRemainingTime=_recordedOneMinuteRemainingTime;
@property double oneMinuteRemainingTime; // @synthesize oneMinuteRemainingTime=_oneMinuteRemainingTime;
@property double lastPercentComplete; // @synthesize lastPercentComplete=_lastPercentComplete;
@property(retain) NSDate *lastProgressLog; // @synthesize lastProgressLog=_lastProgressLog;
@property(retain) NSDate *lastProgressUpdate; // @synthesize lastProgressUpdate=_lastProgressUpdate;
@property double lastReportedTransferRate; // @synthesize lastReportedTransferRate=_lastReportedTransferRate;
@property double extraTimeRemaining; // @synthesize extraTimeRemaining=_extraTimeRemaining;
@property(retain) NSDate *lastTimeRemainingUpdate; // @synthesize lastTimeRemainingUpdate=_lastTimeRemainingUpdate;
@property double lastReportedTimeRemaining; // @synthesize lastReportedTimeRemaining=_lastReportedTimeRemaining;
@property double estimatedTotalTime; // @synthesize estimatedTotalTime=_estimatedTotalTime;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain) NSProgress *progress; // @synthesize progress=_progress;
@property(retain) SMWindowsMacPathMapper *windowsMacPathMap; // @synthesize windowsMacPathMap=_windowsMacPathMap;
@property(retain) NSMutableSet *pathsInSandbox; // @synthesize pathsInSandbox=_pathsInSandbox;
@property unsigned long long requestedDaemonScannerState; // @synthesize requestedDaemonScannerState=_requestedDaemonScannerState;
@property(retain) NSMutableArray *engineElements; // @synthesize engineElements=_engineElements;
@property(retain) NSArray *engineStepsForCurrentMigration; // @synthesize engineStepsForCurrentMigration=_engineStepsForCurrentMigration;
@property(retain) NSMutableArray *engineSteps; // @synthesize engineSteps=_engineSteps;
@property BOOL engineWaitingForPathing; // @synthesize engineWaitingForPathing=_engineWaitingForPathing;
@property unsigned long long finishedBytes; // @synthesize finishedBytes=_finishedBytes;
@property unsigned long long deletedBytes; // @synthesize deletedBytes=_deletedBytes;
@property unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(retain) NSObject<OS_dispatch_queue> *engineQueue; // @synthesize engineQueue=_engineQueue;
@property(retain) NSObject<OS_dispatch_queue> *enginePropertiesQueue; // @synthesize enginePropertiesQueue=_enginePropertiesQueue;
@property(retain) NSString *tracingUUID; // @synthesize tracingUUID=_tracingUUID;
@property(retain) SMEngineDelegateProxy *delegate; // @synthesize delegate=_delegate;
@property(retain) SMMigrationRequest *migrationRequest; // @synthesize migrationRequest=_migrationRequest;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pathingProgressFormatKey:(id)arg1 arguments:(id)arg2;
- (void)aggregateEngineErrorsAndWarnings;
- (id)fdeNeedsToBeReeanbled;
- (id)notEnoughFreeSpaceOnTargetError;
- (id)userCanceledError;
- (id)stepError:(id)arg1 exception:(id)arg2 phase:(id)arg3;
- (id)errorWithMessage:(id)arg1 underlyingError:(id)arg2;
- (id)errorWithMessage:(id)arg1;
- (void)shoveCompletedSuccessfully;
- (void)shoveFailed;
- (void)transferRateChanged:(double)arg1 forStep:(id)arg2;
- (void)timeRemainingChangedForStep:(id)arg1;
- (void)migrateProgressKey:(id)arg1 arguments:(id)arg2 forMigrateStep:(id)arg3;
- (void)migrateProgressString:(id)arg1 forMigrateStep:(id)arg2;
- (void)acknowledgeCompletedRequest;
- (void)doneWithCurrentRequest;
- (void)reportProgress;
- (void)updateTransferRate:(double)arg1;
- (void)updateTimeRemaining;
- (double)smoothTimeRemaining:(double)arg1;
- (double)estimatedTimeRemainingFromFractionComplete:(double)arg1;
- (double)estimatedTimeRemaining;
- (double)estimatedTimeToComplete;
- (void)completedFilesWereShoved;
- (BOOL)copyWasCompletedForPath:(id)arg1;
- (void)copyCompletedForPath:(id)arg1;
- (void)stopAllSteps;
- (void)suspend;
- (void)stop;
- (void)stopOrSuspend:(unsigned long long)arg1;
- (void)prioritizeMigratingPath:(id)arg1;
- (void)messageTraceCancellation;
- (void)messageTraceStateCompletion;
- (void)gatherCompletionMessageTracerData;
- (void)setupMessageTracing;
- (BOOL)runStepPrepare;
- (BOOL)spaceIsSufficient;
- (void)finally;
- (BOOL)process;
- (BOOL)preProcess;
- (void)runEngine;
- (void)predetermineTranslatedUIDs;
- (void)run;
- (id)findStepOfClass:(Class)arg1;
- (void)addStep:(id)arg1;
- (void)addElement:(id)arg1;
- (void)generateEngineElements;
- (void)generateEnterpriseMigrateFilesStep;
- (void)generateAppsFileStep;
- (void)generateMachineSettingsStep;
- (void)generateUsersStep;
- (void)generatePeerToPeerStep;
- (void)generateAutoLoginUserStep;
- (unsigned long long)finalSizeForMigrationRequest;
- (void)generateEngineSteps;
- (void)acceptNewMigrationRequest:(id)arg1;
- (BOOL)ensureSourceIsMounted;
- (void)systemsAreAvailable;
- (void)awaitSystemAvailability;
- (void)startupNewRequest;
- (void)systemScannerSystemChanged:(id)arg1 onSystem:(id)arg2;
- (void)systemScannerRemovedSystem:(id)arg1;
- (void)systemScannerAddedSystem:(id)arg1;
@property(readonly) BOOL engineShouldContinue;
- (BOOL)isEngineState:(unsigned long long)arg1;
@property unsigned long long state; // @synthesize state=_state;
@property(readonly) BOOL shovePromptly;
@property(readonly) BOOL useSandbox;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

