//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RMExtensionConfigurationSubscriberRequestHandling.h"

@class NSArray, NSConditionLock, NSString, RMAssetResolver, RMConfigurationSubscriberClient, RMPolicyStore;

@interface RMExtensionConfigurationSubscriber : NSObject <RMExtensionConfigurationSubscriberRequestHandling>
{
    NSConditionLock *_configurationSubscriberClientLock;
    RMConfigurationSubscriberClient *_configurationSubscriberClient;
    RMAssetResolver *_assetResolver;
    RMPolicyStore *_policyStore;
    id <RMExtensionConfigurationApplicator> _applicator;
    NSArray *_configurationTypes;
}

+ (id)sharedSubscriber;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *configurationTypes; // @synthesize configurationTypes=_configurationTypes;
@property(readonly, nonatomic) id <RMExtensionConfigurationApplicator> applicator; // @synthesize applicator=_applicator;
@property(retain, nonatomic) RMPolicyStore *policyStore; // @synthesize policyStore=_policyStore;
@property(retain, nonatomic) RMAssetResolver *assetResolver; // @synthesize assetResolver=_assetResolver;
@property(retain, nonatomic) RMConfigurationSubscriberClient *configurationSubscriberClient; // @synthesize configurationSubscriberClient=_configurationSubscriberClient;
- (void)fetchThenApplyConfigurationsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithConfigurationSubscriberClient:(id)arg1 assetResolver:(id)arg2 policyStore:(id)arg3 applicator:(id)arg4 configurationTypes:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

