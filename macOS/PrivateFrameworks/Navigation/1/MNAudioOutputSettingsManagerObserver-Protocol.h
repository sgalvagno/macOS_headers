//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Navigation/NSObject-Protocol.h>

@class MNAudioOutputSetting, MNAudioOutputSettingsManager, NSArray;

@protocol MNAudioOutputSettingsManagerObserver <NSObject>
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateRouteSelection:(unsigned long long)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSettingForVoicePrompt:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateCurrentSetting:(MNAudioOutputSetting *)arg2;
- (void)audioOutputSettingsManager:(MNAudioOutputSettingsManager *)arg1 didUpdateSettings:(NSArray *)arg2;
@end

