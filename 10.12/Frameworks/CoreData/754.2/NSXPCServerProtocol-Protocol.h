//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSObject-Protocol.h>

@class NSCoreDataXPCMessage;

@protocol NSXPCServerProtocol <NSObject>
- (oneway void)handleRequest:(NSCoreDataXPCMessage *)arg1 reply:(void (^)(NSCoreDataXPCMessage *, NSData *))arg2;
@end

