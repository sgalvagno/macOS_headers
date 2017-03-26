//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSFetchRequestResult-Protocol.h>

@class NSEntityDescription, NSPersistentStore, NSString;

@interface NSManagedObjectID : NSObject <NSFetchRequestResult, NSCopying>
{
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (long long)version;
+ (void)initialize;
+ (id)unarchivedScalarObjectIDsFromData:(id)arg1 withCoordinator:(id)arg2;
+ (id)_newArchiveForScalarObjectIDs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)URIRepresentation;
@property(readonly, copy) NSString *description;
@property(readonly, getter=isTemporaryID) BOOL temporaryID;
@property(readonly) __weak NSPersistentStore *persistentStore;
@property(readonly) NSEntityDescription *entity;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (id)_retainedURIString;
- (BOOL)_isPersistentStoreAlive;
- (id)_storeInfo1;
- (id)entityName;
- (id)_storeIdentifier;
- (long long)_referenceData64;
- (id)_referenceData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

