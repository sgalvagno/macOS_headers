//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class CTXPCServiceSubscriptionContext;

@protocol CoreTelephonyClientCarrierBundleDelegate <NSObject>

@optional
- (void)defaultBundleChange;
- (void)operatorBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
- (void)carrierBundleChange:(CTXPCServiceSubscriptionContext *)arg1;
@end

