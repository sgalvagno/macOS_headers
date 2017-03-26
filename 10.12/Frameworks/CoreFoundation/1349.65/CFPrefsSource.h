//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CFXPreferences;

__attribute__((visibility("hidden")))
@interface CFPrefsSource : NSObject
{
    _CFXPreferences *_containingPreferences;
    struct __CFDictionary *_dict;
    struct __CFArray *_observers;
    // Error parsing type: Aq, name: _generationCount
    // Error parsing type: A^(?), name: shmemEntry
    struct _opaque_pthread_mutex_t *_lock;
    // Error parsing type: (?="entry"{_CFPrefsShmemEntry="owner"Ai"generation"AI}"value"AQ), name: lastKnownShmemState
    BOOL _isSearchList;
}

- (void)dealloc;
- (struct __CFString *)copyOSLogDescription;
- (id)description;
- (struct __CFString *)container;
- (BOOL)isByHost;
- (struct __CFString *)domainIdentifier;
- (struct __CFString *)userIdentifier;
- (void)setAccessRestricted:(BOOL)arg1;
- (void)setDaemonCacheEnabled:(BOOL)arg1;
- (void)alreadylocked_clearCache;
- (BOOL)isVolatile;
- (BOOL)managed;
- (void)unlock;
- (void)lock;
- (long long)generationCount;
- (long long)alreadylocked_generationCount;
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(char *)arg5;
- (id)createRequestNewContentMessageForDaemon:(int)arg1;
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mergeIntoDictionary:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)copyDictionary;
- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)copyKeyList;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (void)setConfigurationPath:(struct __CFString *)arg1;
- (BOOL)synchronize;
- (BOOL)alreadylocked_requestNewData;
- (void *)copyValueForKey:(struct __CFString *)arg1;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;
- (void)removeAllValues;
- (void)replaceAllValuesWithValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2;
- (void)didChangeValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)willChangeValuesForKeys:(const struct __CFString **)arg1 count:(long long)arg2;
- (void)unlockObservers;
- (void)lockObservers;
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void)setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 removeValuesForKeys:(const struct __CFString **)arg4 count:(long long)arg5;
- (void)alreadylocked_setValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3;
- (void)alreadylocked_updateObservingRemoteChanges;
- (void)removePreferencesObserver:(id)arg1;
- (void)alreadylocked_removePreferencesObserver:(id)arg1;
- (void)addPreferencesObserver:(id)arg1;
- (void)alreadylocked_addPreferencesObserver:(id)arg1;
- (id)initWithContainingPreferences:(id)arg1;

@end

