//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectID, NSMutableDictionary, NSPersistentStoreMap, NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapNode : NSObject
{
    NSPersistentStoreMap *_map;
    NSManagedObjectID *_objectID;
    NSMutableDictionary *_relatedNodes;
    NSString *_entityName;
    unsigned int _version;
}

+ (void)initialize;
- (id)_snapshot_;
- (const id *)knownKeyValuesPointer;
- (void)_setVersionNumber:(unsigned int)arg1;
- (unsigned int)_versionNumber;
- (void)_setMap:(id)arg1;
- (id)_relatedNodes;
- (void)setDestinations:(id)arg1 forRelationship:(id)arg2;
- (id)destinationsForRelationship:(id)arg1;
- (id)configurationName;
- (id)entity;
- (id)key;
- (id)objectID;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObjectID:(id)arg1;

@end

