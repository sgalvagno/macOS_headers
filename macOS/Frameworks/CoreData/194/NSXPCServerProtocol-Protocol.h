//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCoreDataXPCMessage;

@protocol NSXPCServerProtocol <NSObject>
- (oneway void)handleRequest:(NSCoreDataXPCMessage *)arg1 reply:(void (^)(NSCoreDataXPCMessage *, NSData *))arg2;
@end

