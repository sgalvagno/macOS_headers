//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMCommandBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSArray, NSString;

@interface CEMDeviceInformationCommand : CEMCommandBase <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadQueries;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withQueries:(id)arg2;
+ (id)allowedPayloadKeys;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) NSArray *payloadQueries; // @synthesize payloadQueries=_payloadQueries;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (int)executionLevel;
- (BOOL)mustBeSupervised;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

