//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PeriodicMaintenanceActivity : NSObject
{
    NSMutableArray *_activities;
    unsigned long long _nextActivityIndex;
}

+ (void)registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(CDUnknownBlockType)arg3;
+ (id)sharedInstance;
+ (const char *)periodicActivityID;
+ (long long)periodicActivityInterval;
- (void).cxx_destruct;
- (void)_registerPeriodicActivityWithIdentifier:(id)arg1 queue:(id)arg2 activity:(CDUnknownBlockType)arg3;
- (void)_handleActivityRun:(id)arg1;
- (void)_registerPeriodicMaintenanceActivity;
- (void)dealloc;
- (id)init;

@end

