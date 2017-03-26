//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@interface NSArray (TSUAdditions)
+ (id)tsu_arrayWithUIntegers:(unsigned long long *)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithInts:(int *)arg1 count:(unsigned long long)arg2;
+ (id)tsu_arrayWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;
- (id)tsu_anyObject;
- (id)tsu_onlyObject;
- (id)tsu_uniqueObjects;
- (id)tsu_arrayByFlattening;
- (id)tsu_arrayByMappingObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByTransformingWithBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayOfObjectsPassingTest:(CDUnknownBlockType)arg1;
- (id)tsu_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (void)tsu_enumerateSnapshotObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)tsu_arrayByReversingOrder;
- (id)tsu_arrayByAddingNonContainedObjectsFromArray:(id)arg1;
- (id)tsu_arrayByRemovingObjectsIdenticalToObjectsInArray:(id)arg1;
- (id)tsu_intersectionWithArray:(id)arg1;
- (id)tsu_arrayWithObjectsInSet:(id)arg1;
- (id)tsu_indexesOfObjects:(id)arg1;
- (unsigned long long)tsu_indexOfSmallestObject;
- (id)tsu_objectPriorToObject:(id)arg1;
- (id)tsu_rangeCheckedObjectAtIndex:(unsigned long long)arg1;
- (id)tsu_initWithUIntegers:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithInts:(int *)arg1 count:(unsigned long long)arg2;
- (id)tsu_initWithCGFloats:(double *)arg1 count:(unsigned long long)arg2;
@end

