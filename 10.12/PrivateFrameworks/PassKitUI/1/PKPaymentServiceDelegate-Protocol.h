//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSString, PKFelicaPassProperties, PKFieldProperties, PKPaymentMessage, PKPaymentTransaction, PKValueAddedServiceTransaction;

@protocol PKPaymentServiceDelegate <NSObject>

@optional
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didUpdateWithFelicaPassProperties:(PKFelicaPassProperties *)arg2;
- (void)passWithUniqueIdentifier:(NSString *)arg1 didReceiveValueAddedServiceTransaction:(PKValueAddedServiceTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableTransactionService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didEnableMessageService:(BOOL)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didRemoveTransactionWithIdentifier:(NSString *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveTransaction:(PKPaymentTransaction *)arg2;
- (void)paymentPassWithUniqueIdentifier:(NSString *)arg1 didReceiveMessage:(PKPaymentMessage *)arg2;
- (void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(NSString *)arg1;
- (void)paymentDeviceDidExitField;
- (void)paymentDeviceDidEnterFieldWithProperties:(PKFieldProperties *)arg1;
- (void)paymentServiceReceivedInterruption;
@end

