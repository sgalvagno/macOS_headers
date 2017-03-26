//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableIndexSet;

@interface PXTileStatePool : NSObject
{
    struct PXTileState *_states;
    struct unordered_map<PXTileIdentifier, unsigned long, std::__1::hash<PXTileIdentifier>, std::__1::equal_to<PXTileIdentifier>, std::__1::allocator<std::__1::pair<const PXTileIdentifier, unsigned long>>> _indexByTargetIdentifier;
    NSMapTable *_tileIndexesByPageKey;
    long long _statesMaxCount;
    NSMutableIndexSet *_usedIndexes;
    NSMutableIndexSet *_unusedIndexes;
    NSMutableIndexSet *_pageKeysToRemove;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)_storeCurrentFrameLookupForTileState:(struct PXTileState *)arg1 withIndex:(unsigned long long)arg2;
- (void)_storeTargetIdentifierLookupForTileState:(struct PXTileState *)arg1 withIndex:(unsigned long long)arg2;
- (void)setCurrentGeometry:(const struct PXTileGeometry *)arg1 forTileStateAtIndex:(unsigned long long)arg2;
- (void)setTargetIdentifier:(struct PXTileIdentifier)arg1 forTileStateAtIndex:(unsigned long long)arg2;
- (unsigned long long)indexOfStateWithTargetIdentifier:(struct PXTileIdentifier)arg1;
- (id)indexesOfStatesPassingTest:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfFirstStatePassingTest:(CDUnknownBlockType)arg1;
- (void)enumerateStatesInRect:(struct CGRect)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStatesAtIndexes:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateStatesUsingBlock:(CDUnknownBlockType)arg1;
- (struct PXTileState *)_mutableStateAtIndex:(unsigned long long)arg1;
- (struct PXProtectedTileState *)stateAtIndex:(unsigned long long)arg1;
- (void)_cleanupStateAtIndex:(unsigned long long)arg1;
- (void)checkInIndexes:(id)arg1;
- (void)checkInIndex:(unsigned long long)arg1;
- (unsigned long long)checkOutIndexWithInitialConfiguration:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) long long count;
- (void)dealloc;
- (id)init;

@end

