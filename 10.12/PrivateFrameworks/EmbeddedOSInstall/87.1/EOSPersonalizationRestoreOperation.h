//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmbeddedOSInstall/EOSRestoreOperation.h>

@interface EOSPersonalizationRestoreOperation : EOSRestoreOperation
{
}

- (BOOL)_shouldRetryPersonalizationAfterError:(id)arg1;
- (BOOL)_personalizeBundleForDevice:(id)arg1 error:(id *)arg2;
- (BOOL)_deletePreviousPersonalizedBundle;
- (BOOL)_copyExistingFDRDataIfExists;
- (BOOL)_generateRestoreOptionsForDevice:(id)arg1;
- (BOOL)waitForDeviceDisconnected;
- (double)deviceConnectionTimeout;
- (long long)expectedDeviceMode;
- (long long)matchDeviceModes;
- (id)activityObject;
- (long long)restorePhase;
- (void)deviceConnected:(id)arg1;
- (BOOL)preOperation;

@end

