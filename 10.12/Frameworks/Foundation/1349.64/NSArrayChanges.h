//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

#import <Foundation/NSCopying-Protocol.h>

@interface NSArrayChanges : NSMutableArray <NSCopying>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)addChange:(id)arg1;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly) unsigned long long changeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_toManyPropertyType;
- (BOOL)_isToManyChangeInformation;
- (void)applyChangesToArray:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)updateObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChanges:(id)arg1;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)moveObjectsAtIndexes:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)sortUsingSelector:(SEL)arg1;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;
- (void)removeLastObject;
- (void)addObject:(id)arg1;

@end

