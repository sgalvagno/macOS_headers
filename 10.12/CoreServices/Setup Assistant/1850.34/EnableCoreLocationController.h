//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MacBuddyViewController.h"

@class ServicesManager;

@interface EnableCoreLocationController : MacBuddyViewController
{
    BOOL enableCoreLocation;
    BOOL naggedForOptIn;
    ServicesManager *_servicesManager;
}

@property(retain) ServicesManager *servicesManager; // @synthesize servicesManager=_servicesManager;
@property BOOL enableCoreLocation; // @synthesize enableCoreLocation;
- (void).cxx_destruct;
- (void)moreInfoPressed:(id)arg1;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldSkipPane;
- (id)nextViewIdentifier;
- (void)willBecomeVisible;
- (id)manager;
- (void)coreLocationInfoSheetDidEnd:(id)arg1;
- (id)init;

@end

