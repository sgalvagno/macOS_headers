//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFactorySupport_OSX/DeviceInfoProtocol-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;

@interface CSCRulesProcessor : NSObject <DeviceInfoProtocol>
{
    CDUnknownBlockType _errorHandler;
    NSDictionary *_uutDict;
    NSDictionary *_sfcDict;
    NSDictionary *_userInputDict;
    NSMutableArray *_outList;
    NSMutableArray *_testResults;
}

- (void).cxx_destruct;
- (id)keysRequiredWithMPN:(id)arg1 RC:(id)arg2 DeviceInfo:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)keysRequiredWithMPN:(id)arg1 RC:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (id)rulesAppliedWithMPN:(id)arg1 RC:(id)arg2 DeviceInfo:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)rulesAppliedWithMPN:(id)arg1 RC:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (BOOL)systemCheckWithMobileDeviceInfo:(id)arg1 attrsList:(id *)arg2 rulesApplied:(id *)arg3 testResults:(id *)arg4;
- (id)testResultDictionaryWithTest:(id)arg1 Result:(BOOL)arg2 expectedValue:(id)arg3 actualValue:(id)arg4;
- (BOOL)systemCheckWithMobileDeviceInfo:(id)arg1 attrsList:(id *)arg2 rulesApplied:(id *)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)eeeeFromMLBSerialNumber:(id)arg1;
- (id)eeeFromMLBSerialNumber:(id)arg1;
- (id)ccccFromSerialNumber:(id)arg1;
- (id)cccFromSerialNumber:(id)arg1;
- (void)ruleFailErrorHandlerWithTestname:(id)arg1 comparison:(id)arg2 expected:(id)arg3 actual:(id)arg4;
- (void)generateResult:(id)arg1 errorCode:(id)arg2 actual:(id)arg3 actualType:(id)arg4 expected:(id)arg5 expectedType:(id)arg6 result:(id)arg7;
- (id)getDeviceInfoWithKey:(id)arg1;
- (BOOL)deviceInfoLoaded;
- (id)getNumberAttribute:(id)arg1;
- (id)getStringAttribute:(id)arg1;
- (id)getAttribute:(id)arg1;
- (unsigned long long)parseNandSize:(double)arg1;
- (BOOL)processRule:(id)arg1;
- (BOOL)processRulesWithMpn:(id)arg1 Rc:(id)arg2 andRulesApplied:(id *)arg3;
- (BOOL)buildRulesWithMpn:(id)arg1 Rc:(id)arg2 andRulesApplied:(id *)arg3;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)init;
- (void)setErrorReasonDict;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

