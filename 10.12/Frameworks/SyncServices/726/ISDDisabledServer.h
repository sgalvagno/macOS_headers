//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SyncServices/ISDServer.h>

@interface ISDDisabledServer : ISDServer
{
}

+ (id)defaultServer;
- (void)autoregisterDefaultClients;
- (void)autoregisterSystemSchemas;
- (void)setSyncManager:(id)arg1;
- (void)setDataManager:(id)arg1;
- (id)dataManager;
- (bycopy id)addClients:(bycopy id)arg1 toSyncPlanWithIdentifier:(bycopy id)arg2;
- (bycopy id)setOneShotSyncGroupWithClientIdentifiers:(bycopy id)arg1 entityNames:(bycopy id)arg2;
- (void)killConnection:(byref id)arg1;
- (oneway void)cancelSyncSessionForPlanWithIdentifier:(bycopy id)arg1;
- (bycopy id)syncPlanWithIdentifier:(bycopy id)arg1;
- (bycopy id)allSyncPlans;
- (bycopy id)syncServerStatistics;
- (bycopy id)clientWithId:(bycopy id)arg1 didEndSyncPlan:(bycopy id)arg2 finishedSyncing:(bycopy id)arg3;
- (void)clientWithId:(bycopy id)arg1 didEndPushingChangesInSyncPlan:(bycopy id)arg2;
- (void)clientWithId:(bycopy id)arg1 didBeginPushingChangesInSyncPlan:(bycopy id)arg2 negotiatedSyncStates:(bycopy id)arg3;
- (bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanRightNow:(bycopy id)arg2;
- (bycopy id)clientWithId:(bycopy id)arg1 wantsToBeginSyncPlanBeforeDate:(bycopy id)arg2 entityNames:(bycopy id)arg3 pushTruthForEntityNames:(bycopy id)arg4 quietlyPushingTruth:(bycopy id)arg5 callback:(byref id)arg6 withPlanIdentifier:(id)arg7 hasChanges:(bycopy id)arg8 skip:(bycopy id)arg9;
- (void)_reallyResetSyncData;
- (void)_resetSyncData;
- (void)setFilterData:(bycopy id)arg1 filteredEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (bycopy id)filterDataForClientWithIdentifier:(bycopy id)arg1;
- (void)setShouldSynchronize:(bycopy id)arg1 withClientsOfType:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (bycopy id)setSyncMode:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setShouldReplaceClientRecords:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setEnabled:(bycopy id)arg1 forEntityNames:(bycopy id)arg2 forClientWithIdentifier:(bycopy id)arg3;
- (void)setHasDynamicSyncAlertHandler:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setSyncAlertToolPath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4;
- (void)setImagePath:(bycopy id)arg1 bundleId:(bycopy id)arg2 bundleRelativePath:(bycopy id)arg3 forClientWithIdentifier:(bycopy id)arg4;
- (void)setUseLocalIdsForGUIDs:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)setDisplayName:(bycopy id)arg1 forClientWithIdentifier:(bycopy id)arg2;
- (void)unregisterClientWithIdentifier:(bycopy id)arg1;
- (bycopy id)registerClientWithIdentifier:(bycopy id)arg1 description:(bycopy id)arg2 descriptionFilePath:(bycopy id)arg3;
- (bycopy id)clientsWithIdentifiers:(bycopy id)arg1 modifiedSinceAnchor:(inout unsigned int *)arg2;
- (bycopy id)allClients;
- (bycopy id)schemaNameForDataclass:(bycopy id)arg1;
- (void)unregisterSchemaWithName:(bycopy id)arg1;
- (void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2 bundlePath:(bycopy id)arg3;
- (void)registerSchemaWithDescription:(bycopy id)arg1 descriptionFilePath:(bycopy id)arg2;
- (bycopy id)schemaDataModifiedSinceAnchor:(inout unsigned int *)arg1 dataClassesNamed:(id)arg2 entitiesNamed:(id)arg3;
- (void)resetEntityNamesAndSetAllClientsToRefresh:(bycopy id)arg1;
- (oneway void)detectedDataDirectoryCorruption;
- (oneway void)sayGoodnightGracie;
- (oneway void)removeLockFile;
- (bycopy id)isSyncServerAvailable:(inout id *)arg1;

@end

