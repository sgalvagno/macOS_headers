//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AudioDSPManager/dspd_HardwareVolumeDelegate-Protocol.h>
#import <AudioDSPManager/dspd_VolumeNotificationDelegate-Protocol.h>

@protocol dspd_ActivationChangeRequest, dspd_ConfigurationChangeRequest, dspd_DeactivationChangeRequest, dspd_HardwareVolumeDelegate, dspd_SupportedPublicStreamFormatRequest, dspd_VolumeNotificationDelegate;

@protocol dspd_DSPDelegate <dspd_HardwareVolumeDelegate, dspd_VolumeNotificationDelegate>
@property(readonly, nonatomic) vector_a93e9522 muteRecords;
@property(readonly, nonatomic) vector_df89e1f1 scalarVolumeRecords;
- (struct error_code)fadeVolumeLevel:(float)arg1 ioControllerID:(unsigned long long)arg2 direction:(unsigned char)arg3 portID:(optional_5c48748e)arg4 duration:(duration_34584d68)arg5 completionHandler:(function_f5b89e9d)arg6;
- (vector_e9e5d60e)setMuteRecords:(const vector_a93e9522 *)arg1;
- (vector_e9e5d60e)setScalarVolumeRecords:(const vector_df89e1f1 *)arg1;
- (struct error_code)setVirtualMasterStereoPan:(unsigned long long)arg1 stereoPan:(float)arg2;
- (expected_60ac6007)virtualMasterStereoPan:(unsigned long long)arg1;
- (struct error_code)setVirtualMasterVolume:(unsigned long long)arg1 scalarVolume:(float)arg2;
- (expected_60ac6007)virtualMasterVolume:(unsigned long long)arg1;
- (expected_336b2855)volumeCapabilities:(unsigned long long)arg1;
- (expected_27549f77)supportedPublicStreamFormats:(id <dspd_SupportedPublicStreamFormatRequest>)arg1;
- (optional_95a1d2b1)activeMicrophoneConfiguration:(unsigned long long)arg1 ioControllerID:(unsigned long long)arg2;
- (optional_4a6ac3f9)simulateMicrophoneConfigurationAvailability:(unsigned long long)arg1 configuration:(id <dspd_ConfigurationChangeRequest>)arg2;
- (expected_af0f637c)simulateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_af0f637c)simulateConfigurationChange:(id <dspd_ConfigurationChangeRequest>)arg1;
- (expected_025c1a52)configurationChangeComplete:(int)arg1 dspMutation:(function_71b6729b)arg2;
- (expected_a78876cb)adaptToConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_a78876cb)adaptToConfigurationChange:(id <dspd_ConfigurationChangeRequest>)arg1;
- (expected_2b9a0a05)negotiateConfigurationChanges:(const vector_d47d98e2 *)arg1;
- (expected_2b9a0a05)negotiateConfigurationChange:(id <dspd_ConfigurationChangeRequest>)arg1;
- (id <dspd_SupportedPublicStreamFormatRequest>)supportedPublicStreamFormatRequest;
- (id <dspd_DeactivationChangeRequest>)deactivationChangeRequestWithSession:(unsigned int)arg1;
- (id <dspd_ActivationChangeRequest>)activationChangeRequestWithSession:(unsigned int)arg1;
- (struct error_code)setVolumeNotificationDelegate:(id <dspd_VolumeNotificationDelegate>)arg1;
- (struct error_code)setHardwareVolumeDelegate:(id <dspd_HardwareVolumeDelegate>)arg1;
@end

