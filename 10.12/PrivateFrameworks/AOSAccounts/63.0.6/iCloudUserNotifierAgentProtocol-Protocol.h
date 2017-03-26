//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AOSAccounts/NSObject-Protocol.h>

@class NSString, iCloudUserNotification;

@protocol iCloudUserNotifierAgentProtocol <NSObject>
- (void)setDelegateMachServiceName:(NSString *)arg1;
- (void)setClientIdentifier:(NSString *)arg1;
- (void)pendingNotificationsWithIdentifier:(NSString *)arg1 replyBlock:(void (^)(NSArray *, NSError *))arg2;
- (void)removeAllNotifications;
- (void)removeNotificationsWithDSID:(NSString *)arg1;
- (void)removeNotificationWithIdentifier:(NSString *)arg1;
- (void)deliverNotificaton:(iCloudUserNotification *)arg1 replyBlock:(void (^)(void))arg2;
@end

