//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/FMFXPCInternalClientProtocol-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSXPCConnection;
@protocol FMFSessionDelegate;

@interface FMFSession : NSObject <FMFXPCInternalClientProtocol>
{
    BOOL _isModelInitialized;
    id <FMFSessionDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
    NSMutableSet *_internalHandles;
    NSXPCConnection *_connection;
    NSSet *_cachedGetHandlesSharingLocationsWithMe;
    NSSet *_cachedGetHandlesFollowingMyLocation;
    NSMutableDictionary *_cachedLocationForHandleByHandle;
    NSMutableDictionary *_cachedOfferExpirationForHandleByHandle;
    NSMutableDictionary *_cachedCanShareLocationWithHandleByHandle;
}

+ (BOOL)isProvisionedForLocationSharing;
+ (BOOL)FMFRestricted;
+ (id)sharedInstance;
@property BOOL isModelInitialized; // @synthesize isModelInitialized=_isModelInitialized;
@property(retain, nonatomic) NSMutableDictionary *cachedCanShareLocationWithHandleByHandle; // @synthesize cachedCanShareLocationWithHandleByHandle=_cachedCanShareLocationWithHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedOfferExpirationForHandleByHandle; // @synthesize cachedOfferExpirationForHandleByHandle=_cachedOfferExpirationForHandleByHandle;
@property(retain, nonatomic) NSMutableDictionary *cachedLocationForHandleByHandle; // @synthesize cachedLocationForHandleByHandle=_cachedLocationForHandleByHandle;
@property(retain, nonatomic) NSSet *cachedGetHandlesFollowingMyLocation; // @synthesize cachedGetHandlesFollowingMyLocation=_cachedGetHandlesFollowingMyLocation;
@property(retain, nonatomic) NSSet *cachedGetHandlesSharingLocationsWithMe; // @synthesize cachedGetHandlesSharingLocationsWithMe=_cachedGetHandlesSharingLocationsWithMe;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(retain) NSMutableSet *internalHandles; // @synthesize internalHandles=_internalHandles;
@property(retain) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <FMFSessionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleIncomingAirDropURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)mappingPacketSendFailed:(id)arg1 toHandle:(id)arg2 withError:(id)arg3;
- (void)receivedMappingPacket:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeHandles:(id)arg1;
- (void)addHandles:(id)arg1;
@property(copy) NSSet *handles;
- (oneway void)modelDidLoad;
- (oneway void)networkReachabilityUpdated:(BOOL)arg1;
- (oneway void)didUpdateLocations:(id)arg1;
- (oneway void)didUpdateFollowing:(id)arg1;
- (oneway void)didUpdateFollowers:(id)arg1;
- (oneway void)abPreferencesDidChange;
- (oneway void)abDidChange;
- (oneway void)didReceiveServerError:(id)arg1;
- (oneway void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
- (oneway void)didUpdatePendingOffersForHandles:(id)arg1;
- (void)didReceiveFriendshipRequest:(id)arg1;
- (oneway void)didUpdateActiveDeviceList:(id)arg1;
- (oneway void)didChangeActiveLocationSharingDevice:(id)arg1;
- (oneway void)didUpdateHideFromFollowersStatus:(BOOL)arg1;
- (oneway void)didUpdateFavorites:(id)arg1;
- (oneway void)didStopFollowingHandle:(id)arg1;
- (oneway void)didStartFollowingHandle:(id)arg1;
- (oneway void)didRemoveFollowerHandle:(id)arg1;
- (oneway void)didAddFollowerHandle:(id)arg1;
- (oneway void)failedToGetLocationForHandle:(id)arg1 error:(id)arg2;
- (oneway void)setLocations:(id)arg1;
- (void)sessionWasCreatedRefresh;
- (void)forceRefresh;
- (BOOL)hasModelInitialized;
- (void)invalidate;
- (void)dispatchOnDelegateQueue:(CDUnknownBlockType)arg1;
- (id)serverProxy;
- (void)invalidateWithError:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)locatingInProgressChanged:(id)arg1;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;
- (id)init;
- (void)_registerForFMFDLaunchedNotification;
- (void)_FMFDAgentDidLaunch:(id)arg1;
- (id)internalConnection;
- (void)getDataForPerformanceRequest:(CDUnknownBlockType)arg1;
- (void)sessionHandleReport:(CDUnknownBlockType)arg1;
- (void)dumpStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendIDSPacket:(id)arg1 toHandle:(id)arg2;
- (void)isIn5XXGracePeriodWithCompletion:(CDUnknownBlockType)arg1;
- (void)exit5XXGracePeriod;
- (void)crashDaemon;
- (BOOL)shouldHandleErrorInFWK:(id)arg1;
- (BOOL)is5XXError:(id)arg1;
- (void)setExpiredInitTimestamp;
- (id)verifyRestrictionsAndShowDialogIfRequired;
- (void)getAbRecordIdForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPrettyNameForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllDevices:(CDUnknownBlockType)arg1;
- (double)maxLocatingInterval;
- (id)getAllDevices;
- (id)getActiveLocationSharingDevice;
- (oneway void)iCloudAccountNameWithCompletion:(CDUnknownBlockType)arg1;
- (void)locationForHandle:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshLocationForHandles:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshLocationForHandle:(id)arg1 callerId:(id)arg2 priority:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canOfferToHandles:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesWithPendingOffers:(CDUnknownBlockType)arg1;
- (void)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getPendingMappingPacketsForHandle:(id)arg1 groupId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)isMyLocationEnabled:(CDUnknownBlockType)arg1;
- (void)setHideMyLocationEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocationWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesFollowingMyLocation:(CDUnknownBlockType)arg1;
- (void)getHandlesSharingLocationsWithMeWithGroupId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getHandlesSharingLocationsWithMe:(CDUnknownBlockType)arg1;
- (void)setActiveDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getActiveLocationSharingDevice:(CDUnknownBlockType)arg1;
- (void)encryptPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)decryptPayload:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dataForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleAndLocationForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)contactForPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)nearbyLocationsWithCompletion:(CDUnknownBlockType)arg1;
- (void)favoritesForMaxCount:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAllLocations:(CDUnknownBlockType)arg1;
- (void)getPendingFriendshipRequestsWithCompletion:(CDUnknownBlockType)arg1;
- (void)stopSharingMyLocationWithHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopSharingMyLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)declineFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)approveFriendshipRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFriendshipInviteToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)extendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_checkAndDisplayMeDeviceSwitchAlert;
- (void)_sendAutoSwitchMeDevice;
- (void)_sendFriendshipOfferToHandles:(id)arg1 groupId:(id)arg2 callerId:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)_isNoMappingPacketReturnedError:(id)arg1;
- (void)reloadDataIfNotLoaded;
- (id)getOfferExpirationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)cachedLocationForHandle:(id)arg1;
- (BOOL)isMyLocationEnabled;
- (id)getHandlesWithPendingOffers;
- (BOOL)canGetLocationForHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (BOOL)canShareLocationWithHandle:(id)arg1 groupId:(id)arg2 callerId:(id)arg3;
- (id)getFavoritesSharingLocationWithMe;
- (id)getHandlesFollowingMyLocation;
- (id)getHandlesSharingLocationsWithMe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

