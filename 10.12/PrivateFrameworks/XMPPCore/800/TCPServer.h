//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TCPServer : NSObject
{
    struct __CFSocket *_serverSocket;
    unsigned long long _port;
}

- (unsigned long long)port;
- (BOOL)acceptConnectionWithSocketHandle:(int)arg1 fromAddress:(id)arg2;
- (void)stop;
- (BOOL)startOnPort:(unsigned long long)arg1;
- (BOOL)isStarted;
- (void)dealloc;

@end

