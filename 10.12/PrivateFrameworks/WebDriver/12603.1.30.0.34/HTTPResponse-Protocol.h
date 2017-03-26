//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class HTTPData, NSData, NSDictionary;

@protocol HTTPResponse
- (BOOL)isDone;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;

@optional
- (void)connectionDidClose;
- (BOOL)isChunked;
- (NSDictionary *)httpHeaders;
- (long long)status;
- (BOOL)delayResponseHeaders;
- (HTTPData *)readHTTPDataOfLength:(unsigned long long)arg1 orLimit:(unsigned long long)arg2;
- (NSData *)readDataOfLength:(unsigned long long)arg1;
@end

