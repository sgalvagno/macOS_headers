//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSAppleEventDescriptor.h>

@interface NSAppleEventDescriptor (Sending)
- (int)sendWithTimeout:(long long)arg1 returningReply:(id *)arg2 loggingEvents:(BOOL)arg3;
- (int)sendWithTimeout:(long long)arg1 returningReply:(id *)arg2;
- (int)sendWithoutTimeoutReturningReply:(id *)arg1;
- (int)sendReturningReply:(id *)arg1;
- (int)sendWithTimeout:(long long)arg1;
- (int)sendWithoutTimeout;
- (int)send;
@end

