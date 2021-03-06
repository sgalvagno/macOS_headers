//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PMObjectCacheEntry : NSObject
{
    NSString *_cacheKey;
    unsigned int _hashValue;
    id _item;
    unsigned long long _size;
    unsigned long long _lastAccess;
    float _freq;
    float _value;
    double _cost;
}

- (BOOL)canBePurgedFromCache;
- (void)resetValue:(unsigned long long)arg1 responseRate:(float)arg2 penalty:(float)arg3;
- (void)setValue:(unsigned long long)arg1 cost:(double)arg2 maxCacheSize:(unsigned long long)arg3;
- (float)getValue:(unsigned long long)arg1 decayRate:(float)arg2;
- (double)cost;
- (unsigned long long)getSize;
- (void)setLastAccess:(unsigned long long)arg1;
- (unsigned long long)lastAccess;
- (id)getItem;
- (unsigned int)hashValue;
- (void)setCacheKey:(id)arg1;
- (id)cacheKey;
- (void)dealloc;
- (id)initWithKey:(id)arg1 cacheItem:(id)arg2 size:(unsigned long long)arg3 cost:(double)arg4 forCache:(id)arg5;

@end

