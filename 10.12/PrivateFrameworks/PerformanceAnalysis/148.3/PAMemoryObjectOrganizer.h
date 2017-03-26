//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PerformanceAnalysis/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface PAMemoryObjectOrganizer : NSObject <NSCoding>
{
    NSMutableArray *_processes;
    NSMutableArray *_processSharedMemoryGroups;
    NSMutableArray *_processPrivateMemoryGroups;
    NSMutableDictionary *_sharedMemoryObjects;
    NSMutableDictionary *_privateMemoryObjects;
    BOOL _needsToBuildGroups;
}

@property(readonly) NSDictionary *privateMemoryObjects; // @synthesize privateMemoryObjects=_privateMemoryObjects;
@property(readonly) NSDictionary *sharedMemoryObjects; // @synthesize sharedMemoryObjects=_sharedMemoryObjects;
@property(readonly) NSArray *processes; // @synthesize processes=_processes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_uniqueTupleForProcess:(id)arg1 inMemoryGroups:(id)arg2;
- (id)sharedMemoryGroupForSingleProcess:(id)arg1;
- (id)privateMemoryGroupForSingleProcess:(id)arg1;
- (id)_tuplesForProcess:(id)arg1 andMemoryGroups:(id)arg2;
- (id)allSharedMemoryGroupsContainingProcess:(id)arg1;
- (id)allPrivateMemoryGroupsContainingProcess:(id)arg1;
- (void)_updateGroups:(id)arg1 withMemoryObjects:(id)arg2;
- (void)_updateGroups;
- (void)collapseSharedGroups;
- (id)_updateProcessMemoryGroups:(id)arg1 withGroupForProcesses:(id)arg2;
- (void)_debugPrint;
- (void)addProcess:(id)arg1;
- (void)_addRegion:(id)arg1 toMemoryObjects:(id)arg2 withResidency:(id)arg3;
@property(readonly) NSArray *processPrivateMemoryGroups; // @synthesize processPrivateMemoryGroups=_processPrivateMemoryGroups;
@property(readonly) NSArray *processSharedMemoryGroups; // @synthesize processSharedMemoryGroups=_processSharedMemoryGroups;
- (void)dealloc;
- (id)initWithProcesses:(id)arg1;
- (id)init;

@end

