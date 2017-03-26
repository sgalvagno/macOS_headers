//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface CDContextStore : NSObject
{
    NSXPCConnection *_connection;
    BOOL _interrupted;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_waitForeverQueue;
    NSMutableDictionary *_registeredPredicates;
}

+ (id)contextStore;
- (void).cxx_destruct;
- (BOOL)cancelWaitForeverForPredicteString:(id)arg1;
- (void)waitForeverForPredicteString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (BOOL)cancelWaitForeverForPredicateString:(id)arg1 withOptions:(id)arg2;
- (BOOL)cancelWaitForeverForPredicateString:(id)arg1;
- (void)waitForeverForPredicateString:(id)arg1 withOptions:(id)arg2 handlerQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)deregisterHandlerForPredicateString:(id)arg1 withClientId:(id)arg2;
- (void)deregisterHandlerForPredicateString:(id)arg1 withOptions:(id)arg2;
- (void)deregisterHandlerForPredicateString:(id)arg1;
- (void)deregisterHandlerForPredicateId:(unsigned long long)arg1;
- (void)enableHandlerForPredicateId:(unsigned long long)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)registerHandlerForPredicateString:(id)arg1 withOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)clientIdentifierFromOptions:(id)arg1;
- (id)stateForAllKeys;
- (id)stateForKeys:(id)arg1;
- (id)stateForKeysTreatingNilAsAll:(id)arg1;
- (id)stateForKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1;
- (id)stringValueForKey:(id)arg1;
- (BOOL)setIntegerValue:(long long)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (BOOL)setStringValue:(id)arg1 forKey:(id)arg2 withMetaData:(id)arg3;
- (id)settingsForKey:(id)arg1;
- (BOOL)registerKey:(id)arg1 withSettings:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)initConnection;
- (void)set_invalidated:(BOOL)arg1;
- (void)set_interrupted:(BOOL)arg1;

@end

