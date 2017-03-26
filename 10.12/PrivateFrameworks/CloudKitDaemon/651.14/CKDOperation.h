//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CloudKitDaemon/CKDFlowControllable-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestAuthRetryDelegate-Protocol.h>
#import <CloudKitDaemon/CKDURLRequestMetricsDelegate-Protocol.h>

@class CKDClientContext, CKDClientProxy, CKDOperationMetrics, CKDURLRequest, CKOperationResult, CKTimeLogger, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol NSObject, OS_dispatch_group, OS_dispatch_queue, OS_os_activity;

__attribute__((visibility("hidden")))
@interface CKDOperation : NSOperation <CKDURLRequestMetricsDelegate, CKDURLRequestAuthRetryDelegate, CKDFlowControllable>
{
    unsigned long long _state;
    NSObject<OS_os_activity> *_osActivity;
    BOOL _isFinished;
    BOOL _isExecuting;
    BOOL _isProxyOperation;
    BOOL _useEncryption;
    BOOL _allowsCellularAccess;
    BOOL _preferAnonymousRequests;
    BOOL _allowsBackgroundNetworking;
    BOOL _shouldPipelineFetchAllChangesRequests;
    BOOL _isLongLived;
    CKDURLRequest *_request;
    CKTimeLogger *_timeLogger;
    NSString *_operationID;
    NSDate *_startDate;
    CKDOperation *_parentOperation;
    CKDClientContext *_context;
    CKDClientProxy *_proxy;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_sourceApplicationSecondaryIdentifier;
    NSString *_authPromptReason;
    double _timeoutIntervalForRequest;
    double _timeoutIntervalForResource;
    NSString *_deviceIdentifier;
    NSDictionary *_MMCSRequestOptions;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSError *_error;
    CKDOperationMetrics *_cloudKitMetrics;
    CKDOperationMetrics *_MMCSMetrics;
    NSMutableDictionary *_w3cNavigationTimingByRequestUUID;
    NSMutableDictionary *_responseHTTPHeadersByRequestUUID;
    NSDate *_metricExecuteStartDate;
    NSDictionary *_additionalHTTPRequestHeaders;
    NSObject<OS_dispatch_group> *_stateTransitionGroup;
    NSMutableArray *_requestUUIDs;
    NSString *_parentSectionID;
    NSMutableArray *_childOperations;
    NSMutableArray *_finishedChildOperationIDs;
    id <NSObject> _powerAssertion;
    NSObject<OS_dispatch_group> *_childOperationsGroup;
    NSString *_clientSuppliedDeviceIdentifier;
}

