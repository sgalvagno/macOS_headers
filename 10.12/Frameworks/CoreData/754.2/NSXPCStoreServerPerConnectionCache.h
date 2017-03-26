//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSPersistentStoreCoordinator, NSSQLitePrefetchRequestCache;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface NSXPCStoreServerPerConnectionCache : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSSQLitePrefetchRequestCache *_prefetchRequestCache;
    NSMutableDictionary *_generationTokenMap;
    NSObject<OS_os_transaction> *_transaction;
}

@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (id)manyToManyPrefetchRequestsForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)manyToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (id)inverseIsToOnePrefetchRequestForRelationshipNamed:(id)arg1 onEntity:(id)arg2;
- (void)releaseQueryGenerationForRemoteGeneration:(id)arg1;
- (void)registerQueryGeneration:(id)arg1 forRemoteGeneration:(id)arg2;
- (id)localGenerationForRemoteGeneration:(id)arg1;
- (void)dealloc;
- (id)initWithCoordinator:(id)arg1;

@end

