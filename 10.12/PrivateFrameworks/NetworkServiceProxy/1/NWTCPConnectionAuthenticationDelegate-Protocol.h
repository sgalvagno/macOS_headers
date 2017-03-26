//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NetworkServiceProxy/NSObject-Protocol.h>

@class NSArray, NWTCPConnection;

@protocol NWTCPConnectionAuthenticationDelegate <NSObject>

@optional
- (void)evaluateTrustForConnection:(NWTCPConnection *)arg1 peerCertificateChain:(NSArray *)arg2 completionHandler:(void (^)(struct __SecTrust *))arg3;
- (BOOL)shouldEvaluateTrustForConnection:(NWTCPConnection *)arg1;
- (void)provideIdentityForConnection:(NWTCPConnection *)arg1 completionHandler:(void (^)(struct OpaqueSecIdentityRef *, NSArray *))arg2;
- (BOOL)shouldProvideIdentityForConnection:(NWTCPConnection *)arg1;
@end

