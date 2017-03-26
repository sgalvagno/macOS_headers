//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSPersistentCacheRow : NSObject
{
    int _cd_rc;
    int _externalReferenceCount;
    struct _externalRefFlags_st {
        unsigned int _invalidToOnes:1;
        unsigned int _hasTemporaryID:1;
        unsigned int _backgroundDealloc:1;
        unsigned int _reservedFlags:1;
        unsigned int _virtualfk_count:14;
        unsigned int _ordkey_count:14;
    } _externalRefFlags;
    id *_toManyMap;
    double _birth;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (const id *)knownKeyValuesPointer;
- (void)setAncillaryOrderKeys:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (id)ancillaryOrderKeysForProperty:(id)arg1;
- (void)setRelatedObjectIDs:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 andTimestamp:(double)arg4;
- (double)timestampForProperty:(id)arg1;
- (unsigned long long)toManyOffsetForProperty:(id)arg1;
- (id)relatedObjectIDsForProperty:(id)arg1;
- (void)updateMissingRelationshipCachesFromOriginal:(id)arg1;
- (void)releaseRelationshipCaches;
- (void)copyRelationshipCachesFrom:(id)arg1;
- (void)_initializeRelationshipCaches;
- (void)incrementExternalReferenceCount:(int)arg1;
- (int)externalReferenceCount;
- (int)decrementRefCount;
- (void)incrementRefCount;
- (unsigned long long)version;
- (id)objectID;
- (unsigned int)options;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)dealloc;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (id)initWithOptions:(unsigned int)arg1 andTimestamp:(double)arg2;

@end

