//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSSQLCore, NSSQLModel;

__attribute__((visibility("hidden")))
@interface NSSQLiteAdapter : NSObject
{
    NSSQLCore *_sqlCore;
    NSSQLModel *_model;
    struct __CFDictionary *_cachedDeleteTriggersByEntity;
    int _lock;
}

+ (id)generateStatementForCheckingMulticolumnConstraint:(id)arg1 onObjects:(id)arg2 usingModel:(id)arg3;
+ (id)generateSubselectForColumn:(id)arg1 givenObjects:(id)arg2;
+ (id)generateStatementForCheckingUniqueAttributesOnObjects:(id)arg1 usingModel:(id)arg2;
- (id)createSQLStatementsForRTreeTriggersForLocationAttribute:(id)arg1 withSQLEntity:(id)arg2 andDerivedLatitude:(id)arg3 andDerivedLongitude:(id)arg4 existingRtreeTables:(id)arg5;
- (id)rtreeTableNameForEntity:(id)arg1 attribute:(id)arg2;
- (id)createSQLStatementsForTriggerAttribute:(id)arg1 withSQLEntity:(id)arg2;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inManyToMany:(id)arg2;
- (id)generateSQLStatmentForSourcesAndOrderKeysForDestination:(id)arg1 inToMany:(id)arg2;
- (id)generateDeleteStatementsForRequest:(id)arg1 error:(id *)arg2;
- (void)_cacheTriggers:(id)arg1 forEntity:(id)arg2;
- (id)_cachedTriggersForEntity:(id)arg1;
- (BOOL)generateTriggerForEntity:(id)arg1 alreadyCreated:(struct __CFDictionary *)arg2 correlations:(struct __CFDictionary *)arg3 fragments:(id)arg4 error:(id *)arg5;
- (id)generateTriggerStatementsForEntity:(id)arg1 usingRelationshipCleanupSQL:(id)arg2 error:(id *)arg3;
- (id)createCleanupSQLForRelationship:(id)arg1 existing:(struct __CFDictionary *)arg2 correlationTableTriggers:(struct __CFDictionary *)arg3 error:(id *)arg4;
- (id)newCreateTriggersForEntity:(id)arg1 existingRtreeTables:(id)arg2;
- (id)newCreateIndexStatementsForEntity:(id)arg1;
- (id)newCreateIndexStatementForColumns:(id)arg1;
- (id)newCreateIndexStatementForColumn:(id)arg1;
- (id)newCreateIndexStatementForCorrelationTable:(id)arg1;
- (id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)newCreateTableStatementForManyToMany:(id)arg1;
- (id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2;
- (id)newDropTableStatementForTableNamed:(id)arg1;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4;
- (id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3;
- (id)newComplexPrimaryKeyUpdateStatementForEntity:(id)arg1;
- (void)_generateFragmentsForEntity:(id)arg1 inArray:(id)arg2;
- (id)newSimplePrimaryKeyUpdateStatementForEntity:(id)arg1;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2;
- (id)newCreatePrimaryKeyTableStatement;
- (id)newCreateTableStatementForEntity:(id)arg1;
- (BOOL)generateCorrelationTableTriggerStatementsForRelationship:(id)arg1 existing:(struct __CFDictionary *)arg2 correlationTableTriggers:(struct __CFDictionary *)arg3 error:(id *)arg4;
- (id)newCorrelationReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementPart2ForRelationship:(id)arg1;
- (id)newCorrelationMasterReorderStatementForRelationship:(id)arg1;
- (id)newCorrelationDeleteStatementForRelationship:(id)arg1;
- (id)newCorrelationInsertStatementForRelationship:(id)arg1;
- (id)newCountStatementWithFetchRequestContext:(id)arg1;
- (id)newSelectStatementWithFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (id)newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (id)_statementForFetchRequestContext:(id)arg1 ignoreInheritance:(BOOL)arg2 countOnly:(BOOL)arg3 nestingLevel:(unsigned int)arg4;
- (id)newDeleteStatementWithRow:(id)arg1;
- (id)newConstrainedValuesUpdateStatementWithRow:(id)arg1;
- (id)newUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2 withMask:(struct __CFBitVector *)arg3;
- (id)newInsertStatementWithRow:(id)arg1;
- (id)newGeneratorWithStatement:(id)arg1;
- (id)newStatementWithEntity:(id)arg1;
- (id)newStatementWithSQLString:(id)arg1;
- (id)newStatementWithoutEntity;
- (id)sqliteVersion;
- (id)typeStringForColumn:(id)arg1;
- (id)typeStringForSQLType:(unsigned char)arg1;
- (id)sqlCore;
- (void)dealloc;
- (void)_useModel:(id)arg1;
- (id)initWithSQLCore:(id)arg1;
- (unsigned char)sqlTypeForExpressionConstantValue:(id)arg1;

@end

