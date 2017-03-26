//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface ABCopyOnWriteSet : NSObject
{
    NSSet *_set;
}

- (void)useReadOnlySet:(CDUnknownBlockType)arg1;
- (id)retainedSetForReading;
- (void)updateWithWritableSet:(CDUnknownBlockType)arg1;
- (id)setByIntersectingSet:(id)arg1;
- (id)filteredSet:(CDUnknownBlockType)arg1;
- (void)each:(CDUnknownBlockType)arg1;
- (id)allObjectsAsSet;
- (id)allObjects;
- (BOOL)containsObject:(id)arg1;
- (id)member:(id)arg1;
- (unsigned long long)count;
- (void)minusSet:(id)arg1;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)init;

@end

