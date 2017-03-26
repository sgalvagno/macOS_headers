//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CFNetwork/NSURLProtocolClient-Protocol.h>

@class NSString, NSURLAuthenticationChallenge;

__attribute__((visibility("hidden")))
@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient>
{
    struct URLProtocolClient *_cf;
    struct URLProtocol *_prot;
    NSURLAuthenticationChallenge *_challenge;
    struct _CFURLAuthChallenge *_cfChallenge;
}

- (void)URLProtocol:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)URLProtocol:(id)arg1 didFailWithError:(id)arg2;
- (void)URLProtocolDidFinishLoading:(id)arg1;
- (void)URLProtocol:(id)arg1 didLoadData:(id)arg2;
- (void)URLProtocol:(id)arg1 didReceiveResponse:(id)arg2 cacheStoragePolicy:(unsigned long long)arg3;
- (void)URLProtocol:(id)arg1 cachedResponseIsValid:(id)arg2;
- (void)URLProtocol:(id)arg1 wasRedirectedToRequest:(id)arg2 redirectResponse:(id)arg3;
- (struct _CFURLAuthChallenge *)cfChallenge;
- (id)challenge;
- (void)teardown;
- (void)withCustomProtocolScheduling:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithCFClient:(struct URLProtocolClient *)arg1 prot:(struct URLProtocol *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

