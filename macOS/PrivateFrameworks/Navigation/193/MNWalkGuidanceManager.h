//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/MNClassicGuidanceManager.h>

__attribute__((visibility("hidden")))
@interface MNWalkGuidanceManager : MNClassicGuidanceManager
{
}

- (int)transportType;
- (void)updateGuidanceForProceedToRouteAtLocation:(CDStruct_c3b9c2ee)arg1 routeMatch:(id)arg2 remainingTime:(double)arg3 distanceUntilDestination:(double)arg4;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (void)_updatePrepareForNextStep;
- (id)_combinedGuidanceForStep:(id)arg1 withType:(int)arg2;
- (double)_adjustedVehicleSpeed:(id)arg1;

@end

