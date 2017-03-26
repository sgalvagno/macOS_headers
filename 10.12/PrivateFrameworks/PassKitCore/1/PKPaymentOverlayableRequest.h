//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKPaymentOverlayableRequest : PKPaymentWebServiceRequest
{
    NSMutableDictionary *_overlayParameters;
    NSMutableDictionary *_secureOverlayParameters;
    NSArray *_overridenKeys;
    BOOL _requiresConfigurationForRetry;
    BOOL _requiresConfigurationForRedirect;
}

@property(nonatomic) BOOL requiresConfigurationForRedirect; // @synthesize requiresConfigurationForRedirect=_requiresConfigurationForRedirect;
@property(nonatomic) BOOL requiresConfigurationForRetry; // @synthesize requiresConfigurationForRetry=_requiresConfigurationForRetry;
- (void).cxx_destruct;
- (BOOL)hasOverlayParameters;
- (void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)_setOverriddenKeys:(id)arg1;
- (void)_applySecureOverlayToDictionary:(id)arg1;
- (void)_applyOverlayToDictionary:(id)arg1;
@property(copy, nonatomic) NSDictionary *secureOverlayParameters;
- (id)secureOverlayValueForKey:(id)arg1;
- (void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2;
@property(copy, nonatomic) NSDictionary *overlayParameters;
- (id)overlayValueForKey:(id)arg1;
- (void)setOverlayValue:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

