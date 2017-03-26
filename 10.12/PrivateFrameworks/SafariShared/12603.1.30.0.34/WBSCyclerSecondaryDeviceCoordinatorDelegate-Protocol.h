//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSData, NSError, WBSCyclerSecondaryDeviceCoordinator;

@protocol WBSCyclerSecondaryDeviceCoordinatorDelegate <NSObject>

@optional
- (void)secondaryDeviceCoordinator:(WBSCyclerSecondaryDeviceCoordinator *)arg1 didReceiveDataFromPrimaryDevice:(NSData *)arg2;
- (void)secondaryDeviceCoordinator:(WBSCyclerSecondaryDeviceCoordinator *)arg1 didEncounterError:(NSError *)arg2;
- (void)secondaryDeviceCoordinatorDidConnectToPrimaryDevice:(WBSCyclerSecondaryDeviceCoordinator *)arg1;
@end

