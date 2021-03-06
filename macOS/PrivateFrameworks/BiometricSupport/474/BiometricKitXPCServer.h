//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSXPCListenerDelegate.h"

@class ActivityTracker, BKCatacomb, BiometricAutoBugCapture, BiometricOperation, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface BiometricKitXPCServer : NSObject <NSXPCListenerDelegate>
{
    unsigned long long _osStateHandle;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSMutableSet *_exportedObjects;
    BKCatacomb *_catacomb;
    unsigned int _maxTemplatesPerUser;
    unsigned int _maxSupportedUsers;
    int _activeOperationNtfToken;
    _Bool _activeOperationNtfTokenValid;
    NSObject<OS_dispatch_queue> *_activeOperationNtfQueue;
    BOOL _dsChangeDetected;
    int _lastDisplayState;
    int _enrollChgNtfToken;
    _Bool _enrollChgNtfTokenValid;
    NSString *_bioLockoutPath;
    NSMutableDictionary *_catacombUserUUIDs;
    NSMutableDictionary *_catacombUserKeybagUUIDs;
    int _mkbFirstUnlockNtfToken;
    struct __FSEventStream *_fsEventStream;
    CDStruct_617afc34 _lastMatchEvent;
    BOOL _ariadneSignposts;
    BOOL _templatesAtBoot;
    BOOL _catacombFileAccessed;
    struct IONotificationPort *_notifyport;
    NSObject<OS_dispatch_queue> *_cmdDispatchQueue;
    NSMutableArray *_bioOpsQueue;
    NSMutableArray *_activeBioOpsQueue;
    BiometricOperation *_runningBioOp;
    ActivityTracker *_ongoingCatacombSaveTimer;
    ActivityTracker *_ongoingBiometricOperation;
    NSMutableArray *_identities;
    NSRecursiveLock *_identitySynchrLock;
    NSMutableDictionary *_catacombStateDict;
    BiometricAutoBugCapture *_biometricABC;
    NSObject<OS_dispatch_queue> *_biometricABCDispatchQueue;
}

