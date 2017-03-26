//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PFUbiquityGlobalObjectIDCache, PFUbiquityKnowledgeVector;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreSaveSnapshot : NSObject
{
    NSMutableArray *_entityNames;
    NSMutableArray *_peerIDs;
    NSMutableArray *_globalObjectIDs;
    NSMutableArray *_primaryKeys;
    NSMutableDictionary *_managedObjectIDToGlobalObjectID;
    NSMutableDictionary *_globalObjectIDToPermanentManagedObjectID;
    NSMutableDictionary *_entityNameToIndex;
    NSMutableDictionary *_peerIDToIndex;
    NSMutableDictionary *_primaryKeyToIndex;
    NSMutableDictionary *_globalObjectIDToIndex;
    NSMutableDictionary *_insertedObjects;
    NSMutableDictionary *_updatedObjects;
    NSMutableDictionary *_deletedObjects;
    NSMutableDictionary *_peerStates;
    NSNumber *_transactionNumber;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSDictionary *_storeOptions;
    NSMutableArray *_filesInsertedInTransaction;
    NSArray *_filesDeletedInTransaction;
    PFUbiquityKnowledgeVector *_storeKV;
    PFUbiquityGlobalObjectIDCache *_gidCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) PFUbiquityGlobalObjectIDCache *globalObjectIDCache; // @synthesize globalObjectIDCache=_gidCache;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *storeKV; // @synthesize storeKV=_storeKV;
@property(retain, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSDictionary *globalObjectIDToPermanentManagedObjectID; // @synthesize globalObjectIDToPermanentManagedObjectID=_globalObjectIDToPermanentManagedObjectID;
@property(readonly, nonatomic) NSDictionary *globalObjectIDToIndex; // @synthesize globalObjectIDToIndex=_globalObjectIDToIndex;
@property(readonly, nonatomic) NSDictionary *primaryKeyToIndex; // @synthesize primaryKeyToIndex=_primaryKeyToIndex;
@property(readonly, nonatomic) NSDictionary *peerIDToIndex; // @synthesize peerIDToIndex=_peerIDToIndex;
@property(readonly, nonatomic) NSDictionary *entityNameToIndex; // @synthesize entityNameToIndex=_entityNameToIndex;
@property(readonly, nonatomic) NSDictionary *managedObjectIDToGlobalObjectID; // @synthesize managedObjectIDToGlobalObjectID=_managedObjectIDToGlobalObjectID;
@property(retain, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;
@property(retain, nonatomic) NSNumber *transactionNumber; // @synthesize transactionNumber=_transactionNumber;
@property(readonly, nonatomic) NSDictionary *peerStates; // @synthesize peerStates=_peerStates;
@property(readonly, nonatomic) NSDictionary *deletedObjects; // @synthesize deletedObjects=_deletedObjects;
@property(readonly, nonatomic) NSDictionary *updatedObjects; // @synthesize updatedObjects=_updatedObjects;
@property(readonly, nonatomic) NSDictionary *insertedObjects; // @synthesize insertedObjects=_insertedObjects;
@property(readonly, nonatomic) NSArray *primaryKeys; // @synthesize primaryKeys=_primaryKeys;
@property(readonly, nonatomic) NSArray *globalObjectIDs; // @synthesize globalObjectIDs=_globalObjectIDs;
@property(readonly, nonatomic) NSArray *peerIDs; // @synthesize peerIDs=_peerIDs;
@property(readonly, nonatomic) NSArray *entityNames; // @synthesize entityNames=_entityNames;
- (id)createUbiquityDictionary:(id)arg1 withStoreExportContext:(id)arg2 error:(id *)arg3;
- (void)finishGlobalIDReplacement;
- (void)replaceGlobalObjectID:(id)arg1 withGlobalObjectID:(id)arg2;
- (void)prepareForGlobalIDReplacement;
- (void)setDeletedObjects:(id)arg1;
- (void)setUpdatedObjects:(id)arg1;
- (void)setInsertedObjects:(id)arg1;
- (void)setEntityNames:(id)arg1 globalObjectIDs:(id)arg2 primaryKeys:(id)arg3 forStoreName:(id)arg4 withRootLocation:(id)arg5;
- (void)setTransactionNumber:(id)arg1 peerStates:(id)arg2 andPeerIDs:(id)arg3;
- (id)transactionNumberFromPeerStates:(id)arg1;
- (id)createKnowledgeVectorFromPeerStates;
- (void)resetFromOptimisticLockingException;
- (void)generatePeerStates;
- (void)reserveTransactionNumberWithStoreExportContext:(id)arg1;
- (id)addManagedObject:(id)arg1 withTransactionType:(int)arg2 andStoreExportContext:(id)arg3 withError:(id *)arg4;
- (id)globalObjectIDFromCompressedObjectID:(id)arg1;
- (id)checkIndecies:(id)arg1;
- (id)compressedGlobalObjectIDFromGlobalObjectID:(id)arg1;
- (id)globalObjectIDForManagedObject:(id)arg1 withStoreExportContext:(id)arg2;
- (id)noSyncCheckIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (id)checkIndex:(id)arg1 forValue:(id)arg2 fromArrayOfValues:(id)arg3;
- (void)_setFilesDeletedInTransaction:(id)arg1;
- (id)filesDeletedInTransaction;
- (id)filesInsertedInTransaction;
- (id)description;
- (void)dealloc;
- (id)initForExport:(id)arg1;
- (id)initWithExportingPeerID:(id)arg1;
- (id)init;

@end

