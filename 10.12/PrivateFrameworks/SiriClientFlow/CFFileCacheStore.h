//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

@interface CFFileCacheStore : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    NSCache *_scriptsMemoryCacheWithDomainAsKey;
}

+ (id)sharedStore;
+ (id)cachePath;
+ (id)cacheFilePathForDomain:(id)arg1;
@property(retain, nonatomic) NSCache *scriptsMemoryCacheWithDomainAsKey; // @synthesize scriptsMemoryCacheWithDomainAsKey=_scriptsMemoryCacheWithDomainAsKey;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheFileQueue; // @synthesize cacheFileQueue=_cacheFileQueue;
- (void).cxx_destruct;
- (id)init;
- (BOOL)createCacheDirectoryIfNeeded;
- (void)removeScriptWithIdentifier:(id)arg1;
- (id)cachedScriptDomainsAndCheckSums;
- (id)scriptForDomain:(id)arg1 scriptLoadType:(long long *)arg2;
- (void)cacheScriptForDomain:(id)arg1 script:(id)arg2 scriptLoadType:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)cacheScriptForDomain:(id)arg1 script:(id)arg2 scriptLoadType:(long long)arg3;

@end

