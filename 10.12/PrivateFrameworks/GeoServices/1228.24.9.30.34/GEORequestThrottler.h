//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;

@interface GEORequestThrottler : NSObject
{
    NSMapTable *_throttleMap;
    NSLock *_lock;
}

+ (id)sharedThrottler;
- (id)_throttlePolicyForKey:(id)arg1;
- (double)throttleStateResetTimeRemainingForKey:(id)arg1;
- (unsigned long long)throttleStateLevelForKey:(id)arg1;
- (BOOL)allowRequestForKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

