//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRVectorTimestamp, NSMutableDictionary, NSUUID;

@interface CRDocument : NSObject
{
    CRVectorTimestamp *_version;
    CRVectorTimestamp *_startVersion;
    NSUUID *_replica;
    id _rootObject;
    NSMutableDictionary *_objects;
    long long _replicaClock;
    long long _unserializedReplicaClock;
}

+ (id)unarchiveFromData:(id)arg1 replica:(id)arg2;
+ (id)documentWithRootObject:(id)arg1 replica:(id)arg2;
+ (id)documentWithReplica:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long unserializedReplicaClock; // @synthesize unserializedReplicaClock=_unserializedReplicaClock;
@property(readonly, nonatomic) long long replicaClock; // @synthesize replicaClock=_replicaClock;
@property(readonly, nonatomic) NSMutableDictionary *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) id rootObject; // @synthesize rootObject=_rootObject;
@property(readonly, nonatomic) NSUUID *replica; // @synthesize replica=_replica;
@property(readonly, nonatomic) CRVectorTimestamp *startVersion; // @synthesize startVersion=_startVersion;
@property(readonly, nonatomic) CRVectorTimestamp *version; // @synthesize version=_version;
- (id)description;
- (id)deltaSince:(id)arg1;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (void)setDocumentFor:(id)arg1;
- (void)updateObjectsSet;
- (void)updateGraphDocumentPointers;
- (void)realizeLocalChanges;
- (void)walkGraph:(CDUnknownBlockType)arg1 root:(id)arg2;
- (unsigned long long)mergeWithData:(id)arg1;
- (void)mergeTimestampWithDocument:(id)arg1;
- (unsigned long long)mergeResultForMergingWithDocument:(id)arg1;
- (id)localObject:(id)arg1;
- (void)updateObjects:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)archivedData;
- (id)copyForReplica:(id)arg1;
- (id)initWithVersion:(id)arg1 startVersion:(id)arg2 rootObject:(id)arg3 replica:(id)arg4;
- (id)initWithVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3;
- (id)initWithReplica:(id)arg1;
- (id)init;

@end

