//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@class NSSharedKeySet;

@interface NSSharedKeyDictionary : NSMutableDictionary
{
    NSSharedKeySet *_keyMap;
    unsigned long long _count;
    id *_values;
    CDUnknownFunctionPointerType _ifkIMP;
    NSMutableDictionary *_sideDic;
    unsigned long long _mutations;
}

+ (BOOL)supportsSecureCoding;
+ (id)sharedKeyDictionaryWithKeySet:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithKeySet:(id)arg1;
- (id)keySet;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end

