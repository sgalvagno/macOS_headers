//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class GEOComposedRoute, MNTrafficIncidentAlert, MNTrafficIncidentAlertUpdater;

@protocol MNTrafficIncidentAlertUpdaterDelegate <NSObject>
- (double)trafficIncidentAlertUpdaterTimeUntilNextAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterTimeSinceLastAnnouncement:(MNTrafficIncidentAlertUpdater *)arg1;
- (double)trafficIncidentAlertUpdaterRemainingTimeOnRoute:(MNTrafficIncidentAlertUpdater *)arg1;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 didSwitchToNewRoute:(GEOComposedRoute *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 updatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 invalidatedAlert:(MNTrafficIncidentAlert *)arg2;
- (void)trafficIncidentAlertUpdater:(MNTrafficIncidentAlertUpdater *)arg1 receivedAlert:(MNTrafficIncidentAlert *)arg2 responseCallback:(void (^)(BOOL))arg3;
@end