+ (id)_globalOperationCallbackQueueForQOS:(long long)arg1;
@property(retain, nonatomic) NSString *clientSuppliedDeviceIdentifier; // @synthesize clientSuppliedDeviceIdentifier=_clientSuppliedDeviceIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *childOperationsGroup; // @synthesize childOperationsGroup=_childOperationsGroup;
@property(retain, nonatomic) id <NSObject> powerAssertion; // @synthesize powerAssertion=_powerAssertion;
@property(retain, nonatomic) NSMutableArray *finishedChildOperationIDs; // @synthesize finishedChildOperationIDs=_finishedChildOperationIDs;
@property(retain, nonatomic) NSMutableArray *childOperations; // @synthesize childOperations=_childOperations;
@property(retain, nonatomic) NSString *parentSectionID; // @synthesize parentSectionID=_parentSectionID;
@property(retain, nonatomic) NSMutableArray *requestUUIDs; // @synthesize requestUUIDs=_requestUUIDs;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *stateTransitionGroup; // @synthesize stateTransitionGroup=_stateTransitionGroup;
@property(retain, nonatomic) NSDictionary *additionalHTTPRequestHeaders; // @synthesize additionalHTTPRequestHeaders=_additionalHTTPRequestHeaders;
@property(retain, nonatomic) NSDate *metricExecuteStartDate; // @synthesize metricExecuteStartDate=_metricExecuteStartDate;
@property(retain, nonatomic) NSMutableDictionary *responseHTTPHeadersByRequestUUID; // @synthesize responseHTTPHeadersByRequestUUID=_responseHTTPHeadersByRequestUUID;
@property(retain, nonatomic) NSMutableDictionary *w3cNavigationTimingByRequestUUID; // @synthesize w3cNavigationTimingByRequestUUID=_w3cNavigationTimingByRequestUUID;
@property(retain, nonatomic) CKDOperationMetrics *MMCSMetrics; // @synthesize MMCSMetrics=_MMCSMetrics;
@property(retain, nonatomic) CKDOperationMetrics *cloudKitMetrics; // @synthesize cloudKitMetrics=_cloudKitMetrics;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSDictionary *MMCSRequestOptions; // @synthesize MMCSRequestOptions=_MMCSRequestOptions;
@property(retain, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) BOOL isLongLived; // @synthesize isLongLived=_isLongLived;
@property(nonatomic) BOOL shouldPipelineFetchAllChangesRequests; // @synthesize shouldPipelineFetchAllChangesRequests=_shouldPipelineFetchAllChangesRequests;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(nonatomic) BOOL allowsBackgroundNetworking; // @synthesize allowsBackgroundNetworking=_allowsBackgroundNetworking;
@property(nonatomic) BOOL preferAnonymousRequests; // @synthesize preferAnonymousRequests=_preferAnonymousRequests;
@property(retain, nonatomic) NSString *authPromptReason; // @synthesize authPromptReason=_authPromptReason;
@property(retain, nonatomic) NSString *sourceApplicationSecondaryIdentifier; // @synthesize sourceApplicationSecondaryIdentifier=_sourceApplicationSecondaryIdentifier;
@property(retain, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property(nonatomic) BOOL allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(nonatomic) BOOL useEncryption; // @synthesize useEncryption=_useEncryption;
@property(readonly, nonatomic) BOOL isProxyOperation; // @synthesize isProxyOperation=_isProxyOperation;
@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) CKDClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak CKDOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property(retain, nonatomic) CKTimeLogger *timeLogger; // @synthesize timeLogger=_timeLogger;
@property(nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property(nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
- (void).cxx_destruct;
- (id)statusReportWithIndent:(unsigned long long)arg1;
- (id)CKStatusReportLogGroups;
- (id)CKStatusReportProperties;
- (id)_startDateString;
- (id)_runDurationString;
@property(readonly, nonatomic) CKOperationResult *operationResult;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)requestDidEndWaitingForUserAuth:(id)arg1;
- (void)requestDidBeginWaitingForUserAuth:(id)arg1;
- (void)request:(id)arg1 didFinishWithMetrics:(id)arg2 w3cNavigationTiming:(id)arg3;
- (void)configureRequest:(id)arg1;
@property(retain, nonatomic) CKDURLRequest *request; // @synthesize request=_request;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL usesBackgroundSession;
- (BOOL)isConcurrent;
@property(readonly, nonatomic) unsigned int QOSClass;
@property(readonly, nonatomic) NSString *flowControlKey;
@property(readonly, nonatomic) BOOL shouldCheckAppVersion;
- (void)_acquirePowerAssertionsForSelfAndParent;
- (void)_acquirePowerAssertion;
- (void)_dropPowerAssertionsForSelfAndParent;
- (void)_dropPowerAssertion;
- (BOOL)_errorShouldImpactFlowControl:(id)arg1;
- (id)nameForState:(unsigned long long)arg1;
- (void)makeStateTransition:(BOOL)arg1;
- (BOOL)makeStateTransition;
@property(nonatomic) unsigned long long state;
- (void)cancel;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)finishWithError:(id)arg1;
- (void)_finishInternalOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)start;
- (BOOL)operationShouldBeFlowControlled;
- (BOOL)_checkAppVersion;
- (void)_registerAttemptForOperation;
- (void)_continueOperationStart;
@property(readonly, nonatomic) __weak CKDOperation *topmostParentOperation;
- (void)addAndRunChildOperation:(id)arg1;
- (void)_combineMetricsWithOperation:(id)arg1;
- (id)newChildOperationInfoOfClass:(Class)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)CKPropertiesDescription;
@property(readonly, nonatomic) BOOL allowsPowerNapScheduling;
- (id)createInactiveConcurrentQueue;
- (id)createConcurrentQueue;
- (id)createInactiveSerialQueue;
- (id)createSerialQueue;
- (void)dealloc;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

