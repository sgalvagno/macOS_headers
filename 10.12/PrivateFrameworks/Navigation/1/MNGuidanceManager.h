//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOComposedRouteStep, GEOComposedWaypoint, MNNavigationSession, NSData, NSString;
@protocol MNGuidanceManagerDelegate;

@interface MNGuidanceManager : NSObject
{
    GEOComposedRoute *_route;
    int _guidanceState;
    unsigned long long _currentStepIndex;
    double _distanceWhenFirstAnnouncementAllowed;
    double _distanceWhenInitialAnnounced;
    double _distanceWhenPrepareAnnounced;
    double _distanceWhenExecuteAnnounced;
    double _baselineSpeed;
    double _baselineDistance;
    double _minExecutionDistance;
    double _timeLastAnnouncementStarted;
    double _timeLastAnnouncementEnded;
    double _timeUntilNextAnnouncement;
    double _contentOfInitPrepAnnouncement;
    double _contentOfExecutionAnnouncement;
    double _estimateOfTimeToSpeakExecutionAnnouncement;
    BOOL _currentDirectionsContinueStraight;
    BOOL _shouldAnnounceContinueStraight;
    BOOL _shouldSkipInitialAnnounce;
    BOOL _shouldSkipPrepareAnnounce;
    BOOL _shouldSkipExecuteAnnounce;
    BOOL _didAnnounceProceedToRoute;
    BOOL _didAnnounceManeuverContinue;
    BOOL _didAnnounceManeuverInitial;
    BOOL _didAnnounceManeuverPreparation;
    BOOL _didAnnounceManeuverExecution;
    BOOL _didAnnounceSecondaryManeuver;
    BOOL _didShowPrimarySign;
    BOOL _didShowSecondarySign;
    id <MNGuidanceManagerDelegate> _delegate;
    MNNavigationSession *_navigationSession;
    GEOComposedWaypoint *_destination;
    unsigned long long _pointIndexForCurrentRoadInfo;
    NSString *_currentRoadName;
    long long _currentShieldType;
    NSString *_currentShieldText;
    CDStruct_68b2ff84 _currentInstructionOptions;
}

@property(nonatomic) CDStruct_68b2ff84 currentInstructionOptions; // @synthesize currentInstructionOptions=_currentInstructionOptions;
@property(retain, nonatomic) NSString *currentShieldText; // @synthesize currentShieldText=_currentShieldText;
@property(retain, nonatomic) NSString *currentRoadName; // @synthesize currentRoadName=_currentRoadName;
@property(nonatomic) __weak id <MNGuidanceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(readonly, nonatomic) int guidanceState; // @synthesize guidanceState=_guidanceState;
- (void).cxx_destruct;
- (void)updateDestination:(id)arg1;
- (void)updateForReturnToRoute;
- (void)updateForReroute:(id)arg1;
- (void)updateGuidanceAfterReroute;
@property(readonly, nonatomic) int transportType;
@property(readonly, nonatomic) NSData *remainingRouteZilchData;
- (BOOL)repeatLastGuidanceAnnouncement:(id)arg1;
- (void)_notifyDisplayManeuverForSecondaryStep:(id)arg1;
- (void)_notifyDisplayManeuverForStep:(id)arg1 withDistance:(double)arg2 allowCombinedGuidance:(BOOL)arg3;
- (void)_notifyAnnounceManeuverForStep:(id)arg1 withDistance:(double)arg2 withCombinedGuidance:(int)arg3 playShortPrompt:(BOOL)arg4 isRepeat:(BOOL)arg5 stage:(unsigned long long)arg6 timeLimit:(double)arg7;
- (void)_notifyAnnounceContinueAsRepeat:(BOOL)arg1;
- (void)_notifyAnnounceProceedToRoute:(id)arg1 withClosestStep:(id)arg2 withNamedStep:(id)arg3 andSecondaryStep:(id)arg4 isRepeat:(BOOL)arg5;
- (double)_timeUntilNextAnnouncement:(id)arg1 location:(id)arg2 upcomingStage:(out unsigned long long *)arg3;
- (double)_calculateExecutionDistance:(id)arg1 withLogging:(BOOL)arg2;
- (double)_speedFactor:(id)arg1;
- (double)_adjustedVehicleSpeed:(id)arg1;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (BOOL)_updateConsiderSubstepAnnouncement:(id)arg1 location:(id)arg2;
- (BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (BOOL)_updateConsiderInitialAnnouncement:(id)arg1 passedManeuverStart:(BOOL)arg2;
- (BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (double)_estimateTimeToSpeakExecutionAnnouncement;
- (double)_durationOfLastAnnouncement;
- (double)_timeUntilNextAnnouncement;
- (double)_timeSinceLastAnnouncement;
- (BOOL)_announcementInProgress;
- (void)_updatePrepareForNextStep;
- (BOOL)_updateGuidanceStateWithLocation:(id)arg1 withMatch:(id)arg2 withNavigatorState:(int)arg3 stepChanged:(char *)arg4;
- (BOOL)_updateCheckIfNextStep:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (id)_updateValidateRouteMatchForLocation:(id)arg1;
- (double)_getPortionForStep:(id)arg1 withSecondary:(id)arg2 basedOnOptions:(CDStruct_68b2ff84 *)arg3;
- (BOOL)_setInstructionContentForStep:(id)arg1 withSecondary:(id)arg2 optionsToSet:(CDStruct_68b2ff84 *)arg3 basedOnPortion:(double)arg4;
- (BOOL)_startingWrongWayForLocation:(id)arg1 navigatorState:(int)arg2 routeMatch:(id)arg3;
- (id)_announcementForArrival;
- (double)_distanceForSign;
- (void)_resetStepState;
- (void)updateGuidanceForLocation:(id)arg1 navigatorState:(int)arg2;
- (unsigned long long)_currentAnnouncementStage;
- (id)_getClosestStepWithNameForProceedToRoute:(CDStruct_2c43369c)arg1 routeMatch:(id)arg2;
- (void)updateGuidanceForProceedToRouteAtLocation:(CDStruct_2c43369c)arg1 routeMatch:(id)arg2;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (void)_callUpdatePointOfInterestForLocation:(id)arg1 navigatorState:(int)arg2;
- (CDStruct_2c43369c)maneuverStepCoordinate;
@property(readonly, nonatomic) GEOComposedRouteStep *maneuverStep;
@property(readonly, nonatomic) unsigned long long maneuverStepIndex;
- (unsigned long long)_maneuverStepIndex;
@property(readonly, nonatomic) BOOL proceedingToRoute;
- (id)_getStepAtIndex:(unsigned long long)arg1 clampIndexToRange:(BOOL)arg2;
- (id)_getStepAtIndex:(unsigned long long)arg1;
- (BOOL)_hasCurrentRoadNameChangedForLocation:(id)arg1;
- (void)_clearCurrentRoadName;
- (BOOL)_hasSubsteps;
- (id)_nameInfoForContinueSign;
- (id)_nameInfoForCurrentRoad;
- (void)stop;
- (void)dealloc;
- (id)initWithNavigationSession:(id)arg1 proceedToRoute:(BOOL)arg2 allowMidRouteStart:(BOOL)arg3;

@end