+ (BOOL)isPreferenceKeySet:(id)arg1;
+ (void)setPreferenceValue:(id)arg1 forKey:(id)arg2;
+ (id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2 defaultValue:(id)arg3;
+ (id)getPreferenceValueOfClass:(Class)arg1 forKey:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *biometricABCDispatchQueue; // @synthesize biometricABCDispatchQueue=_biometricABCDispatchQueue;
@property(retain, nonatomic) BiometricAutoBugCapture *biometricABC; // @synthesize biometricABC=_biometricABC;
@property(readonly, retain, nonatomic) NSMutableDictionary *catacombStateDict; // @synthesize catacombStateDict=_catacombStateDict;
@property(nonatomic) BOOL catacombFileAccessed; // @synthesize catacombFileAccessed=_catacombFileAccessed;
@property(nonatomic) BOOL templatesAtBoot; // @synthesize templatesAtBoot=_templatesAtBoot;
@property(readonly, retain, nonatomic) NSRecursiveLock *identitySynchrLock; // @synthesize identitySynchrLock=_identitySynchrLock;
@property(readonly, retain, nonatomic) NSMutableArray *identities; // @synthesize identities=_identities;
@property(readonly, retain, nonatomic) ActivityTracker *ongoingBiometricOperation; // @synthesize ongoingBiometricOperation=_ongoingBiometricOperation;
@property(readonly, retain, nonatomic) ActivityTracker *ongoingCatacombSaveTimer; // @synthesize ongoingCatacombSaveTimer=_ongoingCatacombSaveTimer;
@property(readonly, retain, nonatomic) BiometricOperation *runningBioOp; // @synthesize runningBioOp=_runningBioOp;
@property(readonly, retain, nonatomic) NSMutableArray *activeBioOpsQueue; // @synthesize activeBioOpsQueue=_activeBioOpsQueue;
@property(readonly, retain, nonatomic) NSMutableArray *bioOpsQueue; // @synthesize bioOpsQueue=_bioOpsQueue;
@property(nonatomic) BOOL ariadneSignposts; // @synthesize ariadneSignposts=_ariadneSignposts;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *cmdDispatchQueue; // @synthesize cmdDispatchQueue=_cmdDispatchQueue;
@property(readonly, nonatomic) struct IONotificationPort *notifyport; // @synthesize notifyport=_notifyport;
- (void)serviceStatus:(unsigned int)arg1 withData:(id)arg2 referenceTimestamp:(unsigned long long)arg3 continuousTimeDelta:(long long)arg4;
- (BOOL)isWakingUpFromS5;
- (BOOL)bridgeServiceCheck;
- (void)statusMessage:(unsigned int)arg1 withData:(id)arg2 timestamp:(unsigned long long)arg3;
- (void)matchResult:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)enrollFeedback:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollUpdate:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 withTimestamp:(unsigned long long)arg2;
- (int)serviceStatus:(unsigned int)arg1 version:(unsigned int)arg2 ordinal:(unsigned long long)arg3 data:(id)arg4 timestamp:(unsigned long long)arg5;
- (void)serviceStatus:(unsigned int)arg1 type:(unsigned int)arg2 inValue:(void *)arg3;
- (BOOL)fileRadarWithLogs:(id)arg1 withDescription:(id)arg2;
- (id)getLogs:(BOOL)arg1 withDetails:(id *)arg2;
- (id)getSensorInfoWithClient:(id)arg1;
- (id)getCalibrationDataInfoWithClient:(id)arg1;
- (long long)getSensorCalibrationStatusWithClient:(id)arg1;
- (id)pullDebugImageData:(BOOL)arg1 rotated:(BOOL)arg2 hasWidth:(unsigned int *)arg3 hasHeight:(unsigned int *)arg4 withClient:(id)arg5;
- (int)setDebugImages:(BOOL)arg1 withClient:(id)arg2;
- (id)pullCaptureBufferWithClient:(id)arg1;
- (id)pullCalibrationDataWithClient:(id)arg1;
- (int)pauseFaceDetectTimer:(BOOL)arg1 withClient:(id)arg2;
- (int)enableMatchAutoRetry:(BOOL)arg1 withClient:(id)arg2;
- (int)queryIdentityMigrationFailureForUser:(unsigned int)arg1 failed:(char *)arg2 clear:(BOOL)arg3 withClient:(id)arg4;
- (int)fieldDiagnosticsControl:(unsigned int)arg1 inData:(id)arg2 outData:(id *)arg3 withClient:(id)arg4;
- (int)getAugmentationEligibility:(char *)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (int)setTemplate:(id)arg1 forIdentity:(id)arg2 withClient:(id)arg3;
- (int)suspendEnrollment:(BOOL)arg1 withClient:(id)arg2;
- (int)completeEnrollmentWithClient:(id)arg1;
- (int)startNewMatchAttemptWithClient:(id)arg1;
- (long long)getDeviceStateWithClient:(id)arg1;
- (int)enableBackgroundFdet:(BOOL)arg1 withClient:(id)arg2;
- (BOOL)isFingerOnWithClient:(id)arg1;
- (long long)getProvisioningStateWithClient:(id)arg1;
- (int)setAppleMesaSEPLoggingLevel;
- (BOOL)getEnabledForUnlock;
- (id)getNodeTopologyForIdentity:(id)arg1 withClient:(id)arg2;
- (id)pullMatchPolicyInfoData;
- (id)pullAlignmentData;
- (int)enrollContinue;
- (int)resetAppleConnectCounterWithClient:(id)arg1;
- (int)setUserDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)timestampEvent:(unsigned long long)arg1 absoluteTime:(unsigned long long)arg2;
- (int)diagnostics:(int)arg1 withOptions:(id)arg2 passed:(char *)arg3 withDetails:(id *)arg4 withClient:(id)arg5;
- (int)getCountersignedStoreToken:(id *)arg1 withClient:(id)arg2;
- (int)registerStoreToken:(id)arg1 withClient:(id)arg2;
- (int)registerDSID:(unsigned long long)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)performRequestMessageDataCommand:(unsigned long long)arg1 size:(unsigned long long)arg2 outData:(id *)arg3;
- (int)performSetSystemProtectedConfigCommand:(id)arg1 authData:(CDStruct_143f644f *)arg2;
- (int)performSetProtectedConfigCommand:(unsigned int)arg1 cfg:(id)arg2 authData:(CDStruct_143f644f *)arg3;
- (int)performGetSystemProtectedConfigCommand:(id *)arg1;
- (int)performGetProtectedConfigCommand:(unsigned int)arg1 outSetCfg:(id *)arg2 outEffectiveCfg:(id *)arg3;
- (int)performGetLastMatchEventCommand:(CDStruct_617afc34 *)arg1;
- (int)performIsXARTAvailableCommand:(char *)arg1;
- (int)performGetSKSLockStateCommand:(unsigned int)arg1 outState:(unsigned int *)arg2;
- (int)performForceBioLockoutCommand:(unsigned int)arg1;
- (int)performDropUnlockTokenCommand;
- (int)performGetCatacombHashCommand:(unsigned int)arg1 outHash:(id *)arg2;
- (int)performGetCatacombUUIDCommand:(unsigned int)arg1 outUUID:(id *)arg2;
- (int)performGetFreeIdentityCountCommand:(unsigned int)arg1 outCount:(unsigned int *)arg2;
- (int)performRequestMaxIdentityCountCommand:(unsigned int *)arg1;
- (int)performLoadBioLockoutRecordCommand:(id)arg1;
- (int)performSaveBioLockoutRecordCommand:(id)arg1;
- (int)performLoadCatacombCommand:(unsigned int)arg1 inData:(id)arg2;
- (int)performNoCatacombCommand:(unsigned int)arg1;
- (int)performConfirmSaveCatacombCommand:(unsigned int)arg1;
- (int)performCompleteSaveCatacombCommand:(unsigned int)arg1 outBuffer:(id)arg2;
- (int)performPrepareSaveCatacombCommand:(unsigned int)arg1 outDataSize:(unsigned int *)arg2;
- (int)performRemoveUserDataCommand:(unsigned int)arg1;
- (int)performGetBiometrickitdInfoCommand:(CDStruct_238d90ce *)arg1;
- (int)performRemoveIdentityCommand:(CDStruct_4a4b4732 *)arg1;
- (int)performGetTemplatesValidityCommand:(unsigned int)arg1 isValid:(char *)arg2;
- (int)performGetCatacombStateCommand:(id)arg1;
- (int)performGetIdentitiesListCommand:(unsigned int)arg1 outBuffer:(id)arg2;
- (int)performDisplayStatusChangedCommand:(BOOL)arg1;
- (int)performPresenceDetectCommand:(id)arg1;
- (int)performMatchCommand:(id)arg1;
- (int)performEnrollCommand:(id)arg1;
- (int)performCancelCommand;
- (BOOL)isGibraltarDevice;
- (BOOL)isM8Device;
- (int)setSystemProtectedConfiguration:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)setProtectedConfiguration:(id)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (id)getSystemProtectedConfigurationWithClient:(id)arg1;
- (id)getProtectedConfigurationForUser:(unsigned int)arg1 withClient:(id)arg2;
- (int)getLastMatchEvent:(id *)arg1 withClient:(id)arg2;
- (BOOL)isXARTAvailableWithClient:(id)arg1;
- (int)getBiometryAvailability:(long long *)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (int)getBioLockoutState:(long long *)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (int)forceBioLockoutForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)dropUnlockTokenWithClient:(id)arg1;
- (id)getIdentitiesDatabaseHashForUser:(unsigned int)arg1 withClient:(id)arg2;
- (id)getIdentitiesDatabaseUUIDForUser:(unsigned int)arg1 withClient:(id)arg2;
- (long long)getFreeIdentityCount:(int)arg1 forUser:(unsigned int)arg2 withClient:(id)arg3;
- (long long)getMaxIdentityCount:(int)arg1 withClient:(id)arg2;
- (id)identities:(id)arg1 withClient:(id)arg2;
- (id)getIdentityFromUUID:(id)arg1 withClient:(id)arg2;
- (int)removeAllIdentitiesForUser:(unsigned int)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)removeIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)updateIdentity:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (void)mkbFirstUnlockNotification;
- (id)getUserKeybagUUIDForUID:(unsigned int)arg1;
- (id)getUserUUIDForUID:(unsigned int)arg1;
- (id)getUserUUIDsForUIDs:(id)arg1;
- (int)loadBioLockoutRecord;
- (int)saveBioLockoutRecord;
- (int)readBioLockoutData:(id *)arg1;
- (int)writeBioLockoutData:(id)arg1;
- (int)loadCatacombForUser:(unsigned int)arg1;
- (int)loadCatacomb;
- (int)saveCatacombForIdentity:(id)arg1;
- (int)saveCatacombForUsers:(id)arg1;
- (int)saveCatacomb;
- (int)unarchiveCatacombDataForUser:(unsigned int)arg1 fromUnarchiver:(id)arg2 secureData:(id *)arg3 identities:(id *)arg4;
- (int)archiveCatacombDataForUser:(unsigned int)arg1 toArchiver:(id)arg2;
- (unsigned int)catacombVersion;
- (int)getCatacombSaveListForUsers:(id)arg1 list:(id *)arg2;
- (void)deleteUnusedCatacombFiles;
- (int)saveTemplateListAfterTemplateUpdate;
- (int)saveCatacombIfDirtyWithInterval:(double)arg1 andDelay:(double)arg2;
- (void)addIdentityObjects:(id)arg1;
- (void)removeIdentityObject:(id)arg1;
- (id)identitiesOfUser:(unsigned int)arg1;
- (id)getIdentityObject:(CDStruct_4a4b4732 *)arg1;
- (id)getIdentityObjectByUserID:(unsigned int)arg1 UUID:(id)arg2;
- (id)catacombFileNameForUserID:(unsigned int)arg1;
- (int)readCatacombState;
- (int)cacheCatacombInfo;
- (BOOL)templatesExistAtBoot;
- (int)syncTemplateListForUser:(unsigned int)arg1;
- (BOOL)validateAllUsers;
- (int)removeUser:(unsigned int)arg1;
- (int)checkTemplatesValidityForUser:(unsigned int)arg1;
- (int)checkCatacombForUser:(unsigned int)arg1;
- (int)loadCatacombAfterFirstUnlock;
- (int)handleFirstUnlock;
- (void)clearTemplateListForUser:(unsigned int)arg1;
- (void)clearTemplateList;
- (int)restoreAndSyncTemplates;
- (id)createMatchEventDictionary:(CDStruct_617afc34 *)arg1;
- (id)allClients;
- (void)disconnectingClient:(id)arg1;
- (void)updateLockoutStateNotification:(unsigned int)arg1;
- (void)updateEnrollmentChangedNotification:(BOOL)arg1;
- (int)displayStateChanged:(BOOL)arg1;
- (BOOL)isDisplayOn;
@property(readonly, nonatomic) BOOL lastDisplayState;
- (int)parseAuthDict:(id)arg1 toAuthData:(CDStruct_143f644f *)arg2;
- (int)filterIdentities:(id)arg1 withFilter:(id)arg2;
- (int)logCatacombInfo:(id)arg1 data:(id)arg2;
- (id)hexDumpData:(char *)arg1 size:(unsigned long long)arg2;
- (int)writeStringToPersistentLog:(id)arg1;
- (BOOL)isClassCFileAccessible;
- (void)sendStatusMessage:(unsigned int)arg1 toClient:(id)arg2;
- (void)updateActiveOperationNotification;
- (void)updateActiveOperationNotificationWithOverride:(int)arg1;
- (void)stopBioOperationsAfterReconnect;
- (void)switchToNextBioOperation:(BOOL)arg1;
- (int)processBioOperation:(id)arg1;
- (void)resumeQueuedBioOperation;
- (int)pauseBioOperation:(id)arg1;
- (void)removeBioOperationOfClient:(id)arg1;
- (int)startBioOperation:(id)arg1;
- (void)notifyAppIsInactive:(BOOL)arg1 withClient:(id)arg2;
- (void)registerDelegate:(BOOL)arg1 withClient:(id)arg2;
- (int)cancelWithClient:(id)arg1;
- (int)startPresenceDetectOperation:(id)arg1;
- (int)initPresenceDetectOperation:(id)arg1 options:(id)arg2 client:(id)arg3;
- (id)createPresenceDetectOperation;
- (int)detectPresenceWithOptions:(id)arg1 withClient:(id)arg2;
- (int)startMatchOperation:(id)arg1;
- (int)initMatchOperation:(id)arg1 filter:(id)arg2 options:(id)arg3 client:(id)arg4;
- (id)createMatchOperation;
- (int)match:(id)arg1 withOptions:(id)arg2 withClient:(id)arg3;
- (int)startEnrollOperation:(id)arg1;
- (int)initEnrollOperation:(id)arg1 biometricType:(int)arg2 userID:(unsigned int)arg3 options:(id)arg4 client:(id)arg5;
- (id)createEnrollOperation;
- (int)enroll:(int)arg1 forUser:(unsigned int)arg2 withOptions:(id)arg3 withClient:(id)arg4;
- (id)stateDictionaryWithHints:(struct os_state_hints_s *)arg1;
- (struct os_state_data_s *)osStateHandler:(struct os_state_hints_s *)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) CDStruct_617afc34 *lastMatchEvent;
- (void)dealloc;
- (int)initAutoBugCapture;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

