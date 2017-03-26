//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;

@interface CVMLRequestHandler : NSObject
{
    NSMutableArray *_requestsInFlight;
    NSMutableArray *_requestsPending;
    NSLock *_requestLock;
    NSMutableDictionary *_cachedResults;
    NSObject *_clusterContext;
}

+ (void)forcedCleanupWithOptions:(id)arg1;
+ (void)requestForcedCleanupWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)requestForcedCleanupWithOptions:(id)arg1;
+ (void)forcedCleanup;
+ (void)requestForcedCleanup;
+ (id)handlerWithOptions:(id)arg1;
+ (id)asyncProcessingDispatchQueue;
@property(retain) NSObject *clusterContext; // @synthesize clusterContext=_clusterContext;
@property(retain) NSMutableDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
- (void).cxx_destruct;
- (void)cancelAllRequests;
- (BOOL)clearResultsCacheForKey:(id)arg1;
- (BOOL)addUniqueResultsIntoCacheForKey:(id)arg1 withResultValues:(id)arg2;
- (id)getCachedResultsForKey:(id)arg1;
- (BOOL)performRequests:(id)arg1 error:(id *)arg2;
- (BOOL)performRequestsAsynchronous:(id)arg1 error:(id *)arg2 queue:(id)arg3;
- (id)_asyncProcessingDispatchQueue:(id *)arg1;
- (void)_asynchronouslyDispatchRequests:(id)arg1 onDispatchQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_performRequests:(id)arg1 error:(id *)arg2;
- (id)_orderedRequestsForRequests:(id)arg1;
- (BOOL)_validateRequests:(id)arg1 error:(id *)arg2;
- (id)initWithOptions:(id)arg1;
- (id)init;

@end

