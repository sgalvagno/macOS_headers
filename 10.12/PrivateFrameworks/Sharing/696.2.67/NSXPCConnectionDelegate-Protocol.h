//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Sharing/NSObject-Protocol.h>

@class NSInvocation, NSXPCCoder, NSXPCConnection;
@protocol NSSecureCoding;

@protocol NSXPCConnectionDelegate <NSObject>

@optional
- (void)connection:(NSXPCConnection *)arg1 handleInvocation:(NSInvocation *)arg2 isReply:(BOOL)arg3;
- (id <NSSecureCoding>)replacementObjectForXPCConnection:(NSXPCConnection *)arg1 encoder:(NSXPCCoder *)arg2 object:(id)arg3;
@end

