//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>
#import <MapKit/_MXExtensionVendorContextProtocol-Protocol.h>

@class NSString;
@protocol _MXExtensionHostXPCProtocol;

@protocol _MXExtensionContextXPCProtocol <NSObject, _MXExtensionVendorContextProtocol>
- (void)connectRemoteProxyFromHost:(id <_MXExtensionHostXPCProtocol>)arg1 supportingProtocolName:(NSString *)arg2 reply:(void (^)(id <_MXExtensionVendorXPCProtocol>))arg3;
@end

