//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADMUser;

@interface MBInfo : NSObject
{
    ADMUser *_user;
}

+ (void)removeApplicationDoneCookie;
+ (BOOL)isApplicationDoneCookieSet;
+ (void)setApplicationDoneCookie;
+ (id)sharedInfo;
- (struct __SCNetworkService *)service;
- (id)_hardwareKey;
- (void)setUser:(id)arg1;
- (id)user;
- (id)init;

@end

