//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface NSXMLChildren : NSMutableArray
{
    NSMutableArray *_array;
    BOOL _isStale;
}

- (void)makeStale;
- (id)reallyRemoveAllObjects;
- (id)reallyRemoveObject:(id)arg1;
- (id)reallyReplaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)reallyRemoveObjectAtIndex:(unsigned long long)arg1;
- (id)reallyInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)reallyAddObject:(id)arg1;
- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;
- (void)removeObjectsAtIndexes:(id)arg1;
- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)setArray:(id)arg1;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjectsFromArray:(id)arg2 range:(struct _NSRange)arg3;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)removeObjectsInArray:(id)arg1;
- (void)removeObjectsFromIndices:(unsigned long long *)arg1 numIndices:(unsigned long long)arg2;
- (void)removeObjectIdenticalTo:(id)arg1;
- (void)removeObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeObject:(id)arg1;
- (void)removeObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (void)removeAllObjects;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)addObjectsFromArray:(id)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeLastObject;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addObject:(id)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithMutableArray:(id)arg1;
- (id)init;
- (void)dealloc;

@end

