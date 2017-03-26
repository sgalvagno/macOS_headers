//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;
@protocol ACCAuthContextProtocol, ACFHTTPTransportProtocol;

@interface ACCHTTPHandler : NSObject
{
    id <ACCAuthContextProtocol> _context;
    id <ACFHTTPTransportProtocol> _transport;
    CDUnknownBlockType _finalizeBlock;
    BOOL _shouldIgnoreInvalidDSPublicKey;
    BOOL _shouldIgnoreInvalidToken;
}

+ (id)handlerWithContext:(id)arg1;
@property BOOL shouldIgnoreInvalidToken; // @synthesize shouldIgnoreInvalidToken=_shouldIgnoreInvalidToken;
@property BOOL shouldIgnoreInvalidDSPublicKey; // @synthesize shouldIgnoreInvalidDSPublicKey=_shouldIgnoreInvalidDSPublicKey;
@property(retain, nonatomic) id <ACCAuthContextProtocol> context; // @synthesize context=_context;
@property(copy, nonatomic) CDUnknownBlockType finalizeBlock; // @synthesize finalizeBlock=_finalizeBlock;
@property(retain, nonatomic) id <ACFHTTPTransportProtocol> transport; // @synthesize transport=_transport;
@property(readonly, nonatomic) NSArray *serverAttemptsDelays;
@property(readonly, nonatomic) NSArray *serverHosts;
@property(readonly, nonatomic) NSString *iForgotURL;
- (id)iForgotString;
- (void)uninstallPublicKeyForRealm:(id)arg1;
- (BOOL)installCertificateWithString:(id)arg1 version:(id)arg2 forRealm:(id)arg3;
- (BOOL)updatePublicKeyWithResponse:(id)arg1;
- (BOOL)isUknownServerError:(id)arg1;
- (BOOL)isConnectionError:(id)arg1;
- (BOOL)shouldTryOtherServers:(id)arg1 error:(id)arg2;
- (BOOL)shouldReturnResponse:(id)arg1 orReportError:(id *)arg2;
- (id)responseWithData:(id)arg1 error:(id *)arg2;
- (id)convertErrorToACMError:(id)arg1;
- (id)invalidPublicKeyErrorForReponse:(id)arg1 error:(id)arg2;
- (void)cancelRequest;
- (void)performRequestWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateTransport;
@property(readonly, nonatomic) NSDictionary *httpRequestDictionary;
@property(readonly, nonatomic) NSDictionary *requestBody;
@property(readonly, nonatomic) NSDictionary *requestHeader;
@property(readonly, nonatomic) BOOL isCanceled;
- (id)realm;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

