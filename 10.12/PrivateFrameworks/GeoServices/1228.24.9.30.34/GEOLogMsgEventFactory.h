//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GEOLogMsgEventFactory : NSObject
{
    NSMutableDictionary *_appStateTransitionData;
    NSMutableDictionary *_appStateTransitionTimingData;
}

+ (id)sharedInstance;
- (id)logMsgEventForClientACSuggestionsWithQuery:(id)arg1 queryTokens:(id)arg2 acSuggestionEntries:(id)arg3 selectedIndex:(int)arg4;
- (id)logMsgEventForTelemetricWithEventKey:(int)arg1 eventValue:(unsigned long long)arg2 eventDetail:(id)arg3;
- (id)logMsgEventForFullNavTraceWithData:(id)arg1;
- (id)bookedTableWithBookedUsingMaps:(BOOL)arg1 cancelled:(BOOL)arg2 viewedInProactiveTray:(BOOL)arg3 tappedProactiveTrayItem:(BOOL)arg4 viewedInPlacecard:(BOOL)arg5 viewedDetailsInPlacecard:(BOOL)arg6 isAsync:(BOOL)arg7 bookedAppId:(id)arg8 muid:(unsigned long long)arg9 called:(BOOL)arg10 routed:(BOOL)arg11 tappedChangeReservation:(BOOL)arg12 tappedCancelReservation:(BOOL)arg13;
- (id)logMsgEventForTablebookedSessionWithSessionID:(id)arg1 bookedTables:(id)arg2;
- (id)logMsgEventForTablebookingWithSessionID:(id)arg1 endState:(int)arg2 endView:(int)arg3 bookTableAppId:(id)arg4 muid:(unsigned long long)arg5 blurredReservationTimestamp:(long long)arg6 blurredBookingTimestamp:(long long)arg7 durationOfSessionInSeconds:(double)arg8 installNeeded:(BOOL)arg9 installNeededTappedAppId:(id)arg10 installCompleted:(BOOL)arg11 tableSize:(unsigned int)arg12 addedSpecialRequest:(BOOL)arg13 swipedAvailableTimes:(BOOL)arg14 tappedDatePicker:(BOOL)arg15 errorMessages:(id)arg16;
- (id)logMsgEventForRidebookedWithSessionId:(id)arg1 statusIssue:(int)arg2 bookedUsingMaps:(BOOL)arg3 cancelled:(BOOL)arg4 contactedDriver:(BOOL)arg5 viewedInProactiveTray:(BOOL)arg6 tappedProactiveTrayItem:(BOOL)arg7 viewedDetails:(BOOL)arg8 invalidVehicleLocation:(BOOL)arg9 missingVehicleLocation:(BOOL)arg10 rideAppId:(id)arg11 rideAppVersion:(id)arg12 numberOfAppsInstalled:(unsigned long long)arg13 enabled:(unsigned long long)arg14;
- (id)logMsgEventForSessionId:(id)arg1 statusIssue:(int)arg2 ridebookingEndState:(int)arg3 endView:(int)arg4 rideAppId:(id)arg5 rideAppVersion:(id)arg6 originBlurred:(id)arg7 destinationBlurred:(id)arg8 exploredOtherOptions:(BOOL)arg9 rideType:(id)arg10 distanceToPickupInMeters:(double)arg11 paymentIsApplePay:(BOOL)arg12 numberOfAvailableExtensions:(unsigned long long)arg13 switchedApp:(BOOL)arg14 comparedRideOptions:(BOOL)arg15 showedSurgePricingAlert:(BOOL)arg16 durationOfSessionInSeconds:(double)arg17 installedApp:(BOOL)arg18 timestamp:(long long)arg19 unavailable:(BOOL)arg20 movedPickupLocation:(BOOL)arg21 errorMessages:(id)arg22 numberOfAppsInstalled:(unsigned long long)arg23 enabled:(unsigned long long)arg24;
- (id)logMsgEventForProactiveSuggestionInteractionForType:(int)arg1 items:(id)arg2 interactedWithItemIndex:(int)arg3 forDuration:(double)arg4;
- (id)logMsgsEventForMapsWidgetsInteractionForType:(int)arg1 endState:(int)arg2 widgetSpecificObject:(id)arg3 wasLocked:(BOOL)arg4 startDate:(id)arg5 forDuration:(double)arg6;
- (id)logMsgEventForRefineSearchSessionOfType:(int)arg1 refineSearchType:(int)arg2 suggestionItems:(id)arg3 searchString:(id)arg4;
- (id)logMsgEventForListInteractionSessionOfType:(int)arg1 listResultItems:(id)arg2 searchString:(id)arg3;
- (id)logMsgEventForLogFrameworkMetricType:(int)arg1 metricState:(int)arg2 messageCount:(int)arg3 messageSize:(long long)arg4 retryCount:(int)arg5;
- (id)logMsgEventForTimeToLeaveIntialTravelTime:(double)arg1;
- (id)logMsgEventForTimeToLeaveHypothesisWithEarlyDepartureDelta:(double)arg1 lateDepartureDelta:(double)arg2 earlyArrivalDelta:(double)arg3 lateArrivalDelta:(double)arg4 rerouteCount:(unsigned long long)arg5 uiNotification:(int)arg6;
- (id)logMsgEventForTransitAppLaunchWithBundleId:(id)arg1 sourceLocation:(id)arg2 destinationLocation:(id)arg3;
- (id)logMsgEventForDirectionsFeedbacks:(id)arg1 finalLocation:(id)arg2 arrivedAtDestination:(BOOL)arg3 navigationAudioFeedback:(struct GEONavigationAudioFeedback)arg4 durationOfTrip:(double)arg5;
- (id)logMsgEventForCacheHitWithCacheType:(int)arg1 cacheHitCount:(unsigned int)arg2 cacheMissCount:(unsigned int)arg3;
- (id)logMsgEventForTileUsageWithRequestAppId:(id)arg1 andTileUsageInfo:(id)arg2 remoteAddressAndPort:(id)arg3;
- (id)logMsgEventForNetworkService:(int)arg1 requestAppId:(id)arg2 requestErrorDomain:(id)arg3 requestErrorCode:(long long)arg4 requestDataSize:(int)arg5 responseDataSize:(int)arg6 responseTime:(int)arg7 remoteAddressAndPort:(id)arg8 httpResponseStatusCode:(int)arg9;
- (id)logMsgEventForPlaceDataCacheFromAppWithID:(id)arg1;
- (id)logMsgEventForTileSetState:(int)arg1 newCoverage:(double)arg2 oldCoverage:(double)arg3 seconds:(double)arg4;
- (id)logMsgEventForStateTransition:(id)arg1 generateOnlyIfStateChanged:(BOOL)arg2;
- (id)logMsgEventForStaleResources:(id)arg1;
- (id)logMsgEventForMapLaunch:(id)arg1 sourceAppId:(id)arg2 isLaunchedFromTTL:(BOOL)arg3 ttlEventTime:(id)arg4;
- (id)logMsgEventForUserAction:(id)arg1 eventValue:(id)arg2 eventTarget:(int)arg3;
- (int)_bucketValueForTravelTime:(double)arg1;
- (int)_bucketValueForTimeDelta:(double)arg1;
- (void)clearStateTimingData;
- (void)dealloc;
- (id)init;

@end

