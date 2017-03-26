//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol NSViewBridgeKVOBuddy;

@interface NSViewBridge : NSObject
{
    NSMutableDictionary *_dict;
    NSObject<NSViewBridgeKVOBuddy> *_kvoBuddy;
    NSMutableSet *_nonLocalChangesInProgress;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (BOOL)objectIsSuitable:(id)arg1;
@property NSObject<NSViewBridgeKVOBuddy> *kvoBuddy; // @synthesize kvoBuddy=_kvoBuddy;
- (BOOL)_hasTrueValueForEntitlement:(id)arg1;
- (id)_copyValueForEntitlement:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 withKVO:(BOOL)arg3;
- (BOOL)keyIsRelevantToBuddy:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)allKeys;
- (long long)keyCount;
- (void)registerKey:(id)arg1 defaultObject:(id)arg2 owner:(unsigned char)arg3;
- (BOOL)isKeyPath:(id)arg1;
- (unsigned char)ownerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (BOOL)hasObject:(id)arg1 forKey:(id)arg2;
- (BOOL)hasObjectForKey:(id)arg1;
- (BOOL)hasKey:(id)arg1;
- (BOOL)changeOriginatesLocally;
- (BOOL)changeOriginatesLocally:(id)arg1;
- (void)nonLocalChangeInProgress:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)nonLocalChangeInProgress;
- (id)description;
@property(readonly) CDStruct_6ad76789 auditToken;
@property(readonly) int processIdentifier;
- (void)dealloc;

@end

