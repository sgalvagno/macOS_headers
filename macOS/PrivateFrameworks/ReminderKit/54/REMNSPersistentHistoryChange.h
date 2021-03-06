//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ReminderKit/REMChangeObject.h>

@class NSArray, NSPersistentHistoryChange, REMChangeTransaction, _REMNSPersistentHistoryChangeStorage;

@interface REMNSPersistentHistoryChange : REMChangeObject
{
    BOOL _isCoalesced;
    REMChangeTransaction *_internal_ChangeTransaction;
    NSArray *_coalescedChanges;
    _REMNSPersistentHistoryChangeStorage *_storage;
    NSPersistentHistoryChange *_persistentHistoryChange;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringForChangeType:(long long)arg1;
+ (id)shortStringForChangeType:(long long)arg1;
@property(readonly) __weak NSPersistentHistoryChange *persistentHistoryChange; // @synthesize persistentHistoryChange=_persistentHistoryChange;
@property(retain) _REMNSPersistentHistoryChangeStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSArray *coalescedChanges; // @synthesize coalescedChanges=_coalescedChanges;
@property(nonatomic) BOOL isCoalesced; // @synthesize isCoalesced=_isCoalesced;
@property(nonatomic) __weak REMChangeTransaction *internal_ChangeTransaction; // @synthesize internal_ChangeTransaction=_internal_ChangeTransaction;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyForCoalescing;
- (id)updatedProperties;
- (id)tombstone;
- (long long)changeType;
- (id)changedObjectID;
- (long long)changeID;
- (id)transaction;
- (id)description;
- (void)resolveWithObjectID:(id)arg1;
- (id)changedManagedObjectID;
- (id)initWithPersistentHistoryChange:(id)arg1;
- (id)initWithStorage:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

