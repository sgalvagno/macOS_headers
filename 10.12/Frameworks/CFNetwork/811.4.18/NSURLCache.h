//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURLCacheInternal;

@interface NSURLCache : NSObject
{
    NSURLCacheInternal *_internal;
}

+ (void)_setVaryHeaderSupport;
+ (void)setSharedURLCache:(id)arg1;
+ (id)sharedURLCache;
- (BOOL)_isVaryHeaderSupportEnabled;
- (void)_updateVaryState:(id)arg1 forURL:(id)arg2;
- (id)_varyStateForURL:(id)arg1;
- (id)_diskCacheDefaultPath;
- (id)_cacheDirectory;
- (const struct _CFURLCache *)_CFURLCache;
- (void)dealloc;
@property(readonly) unsigned long long currentDiskUsage;
@property(readonly) unsigned long long currentMemoryUsage;
@property unsigned long long diskCapacity;
@property unsigned long long memoryCapacity;
- (void)removeCachedResponsesSinceDate:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (void)flushWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithMemoryCapacity:(unsigned long long)arg1 diskCapacity:(unsigned long long)arg2 diskPath:(id)arg3;
- (id)_initWithExistingCFURLCache:(struct _CFURLCache *)arg1;
- (id)initWithExistingSharedCFURLCache:(struct _CFURLCache *)arg1;
- (id)_initVaryHeaderEnabledWithPath:(id)arg1;
- (id)init;
- (id)_initWithIdentifier:(id)arg1 memoryCapacity:(long long)arg2 diskCapacity:(long long)arg3 private:(_Bool)arg4;
- (long long)_nscfBridgeURLCacheCurrentDiskUsage;
- (long long)_nscfBridgeURLCacheCurrentMemoryUsage;
- (long long)_nscfBridgeURLCacheMemoryCapacity;
- (void)_nscfBridgeURLCacheRemoveAllCachedResponses;
- (void)_nscfBridgeURLCacheRemoveCachedResponseForRequest:(id)arg1;
- (void)_nscfBridgeURLCacheSetDiskCapacity:(long long)arg1;
- (void)_nscfBridgeURLCacheSetMemoryCapacity:(long long)arg1;
- (long long)_nscfBridgeURLCacheDiskCapacity;
- (void)_nscfBridgeURLCacheStoreCachedResponse:(struct _CFCachedURLResponse *)arg1 forRequest:(struct _CFURLRequest *)arg2;
- (struct _CFCachedURLResponse *)_nscfBridgeURLCacheCopyResponseForRequest:(struct _CFURLRequest *)arg1;
- (void)removeCachedResponseForDataTask:(id)arg1;
- (void)getCachedResponseForDataTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storeCachedResponse:(id)arg1 forDataTask:(id)arg2;

@end

