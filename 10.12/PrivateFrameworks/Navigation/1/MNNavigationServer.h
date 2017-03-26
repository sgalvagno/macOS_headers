//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNNavigationServiceClientInterface-Protocol.h>
#import <Navigation/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, NSXPCListener;
@protocol MNNavigationServiceDaemonInterface;

@interface MNNavigationServer : NSObject <MNNavigationServiceClientInterface, NSXPCListenerDelegate>
{
    NSMapTable *_peers;
    NSXPCListener *_listener;
    id <MNNavigationServiceDaemonInterface> _localProxy;
}

+ (id)sharedServer;
- (void).cxx_destruct;
- (void)didUpdateAudioOutputRouteSelection:(unsigned long long)arg1;
- (void)didUpdateAudioOutputCurrentSettingForVoicePrompt:(id)arg1;
- (void)didUpdateAudioOutputCurrentSetting:(id)arg1;
- (void)didUpdateAudioOutputSettings:(id)arg1;
- (void)didStartUsingVoiceLanguage:(id)arg1;
- (void)didStartSpeakingPrompt:(id)arg1;
- (void)didActivateAudioSession:(BOOL)arg1;
- (void)didUpdateFeedback:(id)arg1 forAlightingStepAtIndex:(unsigned long long)arg2;
- (void)didSignalAlightForStepAtIndex:(unsigned long long)arg1;
- (void)didUpdateTracePlaybackDetails:(id)arg1;
- (void)didInvalidateTrafficIncidentAlert:(id)arg1;
- (void)didUpdateTrafficIncidentAlert:(id)arg1;
- (void)didReceiveTrafficIncidentAlert:(id)arg1;
- (void)failedRerouteWithErrorCode:(long long)arg1;
- (void)didSwitchToNewTransportType:(int)arg1 newRoute:(id)arg2;
- (void)didCancelReroute;
- (void)didRerouteWithDetails:(id)arg1 withLocationDetails:(id)arg2;
- (void)willReroute;
- (void)didUpdateHeading:(double)arg1 accuracy:(double)arg2;
- (void)didUpdateTrafficForETARoute:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 withRouteDetails:(id)arg4;
- (void)didUpdateRemainingTime:(double)arg1 remainingDistance:(double)arg2;
- (void)didEnableGuidancePrompts:(BOOL)arg1;
- (void)didArrive;
- (void)hideSecondaryStep;
- (void)displaySecondaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5;
- (void)displayManeuverAlertForAnnouncementStage:(unsigned long long)arg1;
- (void)displayPrimaryStep:(id)arg1 instructions:(id)arg2 shieldType:(int)arg3 shieldText:(id)arg4 drivingSide:(int)arg5 maneuverStepIndex:(unsigned long long)arg6 isSynthetic:(BOOL)arg7;
- (void)didUpdateDistanceUntilManeuver:(double)arg1 timeUntilManeuver:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateDistanceUntilSign:(double)arg1 timeUntilSign:(double)arg2 forStepIndex:(unsigned long long)arg3;
- (void)didUpdateProceedToRouteDistance:(double)arg1 displayString:(id)arg2 closestStepIndex:(unsigned long long)arg3;
- (void)didUpdateStepIndex:(unsigned long long)arg1 legIndex:(unsigned long long)arg2;
- (void)didUpdateMatchedLocation:(id)arg1;
- (void)didChangeGuidanceLevel:(int)arg1;
- (void)didChangeGuidanceState:(id)arg1;
- (void)didChangeNavigationState:(int)arg1;
- (void)didFailWithError:(id)arg1;
- (void)willResumeFromPauseNavigation;
- (void)willPauseNavigation;
- (void)didUpdateActiveRouteDetails:(id)arg1;
- (void)didChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)willChangeFromState:(unsigned long long)arg1 toState:(unsigned long long)arg2;
- (void)_clearConnectionForService:(id)arg1;
- (id)_remoteObjectForService:(id)arg1;
- (id)_newPeerForConnection:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
@property(readonly, nonatomic) NSArray *peers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

