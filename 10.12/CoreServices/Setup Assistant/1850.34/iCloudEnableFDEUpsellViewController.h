//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "iCloudViewControllerBase.h"

@class NSString;

@interface iCloudEnableFDEUpsellViewController : iCloudViewControllerBase
{
    BOOL _turnOnFDE;
    BOOL _useiCloudRecovery;
    NSString *_cachedFullUserName;
}

@property(retain) NSString *cachedFullUserName; // @synthesize cachedFullUserName=_cachedFullUserName;
@property BOOL useiCloudRecovery; // @synthesize useiCloudRecovery=_useiCloudRecovery;
@property BOOL turnOnFDE; // @synthesize turnOnFDE=_turnOnFDE;
- (void).cxx_destruct;
@property(readonly) NSString *userFullName;
- (void)forwardPaneWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)shouldReturnFromSidetrip;
- (id)nextViewIdentifier;
- (void)didChangeValueForKey:(id)arg1;
- (void)viewWillAppear;
- (void)willBecomeVisible;
- (id)init;

@end

