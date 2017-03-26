//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationCommandHandling-Protocol.h>

@class NEConfiguration, NEConfigurationManager, NSArray, NSMutableArray, NSString;

@interface NEUtilConfigurationClient : NSObject <NEConfigurationCommandHandling>
{
    BOOL _isAlwaysOn;
    NSString *_clientName;
    NEConfigurationManager *_manager;
    NSMutableArray *_createdConfigurations;
    NSMutableArray *_currentConfigurations;
    NSMutableArray *_identities;
    NSString *_configFile;
    NSString *_configFileLast;
    NEConfiguration *_currentConfiguration;
    struct AuthorizationOpaqueRef *_authorization;
}

+ (void)removeClientWithName:(id)arg1;
+ (id)clientWithName:(id)arg1;
+ (id)allClients;
@property(readonly) BOOL isAlwaysOn; // @synthesize isAlwaysOn=_isAlwaysOn;
@property(readonly) struct AuthorizationOpaqueRef *authorization; // @synthesize authorization=_authorization;
@property(retain) NEConfiguration *currentConfiguration; // @synthesize currentConfiguration=_currentConfiguration;
@property(copy) NSString *configFileLast; // @synthesize configFileLast=_configFileLast;
@property(copy) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain) NSMutableArray *identities; // @synthesize identities=_identities;
@property(retain) NSMutableArray *currentConfigurations; // @synthesize currentConfigurations=_currentConfigurations;
@property(retain) NSMutableArray *createdConfigurations; // @synthesize createdConfigurations=_createdConfigurations;
@property(readonly) NEConfigurationManager *manager; // @synthesize manager=_manager;
@property(readonly) NSString *clientName; // @synthesize clientName=_clientName;
- (void).cxx_destruct;
- (void)handleCommand:(int)arg1 forConfigWithName:(id)arg2 withParameters:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)unsetProxyServer:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setProxyServer:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setProxyParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setAlwaysOnParameters:(id)arg1 errorStr:(id *)arg2;
- (void)reloadIdentityListWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addIdentityProperties:(id)arg1 withDomain:(long long)arg2;
- (void)loadConfigurationWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadConfigurationsForceRefresh:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)removeAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)addAppRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)removePathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)addPathRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setPathControllerWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)removeOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)addOnDemandRuleWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setPPPParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setSharedSecretWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setIPSecParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)unsetCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setProviderTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setPasswordWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setCommonParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setFilterPluginWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)setProtocolWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)swapConfigurationTypeWithParameters:(id)arg1 errorStr:(id *)arg2;
- (BOOL)createConfigurationWithParameters:(id)arg1 errorStr:(id *)arg2;
- (id)protocolForParameters:(id)arg1;
- (BOOL)isIsAlwaysOn;
@property(copy) NSArray *onDemandRules;
@property BOOL onDemandEnabled;
@property BOOL enabled;
- (void)dealloc;
- (id)initWithClientName:(id)arg1;
- (id)initInternalWithClientName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

