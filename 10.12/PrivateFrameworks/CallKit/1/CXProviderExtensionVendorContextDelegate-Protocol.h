//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CallKit/NSObject-Protocol.h>

@class CXAction, CXProviderExtensionVendorContext, CXTransaction;

@protocol CXProviderExtensionVendorContextDelegate <NSObject>
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledAudioSessionActivationStateChangedTo:(BOOL)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 handledActionTimeout:(CXAction *)arg2;
- (void)providerExtensionVendorContext:(CXProviderExtensionVendorContext *)arg1 receivedCommittedTransaction:(CXTransaction *)arg2;
@end

