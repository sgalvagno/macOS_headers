//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ApplePushService/APSMessage.h>

@class NSData, NSDate;

@interface APSIncomingMessage : APSMessage
{
}

@property(nonatomic) long long priority;
@property(nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property(nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property(copy, nonatomic) NSData *token;
@property(copy, nonatomic) NSDate *timestamp;

@end

