//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Admin/User.h>

@interface RemoteUser : User
{
}

+ (id)remoteUsersAtAddress:(id)arg1 name:(id)arg2 password:(id)arg3 port:(long long)arg4;
- (BOOL)isLocal;
- (BOOL)isAdministrator;
- (id)initWithInfo:(id)arg1 node:(id)arg2 attributes:(id)arg3;

@end

