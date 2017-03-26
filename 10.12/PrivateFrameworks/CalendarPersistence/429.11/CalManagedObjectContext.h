//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreData/NSManagedObjectContext.h>

@class NSCountedSet, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CalManagedObjectContext : NSManagedObjectContext
{
    BOOL _trackChangesForCalDAVServer;
    BOOL _writeChangesToCalDAVServer;
    BOOL _writeChangesToTruthFileStore;
    BOOL _containsCalendarData;
    BOOL _notifyCalendarAgent;
    NSMutableSet *_deletedObjectIDsFromMerge;
    NSMutableDictionary *_threadSafeData;
    NSMutableDictionary *_childContexts;
    NSCountedSet *_childContextReferences;
    NSMutableDictionary *_associatedUIDs;
    NSString *_originatorID;
    BOOL _trackChangesToExchangeServer;
}

+ (void)logDetailedValidationError:(id)arg1;
+ (id)_userInfoForLog:(id)arg1;
+ (void)quickFetchWithBlock:(CDUnknownBlockType)arg1 allowedStaleness:(double)arg2;
+ (void)quickFetchWithBlock:(CDUnknownBlockType)arg1;
+ (void)addPrefetchRelationshipKeyPaths:(id)arg1 toFetch:(id)arg2;
+ (void)instantiateSharedMonitors;
+ (void)setIsCalendarAgent:(BOOL)arg1;
+ (BOOL)isCalendarAgent;
+ (id)managedObjectContextWithOriginatorId:(id)arg1;
+ (id)managedObjectContext;
@property(nonatomic) BOOL notifyCalendarAgent; // @synthesize notifyCalendarAgent=_notifyCalendarAgent;
@property(nonatomic) BOOL trackChangesToExchangeServer; // @synthesize trackChangesToExchangeServer=_trackChangesToExchangeServer;
@property(nonatomic) BOOL trackChangesForCalDAVServer; // @synthesize trackChangesForCalDAVServer=_trackChangesForCalDAVServer;
@property(nonatomic) BOOL writeChangesToTruthFileStore; // @synthesize writeChangesToTruthFileStore=_writeChangesToTruthFileStore;
@property(nonatomic) BOOL writeChangesToCalDAVServer; // @synthesize writeChangesToCalDAVServer=_writeChangesToCalDAVServer;
@property(nonatomic) BOOL containsCalendarData; // @synthesize containsCalendarData=_containsCalendarData;
@property(retain, nonatomic) NSString *originatorId; // @synthesize originatorId=_originatorID;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (void)logDetailedValidationError:(id)arg1;
- (BOOL)saveIfContextHasChanges;
- (BOOL)hasPersistentChanges;
- (void)dealloc;
@property(readonly) NSSet *deletedObjectIDsFromMerge;
- (void)addDeletedObjectIDsFromMerge:(id)arg1;
- (void)deleteObject:(id)arg1;
- (BOOL)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (unsigned long long)countForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)save:(id *)arg1;
- (void)parentContextDidSave:(id)arg1;
- (void)mergeChangesFromContextDidSaveNotification:(id)arg1;
@property(readonly) BOOL isContextForMigration;
@property(readonly) BOOL isContextForCalendarStore;
- (void)clearThreadSafeDataForKey:(id)arg1;
- (id)getThreadSafeDataForKey:(id)arg1;
- (void)setThreadSafeData:(id)arg1 forKey:(id)arg2;
- (unsigned long long)clientCount;
- (unsigned long long)_clientCountForChildContext:(id)arg1;
- (id)flattenedTreeOfChildContexts;
- (id)childContextIdentifiers;
- (id)associatedAndSecondaryIdentifiers;
- (id)associatedIdentifiers;
- (id)childContexts;
- (void)detachFromParentContext;
- (void)_detachChildContext:(id)arg1;
- (id)attachChildContextForIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
- (id)_attachChildContext;
- (void)associateWithIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
- (void)_associateChildContext:(id)arg1 withIdentifier:(id)arg2 secondaryIdentifier:(id)arg3;
- (void)_associateWithIdentifier:(id)arg1 secondaryIdentifier:(id)arg2;
- (id)childContextForIdentifier:(id)arg1;
- (id)parentContext;
- (void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2;
- (id)refetchObjectsFromStoreWithObjectIDStrings:(id)arg1 entityName:(id)arg2;
- (id)refetchObjectsFromStoreWithObjectIDs:(id)arg1 entityName:(id)arg2;
- (id)existingObjectsWithIDStrings:(id)arg1;
- (id)existingObjectWithIDString:(id)arg1;
- (id)objectIDsFromStrings:(id)arg1;
- (id)objectIDFromString:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1 persistentStoreCoordinator:(id)arg2;
- (id)initWithPersistentStoreCoordinator:(id)arg1;
- (id)initWithConcurrencyType:(unsigned long long)arg1;
- (BOOL)isUserContext;

@end

