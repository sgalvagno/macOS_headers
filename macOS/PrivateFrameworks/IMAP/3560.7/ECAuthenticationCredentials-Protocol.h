//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IMAP/NSObject-Protocol.h>

@class NSString;

@protocol ECAuthenticationCredentials <NSObject>
@property(readonly, copy, nonatomic) NSString *saslProfileName;
@property(readonly, copy) NSString *clientInfo;
@property(readonly, copy) NSString *oneTimePassword;
@property(readonly, copy) NSString *machineID;
@property(readonly, copy) NSString *appleAuthenticationToken;
@property(readonly, copy) NSString *applePersonID;
@property(readonly, copy) NSString *oauthToken;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *password;
@property(readonly, copy) NSString *username;
@end

