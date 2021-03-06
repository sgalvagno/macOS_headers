//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WBSPerSitePreferenceManager.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, WBSCoalescedAsynchronousWriter, WBSPerSitePreference;

__attribute__((visibility("hidden")))
@interface ZoomPreferenceManager : NSObject <WBSPerSitePreferenceManager>
{
    NSMutableDictionary *_mapOfHostnamesToZoomPreferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSCoalescedAsynchronousWriter *_zoomPreferencesWriter;
    long long _zoomPreferencesLoadingStatus;
    NSURL *_preferencesFileURL;
    id <WBSPerSitePreferenceManagerDelegate> _delegate;
    double _defaultPageZoomFactor;
    WBSPerSitePreference *_pageZoomPreference;
}

+ (id)zoomFactorForUntrustedZoomFactor:(id)arg1;
+ (id)largerZoomFactorForFactor:(id)arg1;
+ (id)smallerZoomFactorForFactor:(id)arg1;
+ (id)pageZoomFactors;
@property(readonly, nonatomic) WBSPerSitePreference *pageZoomPreference; // @synthesize pageZoomPreference=_pageZoomPreference;
@property(readonly, nonatomic) double defaultPageZoomFactor; // @synthesize defaultPageZoomFactor=_defaultPageZoomFactor;
@property(nonatomic) __weak id <WBSPerSitePreferenceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_performDelayedLaunchOperationsIfNecessary;
- (void)removePreferenceValuesForDomains:(id)arg1 fromPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getAllDomainsConfiguredForPreference:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)setDefaultValue:(id)arg1 ofPreference:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDefaultPreferenceValueForPreference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getValueOfPreference:(id)arg1 forDomain:(id)arg2 withTimeout:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)setValue:(id)arg1 ofPreference:(id)arg2 forDomain:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)localizedStringForValue:(id)arg1 inPreference:(id)arg2;
- (id)valuesForPreference:(id)arg1;
- (id)preferences;
- (void)setDefaultPageZoomFactor:(double)arg1;
- (void)_setZoomPreference:(id)arg1 forURL:(id)arg2 defaultPageZoomFactor:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setZoomPreference:(id)arg1 forURL:(id)arg2;
- (id)zoomPreferenceForURL:(id)arg1;
- (void)_historyWasCleared:(id)arg1;
- (void)_didRemoveHostnames:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)savePendingChangesBeforeTermination;
- (void)_zoomPreferenceStateDidChange;
- (id)_mapOfHostnamesToZoomPreferencesFromFileURL:(id)arg1;
- (void)_performDelayedLaunchOperationsWithPreferenceFileURL:(id)arg1;
- (void)performDelayedLaunchOperations;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

