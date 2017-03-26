//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IASUnifiedProgressClient, NSArray, NSDate, NSDictionary, NSMutableArray, NSString, NSXPCConnection, PKTimeRemainingFormatter, SUPowerAssertionManager;
@protocol OS_dispatch_source, SUUpdateService;

@interface SUAppRootModeController : NSObject
{
    NSXPCConnection *_connection;
    id <SUUpdateService> _proxy;
    struct AuthorizationOpaqueRef *_authRef;
    BOOL _skipConfirm;
    BOOL _shouldShutDown;
    BOOL _reconnectMode;
    BOOL _terminateOnError;
    NSArray *_backgroundWindows;
    NSMutableArray *_keysToInstall;
    NSArray *_additionalRequests;
    long long _countOfAdditionalRequestsRemaining;
    double _progressPerAdditionalRequest;
    BOOL _installCritical;
    BOOL _installAll;
    BOOL _installAdoptedManual;
    BOOL _installingDotItLaterUpdates;
    BOOL _installingFirmwareUpdates;
    BOOL _FLOEnabled;
    NSDate *_finishedPostLogoutTimestamp;
    NSObject<OS_dispatch_source> *_timerSource;
    PKTimeRemainingFormatter *_timeRemainingFormatter;
    SUPowerAssertionManager *_pamgr;
    NSDictionary *_taskTimeEstimateDict;
    IASUnifiedProgressClient *_progressClient;
    NSString *_statusTitleString;
    NSString *_prevTimeEstimateMessageText;
    BOOL _fakeInstallMode;
}

+ (id)_appIcon;
+ (id)currentBuildNumber;
+ (BOOL)documentSUInProgress;
@property BOOL fakeInstallMode; // @synthesize fakeInstallMode=_fakeInstallMode;
- (void)installClient:(id)arg1 didFailWithError:(id)arg2;
- (void)installClientDidFinish:(id)arg1;
- (void)_enqueueAdditionalInstallRequests;
- (void)_terminate:(id)arg1;
- (BOOL)_blessBootVolumeOnce;
- (BOOL)_runKextcache;
- (void)_showUpdateError:(id)arg1;
- (void)_startShowingInstallStatus;
- (void)_finishAllOperationsWithError:(id)arg1;
- (void)_terminateButCommitStashFirstAndDisableFLO;
- (void)_serviceStatusTimer;
- (void)runAndTerminateWhenDone;
- (void)_checkDiskSpaceIfAppropriateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_configureProgressPhases;
- (void)_validateUpdatesToInstallWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_confirmIfNecessary;
- (BOOL)_launchAppAtPath:(id)arg1 extraArguments:(id)arg2;
- (void)_authorizeNow;
- (void)_disconnectFromService;
- (BOOL)_connectToService;
- (void)dealloc;
- (id)initWithArguments:(id)arg1 fakeInstall:(BOOL)arg2;

@end

