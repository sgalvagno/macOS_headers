//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class ISStore, ISStoreIndex, NSCache, NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_semaphore;

@interface ISIconCache : NSObject
{
    NSString *_cachePath;
    NSString *_cacheName;
    NSXPCConnection *_connection;
    ISStoreIndex *_storeIndex;
    ISStore *_store;
    NSCache *_imageCache;
    NSObject<OS_dispatch_semaphore> *_initializationSema;
    NSObject<OS_dispatch_group> *_initializationGroup;
}

+ (id)defaultIconCache;
@property(readonly) NSCache *imageCache; // @synthesize imageCache=_imageCache;
@property(readonly) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(readonly) NSString *cacheName; // @synthesize cacheName=_cacheName;
- (id)description;
- (void)clear;
- (void)imageWithDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForBinding:(struct _LSBinding *)arg1 size:(struct CGSize)arg2 scale:(unsigned int)arg3 options:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (struct CGImage *)copyImageForBinding:(struct _LSBinding *)arg1 size:(struct CGSize)arg2 scale:(unsigned int)arg3 options:(id)arg4;
@property(readonly) ISStoreIndex *storeIndex; // @synthesize storeIndex=_storeIndex;
@property(readonly) ISStore *store; // @synthesize store=_store;
@property(readonly) NSString *cachePath; // @dynamic cachePath;
- (id)serviceName;
- (void)waitForInitializationToComplete;
- (void)dealloc;
- (id)initWithCacheName:(id)arg1;
- (struct CGImage *)_createCGImageWithData:(id)arg1 UUID:(id)arg2 addToCache:(BOOL)arg3;
- (void)_fetchImageForImageDescriptor:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (struct CGImage *)_copyCachedCGImageForImageDescriptor:(id)arg1;

@end

