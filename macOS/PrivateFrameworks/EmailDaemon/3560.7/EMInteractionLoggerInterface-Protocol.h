//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EMMessageObjectID, NSDate, NSDictionary, NSString;

@protocol EMInteractionLoggerInterface <NSObject>
- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 data:(NSDictionary *)arg3;
- (void)logEvent:(NSString *)arg1 date:(NSDate *)arg2 messageID:(EMMessageObjectID *)arg3 data:(NSDictionary *)arg4;
@end

