//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItem.h>

@class NSSet;

@interface HUNetworkProtectionModeOptionItem : HFItem
{
    long long _targetProtectionModeOption;
    NSSet *_networkConfigurationProfiles;
}

+ (long long)_priorityForTargetProtectionMode:(long long)arg1;
@property(readonly, copy, nonatomic) NSSet *networkConfigurationProfiles; // @synthesize networkConfigurationProfiles=_networkConfigurationProfiles;
@property(readonly, nonatomic) long long targetProtectionModeOption; // @synthesize targetProtectionModeOption=_targetProtectionModeOption;
- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithNetworkConfigurationProfiles:(id)arg1 targetProtectionModeOption:(long long)arg2;

@end

