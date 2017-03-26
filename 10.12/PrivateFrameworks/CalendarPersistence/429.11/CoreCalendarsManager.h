//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CoreCalendarsManager : NSObject
{
    NSMutableDictionary *_knownSources;
}

+ (void)_resetForUnitTests;
+ (BOOL)defaultManagerInitialized;
+ (id)defaultManager;
- (id)sources;
- (void)unregisterSourceForKey:(id)arg1;
- (void)unregisterSource:(id)arg1;
- (void)registerSource:(id)arg1;
- (void)unregisterAllSources;
- (id)sourceForKey:(id)arg1;
- (id)init;
- (void)dealloc;

@end

