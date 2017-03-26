//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface AOSUtilities : NSObject
{
}

+ (BOOL)shouldUpdateAppleAccountForClientID:(id)arg1;
+ (void)updateAppleAccountInfo:(id)arg1 forAccount:(struct AOSAccount *)arg2;
+ (id)appleAccountInfoForAccount:(struct AOSAccount *)arg1;
+ (id)_existingAppleAccountForAccount:(struct AOSAccount *)arg1;
+ (BOOL)_areAppleAccountCallsAllowed;
+ (BOOL)_didLoadAOSAccountsBundle;
+ (BOOL)_didLoadAccountsBundle;
+ (id)generateSignUpSessionInfoForClient:(id)arg1;
+ (void)setCachedSignUpSessionInfo:(id)arg1;
+ (id)cachedSignUpSessionInfo;
+ (id)currentComputerName;
+ (id)machineUDID;
+ (id)machineSerialNumber;
+ (BOOL)shouldPerformDeviceRetryForRequest:(id)arg1;
+ (id)allDecodableClasses;
+ (BOOL)doesAppleIDNeedFixing:(id)arg1;
+ (id)enteredPasswordFromAccount:(struct AOSAccount *)arg1;
+ (id)adsidForAccount:(struct AOSAccount *)arg1 usingInfo:(id)arg2;
+ (BOOL)_performProvisioningAction:(id)arg1 forRequest:(id)arg2 withDSID:(id)arg3 andClientID:(id)arg4;
+ (void)handleHSAErrorsForRequest:(id)arg1 withDSID:(id)arg2 andClientID:(id)arg3;
+ (id)retrieveOTPHeadersForDSID:(id)arg1;
+ (void)attemptDaemonShutdown;
+ (BOOL)postNotificationWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3 deliverImmediately:(BOOL)arg4 timeout:(double)arg5;
+ (BOOL)sessionLostKeychainAccess;
+ (int)checkKeychainAccess:(id *)arg1;
+ (void)setAgentSessionInfo:(id)arg1;
+ (id)agentSessionInfo;
+ (id)hashBTMMPassword:(id)arg1 usingAccountInfo:(id)arg2;
+ (id)mailPropsCache;
+ (struct AOSTransactionC *)createTransactionWithResult:(void *)arg1 error:(struct __CFError *)arg2 callbackInfo:(struct AOSCallbackInfo *)arg3;
+ (id)pushLock;
+ (id)notificationCenterLock;
+ (BOOL)executeBlock:(CDUnknownBlockType)arg1 withTimeout:(double)arg2 timeoutBlock:(CDUnknownBlockType)arg3 andLock:(id)arg4;
+ (id)namedPortForAPSEnvironment:(id)arg1;
+ (void)registerForPushNotifications;
+ (BOOL)updateBTMMConfigForAccount:(struct AOSAccount *)arg1;
+ (id)xmlStringFromDictionary:(id)arg1;
+ (void)openICloudPrefsWithAction:(id)arg1 andParams:(id)arg2;
+ (void)openIAPrefsForDSID:(id)arg1 withAction:(id)arg2 andParams:(id)arg3;
+ (id)payloadDescription:(id)arg1;
+ (BOOL)isDaemon;
+ (id)valueForKey:(id)arg1 andAccount:(struct AOSAccount *)arg2;
+ (BOOL)setValue:(id)arg1 forKey:(id)arg2 andAccount:(struct AOSAccount *)arg3;
+ (id)stringForRequestType:(int)arg1;
+ (id)aosErrorWithCode:(int)arg1;
+ (void)addCallStackInfo:(id)arg1 toAccount:(struct AOSAccount *)arg2;
+ (BOOL)isPrimaryAccount:(struct AOSAccount *)arg1;
+ (id)clientIdentifierFromAccount:(struct AOSAccount *)arg1;
+ (id)currentProcessIdentifier;
+ (id)currentProcessName;
+ (BOOL)_isTransactionExpectedForRequestType:(int)arg1;
+ (id)_payloadWithAccount:(struct AOSAccount *)arg1 requestType:(int)arg2 requestArgs:(id)arg3;
+ (void)_handleCompletionForRequestWithType:(int)arg1 result:(id)arg2 andAccount:(struct AOSAccount *)arg3;
+ (id)makeAgentRequestWithAccount:(struct AOSAccount *)arg1 type:(int)arg2 args:(id)arg3 callback:(struct AOSCallbackInfo *)arg4 maxRetries:(int)arg5;
+ (void)_cacheValidationStatus:(id)arg1 forDomain:(id)arg2;
+ (id)_cachedValidationStatusForDomain:(id)arg1;
+ (BOOL)_isKnownDomain:(id)arg1 usingAccountInfo:(id)arg2;
+ (id)aliasesForAccount:(struct AOSAccount *)arg1 withInfo:(id)arg2;
+ (BOOL)validateURL:(id)arg1 forAccount:(struct AOSAccount *)arg2 withInfo:(id)arg3;
+ (BOOL)currentUserIsAdmin;
+ (void)initialize;

@end

