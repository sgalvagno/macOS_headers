//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFAccessoryProfileItemProvider.h>

@class HMUser;

@interface HFAccessoryInvitationAccessoryProfileItemProvider : HFAccessoryProfileItemProvider
{
    HMUser *_user;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMUser *user; // @synthesize user=_user;
- (id)invalidationReasons;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithHome:(id)arg1 user:(id)arg2;
- (id)initWithHome:(id)arg1;

@end

