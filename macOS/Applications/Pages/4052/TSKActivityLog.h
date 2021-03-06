//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSMutableArray, TSKActivityLogGroup, TSKActivityLogUpdateState;
@protocol TSKActivityLogDelegate;

@interface TSKActivityLog : NSObject <NSCopying>
{
    BOOL _ascending;
    BOOL _reloadAll;
    BOOL _didRebalanceGroups;
    unsigned long long _activePageIndex;
    unsigned long long _sortCriteria;
    long long _mode;
    id <TSKActivityLogDelegate> _delegate;
    NSMutableArray *_mutableGroups;
    TSKActivityLogUpdateState *_updates;
    TSKActivityLogGroup *_defaultGroup;
}

@property(nonatomic) BOOL didRebalanceGroups; // @synthesize didRebalanceGroups=_didRebalanceGroups;
@property(nonatomic) TSKActivityLogGroup *defaultGroup; // @synthesize defaultGroup=_defaultGroup;
@property(nonatomic) BOOL reloadAll; // @synthesize reloadAll=_reloadAll;
@property(retain, nonatomic) TSKActivityLogUpdateState *updates; // @synthesize updates=_updates;
@property(retain, nonatomic) NSMutableArray *mutableGroups; // @synthesize mutableGroups=_mutableGroups;
@property(nonatomic) id <TSKActivityLogDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL ascending; // @synthesize ascending=_ascending;
@property(nonatomic) unsigned long long sortCriteria; // @synthesize sortCriteria=_sortCriteria;
@property(nonatomic) unsigned long long activePageIndex; // @synthesize activePageIndex=_activePageIndex;
- (unsigned long long)p_indexOfGroupWithUUID:(id)arg1 inArray:(id)arg2;
- (unsigned long long)p_insertIndexForObject:(id)arg1 inSortedArray:(id)arg2;
- (CDUnknownBlockType)newSortComparator;
- (id)p_dateComponents:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1 ofObject:(id)arg2;
- (long long)numberOfChildrenOfObject:(id)arg1;
- (id)topLevelObjects;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateAvailableEntriesWithBlock:(CDUnknownBlockType)arg1;
- (void)ensureCorrectSortingAndGrouping;
- (unsigned long long)insertIndexForEntry:(id)arg1 inGroup:(id)arg2;
- (id)sortEntries:(id)arg1 withCriteria:(unsigned long long)arg2 ascending:(BOOL)arg3;
- (id)groupForEntry:(id)arg1 createIfNeeded:(BOOL)arg2;
- (void)groupUpSortedEntries:(id)arg1;
- (id)updateState;
- (void)p_checkPageIndex;
- (id)originalOfEntry:(id)arg1;
- (id)entryAtIndexPath:(id)arg1;
- (id)indexPathOfEntry:(id)arg1;
- (void)processNewGroups;
- (void)cleanEmptyGroups;
- (id)groupContainingEntry:(id)arg1;
- (void)removeGroupAtIndex:(unsigned long long)arg1;
- (void)removeGroup:(id)arg1;
- (void)insertGroup:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addGroup:(id)arg1;
- (void)entryUpdatedAtIndexPath:(id)arg1;
- (void)removeEntry:(id)arg1 inGroup:(id)arg2;
- (void)removeEntry:(id)arg1;
- (void)insertEntry:(id)arg1 atIndexPath:(id)arg2;
- (void)insertEntry:(id)arg1 inGroup:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)addEntry:(id)arg1 inGroup:(id)arg2;
- (void)addEntry:(id)arg1;
- (void)setEntries:(id)arg1;
- (id)entries;
@property(readonly, nonatomic) NSArray *allEntries;
@property(readonly, nonatomic) NSArray *groups;
- (void)dealloc;
- (void)p_resetGroups;
- (id)initWithSortCriteria:(unsigned long long)arg1 ascending:(BOOL)arg2 mode:(long long)arg3 delegate:(id)arg4;

@end

