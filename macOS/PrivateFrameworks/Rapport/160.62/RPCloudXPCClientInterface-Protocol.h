//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSData, NSDictionary, NSString;

@protocol RPCloudXPCClientInterface

@optional
- (void)xpcCloudReceivedFrameData:(NSData *)arg1 fromID:(NSString *)arg2;
- (void)xpcCloudReceivedSessionStartRequest:(NSDictionary *)arg1 fromID:(NSString *)arg2 multicastFromID:(NSString *)arg3;
@end

