//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderUsage : NSObject
{
    NSObject<OS_dispatch_queue> *_usageIsolation;
    NSMutableDictionary *_usageDictionary;
}

- (void)finishedUsageForTileWithKey:(const struct _GEOTileKey *)arg1 withUserInfo:(id)arg2;
- (void)removeUsageForTileKey:(const struct _GEOTileKey *)arg1;
- (void)decodedTileWithKey:(const struct _GEOTileKey *)arg1 withStartTime:(double)arg2 andTileSize:(unsigned long long)arg3;
- (void)startUsageTileWithKey:(const struct _GEOTileKey *)arg1;
- (void)dealloc;
- (id)init;

@end

