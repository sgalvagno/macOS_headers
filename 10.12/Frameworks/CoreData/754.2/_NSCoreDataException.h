//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSException.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSCoreDataException : NSException
{
    long long _code;
    NSString *_domain;
}

+ (id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;
- (id)errorObjectWithUserInfo:(id)arg1;
- (id)domain;
- (long long)code;
- (void)_setDomain:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;
- (id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4;

@end

