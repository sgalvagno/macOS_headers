//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ISS_MMConfig : NSObject
{
}

+ (void)_doPerformAOSUpdate;
+ (BOOL)_shouldPerformAOSUpdate;
+ (void)reinitialize;
+ (id)_configDict;
+ (void)_setConfigDict:(id)arg1;
+ (id)sharedInstance;
- (id)_prefsValueForKey:(id)arg1 withIdentifier:(id)arg2;
- (void)_setPrefsValue:(id)arg1 forKey:(id)arg2 withIdentifier:(id)arg3;
- (int)_resourceBundleVersion;
- (BOOL)_aosShouldSuppressDialog;
- (int)_aosResourcesVersion;
- (id)_aosResourcesURL;
- (id)_cachedAccountInfoURL2;
- (id)_cachedAccountInfoURL;
- (id)_cachedConfigurationURL;
- (id)_cachedCommentsURL;
- (id)_cachedMobilePublishConfigURL;
- (id)_cachedIndexingURL;
- (id)_cachedReportingURL;
- (id)_cachedSecureIDiskURL;
- (id)_cachedIDiskURL;
- (id)_accountInfoURL2;
- (id)_accountInfoURL;
- (id)_configurationURL;
- (id)_realmSupportFlag;
- (unsigned int)_defaultReadTimeOutSeconds;
- (unsigned int)_readTimeOutSeconds;
- (int)_indexingBatchSize;
- (int)_commentsBatchSize;
- (id)_commentsURL;
- (id)_mobilePublishConfigURL;
- (id)_indexingURL;
- (id)_reportingURL;
- (id)_secureIDiskURL;
- (id)_iDiskURL;
- (id)_cachedConfigValueForKey:(id)arg1;
- (id)_configValueForKey:(id)arg1;
- (void)_fetchConfigInfo;
- (void)_setApplicationID:(id)arg1;

@end

