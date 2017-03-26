//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreData/NSCoding-Protocol.h>
#import <CoreData/NSCopying-Protocol.h>
#import <CoreData/NSFastEnumeration-Protocol.h>

@class NSArray, NSData, NSDictionary, NSManagedObjectModel, NSMutableDictionary, NSString;

@interface NSEntityDescription : NSObject <NSCoding, NSCopying, NSFastEnumeration>
{
    int _cd_rc;
    id _snapshotClass;
    NSString *_versionHashModifier;
    NSData *_versionHash;
    NSManagedObjectModel *_model;
    NSString *_classNameForEntity;
    Class _instanceClass;
    NSString *_name;
    NSEntityDescription *_rootentity;
    NSEntityDescription *_superentity;
    NSMutableDictionary *_subentities;
    NSMutableDictionary *_properties;
    id _propertyMapping;
    struct _NSRange *_propertyRanges;
    struct __entityDescriptionFlags {
        unsigned int _isAbstract:1;
        unsigned int _shouldValidateOnSave:1;
        unsigned int _isImmutable:1;
        unsigned int _isFlattened:1;
        unsigned int _skipValidation:1;
        unsigned int _hasPropertiesIndexedBySpotlight:1;
        unsigned int _hasPropertiesStoredInTruthFile:1;
        unsigned int _rangesAreInDataBlob:1;
        unsigned int _hasAttributesWithExternalDataReferences:1;
        unsigned int _hasNonstandardPrimitiveProperties:2;
        unsigned int _hasUniqueProperties:1;
        unsigned int _validationUniqueProperties:1;
        unsigned int _reservedEntityDescription:19;
    } _entityDescriptionFlags;
    void *_extraIvars;
    NSMutableDictionary *_userInfo;
    id _flattenedSubentities;
    id **_kvcPropertyAccessors;
    long long _modelsReferenceIDForEntity;
}

+ (id)insertNewObjectForEntityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)entityForName:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)initialize;
+ (id)_MOClassName;
@property(copy) NSString *renamingIdentifier;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
@property(retain) NSArray *uniquenessConstraints;
- (id)_checkForNonCascadeNoInverses;
@property(retain) NSArray *compoundIndexes;
@property(copy) NSString *versionHashModifier;
@property(readonly, copy) NSData *versionHash;
- (id)_newVersionHashInStyle:(unsigned long long)arg1;
@property(copy) NSString *name;
@property(getter=isAbstract) BOOL abstract;
@property(copy) NSString *managedObjectClassName;
@property(readonly, copy) NSDictionary *propertiesByName;
@property(retain) NSArray *properties;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)inverseForRelationshipKey:(id)arg1;
- (id)relationshipsWithDestinationEntity:(id)arg1;
- (id)toOneRelationshipKeys;
- (id)toManyRelationshipKeys;
@property(readonly) NSManagedObjectModel *managedObjectModel;
@property(readonly, copy) NSDictionary *subentitiesByName;
@property(retain) NSArray *subentities;
@property(readonly) NSEntityDescription *superentity;
- (BOOL)isKindOfEntity:(id)arg1;
@property(retain, nonatomic) NSDictionary *userInfo;
@property(readonly, copy) NSDictionary *relationshipsByName;
@property(readonly, copy) NSDictionary *attributesByName;
- (id)attributeKeys;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)_propertyWithRenamingIdentifier:(id)arg1;
- (id)knownKeysMappingStrategy;
- (void)_addProperty:(id)arg1;
- (void)_addSubentity:(id)arg1;
- (id)elementID;
- (void)setElementID:(id)arg1;
- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 uniquedMappings:(id)arg6 entities:(id)arg7;
- (BOOL)_hasUniquedAttributeWithName:(id)arg1;
- (id)_extensionsOfParentConstraint:(id)arg1;
- (BOOL)_constraintIsExtension:(id)arg1;
- (id)_uniquenessConstraints;
- (BOOL)_hasUniqueProperties;
- (BOOL)_hasUniquePropertiesUncached;
- (BOOL)_isPathologicalForConstraintMerging:(id *)arg1;
- (BOOL)_hasUniquePropertiesDownInheritanceHiearchy;
- (id)_compoundIndexes;
- (BOOL)_hasPropertiesStoredInTruthFile;
- (BOOL)_hasPropertiesIndexedBySpotlight;
- (BOOL)_hasAttributesWithExternalDataReferences;
- (void)_restoreValidation;
- (BOOL)_skipValidation;
- (void)_stripForMigration;
- (void)_flattenProperties;
- (void)_setIsFlattened:(BOOL)arg1;
- (BOOL)_isFlattened;
- (id)_sortedSubentities;
- (long long)_modelsReferenceID;
- (void)_setModelsReferenceID:(long long)arg1;
- (id)_new_implicitlyObservedKeys;
- (void)_removeProperty:(id)arg1;
- (void)_removePropertyNamed:(id)arg1;
- (id)_propertyNamed:(id)arg1;
- (void *)_leopardStyleAttributesByName;
- (void *)_leopardStyleRelationshipsByName;
- (void *)_newSnowLeopardStyleDictionaryContainingPropertiesOfType:(unsigned long long)arg1;
- (id)_allPropertyNames;
- (void)_createCachesAndOptimizeState;
- (void)_commonCachesAndOptimizedState;
- (unsigned long long)_offsetRelationshipIndex:(unsigned long long)arg1 fromSuperEntity:(id)arg2 andIsToMany:(BOOL)arg3;
- (BOOL)_isInheritedPropertyNamed:(id)arg1;
- (struct _NSRange *)_propertyRangesByType;
- (id)_propertySearchMapping;
- (BOOL)_subentitiesIncludes:(id)arg1;
- (id)_collectSubentities;
- (id)_flattenedSubentities;
- (BOOL)_hasPotentialHashSkew;
- (id)_versionHashInStyle:(unsigned long long)arg1;
- (void)_removeSubentity:(id)arg1;
- (id)_rootEntity;
- (void)_setSuperentity:(id)arg1;
- (id)_subentityNamed:(id)arg1;
- (void)_throwIfNotEditable;
- (BOOL)_isEditable;
- (void)_setIsEditable:(BOOL)arg1;
- (id)_relationshipNamed:(id)arg1;
- (id)_localRelationshipNamed:(id)arg1;
- (id)_attributeNamed:(id)arg1;
- (BOOL)_hasCustomPrimitiveProperties;
- (Class)_entityClass;
- (Class)_snapshotClass;
- (id)_relationshipNamesByType:(BOOL)arg1;
- (id)_propertiesOfType:(unsigned long long)arg1;
- (void)_setManagedObjectModel:(id)arg1;
- (id)_initWithName:(id)arg1;
- (id)_newMappingForPropertiesOfRange:(unsigned int)arg1;
- (id)_keypathsForDeletions;
- (id)_keypathsToPrefetchForDeletePropagation;
- (id)_keypathsToPrefetchForDeletePropagationPrefixedWith:(id)arg1 toDepth:(long long)arg2 processedEntities:(id)arg3;
- (void)_nukeMOClassName__;

@end

