//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ISS_DAVAuthentication : NSObject
{
    struct _CFHTTPAuthentication *_auth;
    NSString *_user;
    NSString *_pass;
    NSString *_domain;
}

+ (id)findProxyAuthenticationForRequest:(struct __CFHTTPMessage *)arg1;
- (BOOL)setProxyAuthFromKeychainForRequest:(struct __CFHTTPMessage *)arg1 proxyConfig:(id)arg2;
- (BOOL)applyCredentialsToRequest:(struct __CFHTTPMessage *)arg1;
- (BOOL)changeAuthForResponse:(struct __CFHTTPMessage *)arg1;
- (BOOL)requiresDomain;
- (BOOL)requiresProxyAuthCredentials;
- (void)setDomain:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)realm;
- (id)password;
- (id)username;
- (id)initWithHTTPResponse:(struct __CFHTTPMessage *)arg1;
- (void)finalize;
- (void)dealloc;

@end

