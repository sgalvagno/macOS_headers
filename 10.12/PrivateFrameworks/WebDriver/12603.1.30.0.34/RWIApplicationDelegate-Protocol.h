//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebDriver/NSObject-Protocol.h>

@class RWIApplication, RWIDebuggable, RWIDrivable;

@protocol RWIApplicationDelegate <NSObject>

@optional
- (void)applicationCapabilitiesChanged:(RWIApplication *)arg1;
- (void)applicationDidBecomeInactive:(RWIApplication *)arg1;
- (void)applicationDidBecomeActive:(RWIApplication *)arg1;
- (void)application:(RWIApplication *)arg1 didRemoveDrivable:(RWIDrivable *)arg2;
- (void)application:(RWIApplication *)arg1 didAddDrivable:(RWIDrivable *)arg2;
- (void)application:(RWIApplication *)arg1 didRemoveDebuggable:(RWIDebuggable *)arg2;
- (void)application:(RWIApplication *)arg1 didAddDebuggable:(RWIDebuggable *)arg2;
@end

