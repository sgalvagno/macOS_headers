//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol UMXPCClient <NSObject>
- (void)personaUpdateCallbackForMachServiceCompletionHandler:(void (^)(void))arg1;
- (void)personaListDidUpdateCompletionHandler:(void (^)(void))arg1;
- (void)bubbleDidPop;
- (void)deviceLoginSessionStateDidUpdate;
- (void)userSwitchTaskListDidUpdate;
- (void)readyToSwitchToLoginSession:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)readyToSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)willSwitchToUser:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)uploadContentWithCompletionHandler:(void (^)(void))arg1;
@end

