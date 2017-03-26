//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CommerceKit/NSCoding-Protocol.h>
#import <CommerceKit/NSCopying-Protocol.h>
#import <CommerceKit/NSMutableCopying-Protocol.h>

@class NSData, NSDictionary, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying>
{
    long long _allowedRetryCount;
    unsigned long long _cachePolicy;
    NSString *_clientIdentifier;
    NSData *_httpBody;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSDictionary *_requestParameters;
    double _timeoutInterval;
    NSString *_urlBagKey;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly) NSURL *URL;
@property(readonly, copy) NSString *URLBagKey;
@property(readonly) double timeoutInterval;
@property(readonly, copy) NSDictionary *requestParameters;
@property(readonly, getter=isITunesStoreRequest) BOOL ITunesStoreRequest;
@property(readonly, copy) NSString *HTTPMethod;
@property(readonly, copy) NSDictionary *HTTPHeaders;
@property(readonly, copy) NSData *HTTPBody;
- (id)copyURLRequest;
@property(readonly, copy) NSString *clientIdentifier;
@property(readonly) unsigned long long cachePolicy;
@property(readonly) long long allowedRetryCount;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)init;
- (id)_initCommon;

@end

