//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EKBackingObjectsTracker, EKCalendar, EKCalendarChangeHelper, EKChangeTracker, EKEventOccurrenceCache, EKEventStore, EKRecurrenceChangeManager, NSArray, NSMutableSet, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface EKBackingStore : NSObject
{
    BOOL _accessToRemindersRequested;
    BOOL _accessToEventsRequested;
    EKChangeTracker *_changeTracker;
    EKBackingObjectsTracker *_backingObjectsTracker;
    EKEventStore *_mainStore;
    EKEventOccurrenceCache *_occurrenceCache;
    EKRecurrenceChangeManager *_recurrenceChangeManager;
    EKCalendarChangeHelper *_calendarChangeHelper;
    NSObject<OS_dispatch_queue> *_backingObjectsQueue;
    NSObject<OS_dispatch_queue> *_noboCacheQueue;
    NSString *_backingStoreIdentifier;
    NSMutableSet *_identifiersToCommit;
}

+ (id)createNonPartialFrozenObjectForPartialObject:(id)arg1 withFrozenClass:(Class)arg2;
@property(retain, nonatomic) NSMutableSet *identifiersToCommit; // @synthesize identifiersToCommit=_identifiersToCommit;
@property(retain, nonatomic) NSString *backingStoreIdentifier; // @synthesize backingStoreIdentifier=_backingStoreIdentifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *noboCacheQueue; // @synthesize noboCacheQueue=_noboCacheQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *backingObjectsQueue; // @synthesize backingObjectsQueue=_backingObjectsQueue;
@property(nonatomic) BOOL accessToEventsRequested; // @synthesize accessToEventsRequested=_accessToEventsRequested;
@property(nonatomic) BOOL accessToRemindersRequested; // @synthesize accessToRemindersRequested=_accessToRemindersRequested;
@property(readonly, nonatomic) EKCalendarChangeHelper *calendarChangeHelper; // @synthesize calendarChangeHelper=_calendarChangeHelper;
@property(readonly, nonatomic) EKRecurrenceChangeManager *recurrenceChangeManager; // @synthesize recurrenceChangeManager=_recurrenceChangeManager;
@property(retain, nonatomic) EKEventOccurrenceCache *occurrenceCache; // @synthesize occurrenceCache=_occurrenceCache;
@property(nonatomic) __weak EKEventStore *mainStore; // @synthesize mainStore=_mainStore;
@property(readonly, nonatomic) EKBackingObjectsTracker *backingObjectsTracker; // @synthesize backingObjectsTracker=_backingObjectsTracker;
@property(readonly, nonatomic) EKChangeTracker *changeTracker; // @synthesize changeTracker=_changeTracker;
- (void).cxx_destruct;
- (void)replaceChangeTracker:(id)arg1;
- (id)changeTrackerCopy;
- (void)readdDetachedEvents:(id)arg1 andExceptions:(id)arg2 toSeries:(id)arg3;
- (void)adjustDetachedEvents:(id)arg1 andExceptions:(id)arg2 onSeries:(id)arg3 sliceOffset:(id)arg4;
- (void)undeleteFuture:(id)arg1 originalMaster:(id)arg2;
- (void)_revertTrackedChangesForIdentifiers:(id)arg1;
- (BOOL)_revertSources:(id)arg1 notify:(BOOL)arg2;
- (BOOL)revertSources:(id)arg1;
- (BOOL)_revertCalendars:(id)arg1 notify:(BOOL)arg2;
- (BOOL)revertCalendars:(id)arg1;
- (BOOL)_revertItems:(id)arg1 notify:(BOOL)arg2;
- (BOOL)revertItems:(id)arg1;
- (id)createNonPartialFrozenObjectForPartialObject:(id)arg1 withFrozenClass:(Class)arg2;
- (id)createNonPartialObjectForPartialObject:(id)arg1 withMeltedClass:(Class)arg2;
- (void)_reminderAlertFired:(id)arg1;
- (void)_notifyErrorStateChanged;
- (void)_notifyChangedSources:(id)arg1 changedCalendars:(id)arg2 changedItems:(id)arg3 changedNotifications:(id)arg4 changedSuggestedEvents:(BOOL)arg5;
- (void)_notifyChangedSources:(id)arg1 changedCalendars:(id)arg2 changedItems:(id)arg3 changedNotifications:(id)arg4;
- (void)_notifyChangedItem:(id)arg1;
- (void)_postRevertedCalendarsNotification:(id)arg1;
- (void)_postRevertedEventsNotification:(id)arg1;
- (id)_batchChangeUserInfoForObjects:(id)arg1;
- (void)_postBatchedChangeNotification:(id)arg1 forObjects:(id)arg2;
- (BOOL)_commitMovedNotifications;
- (BOOL)_commitUpdatedNotifications;
- (BOOL)_commitAcknowledgedNotifications;
- (BOOL)_commitCreatedNotifications;
- (BOOL)_commitNotifications;
- (void)_reminderBecameOverdue:(id)arg1;
- (BOOL)_commitExceptions;
- (BOOL)_commitDeletedItems;
- (BOOL)_commitUpdatedItems;
- (BOOL)_commitCreatedItems;
- (BOOL)_commitItems;
- (BOOL)_commitDeletedCalendars;
- (BOOL)_commitUpdatedCalendars;
- (BOOL)_commitCreatedCalendars;
- (BOOL)_commitCalendars;
- (BOOL)_commitDeletedSources;
- (BOOL)_commitUpdatedSources;
- (BOOL)_commitCreatedSources;
- (BOOL)_commitSources;
- (BOOL)_commit:(id *)arg1;
- (BOOL)_finishBatch:(id *)arg1;
- (void)_acknowledgeNotificationsForDeletedItems:(id)arg1;
- (void)_acknowledgeNotificationsForChangedItems:(id)arg1;
- (void)_prepareToCommitItems;
- (void)_prepareToFinishBatch;
- (id)_filteredIdentifiersToCommit:(id)arg1;
- (BOOL)_shouldCommitObjectWithIdentifier:(id)arg1;
- (BOOL)finishBatchOfObjectsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (BOOL)finishBatch:(id *)arg1;
- (void)_markObjectAsCommitted:(id)arg1;
- (BOOL)_batchSaveNotifications:(id)arg1 error:(id *)arg2;
- (BOOL)batchSaveNotifications:(id)arg1 error:(id *)arg2;
- (BOOL)_batchRespondToSharedCalendarInvitation:(id)arg1 withStatus:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)batchRespondToSharedCalendarInvitation:(id)arg1 withStatus:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)_respondToEvents:(id)arg1 withStatus:(long long)arg2 placingInCalendar:(id)arg3 error:(id *)arg4;
- (BOOL)_batchRespondToEvents:(id)arg1 invitations:(id)arg2 withStatus:(long long)arg3 placingInCalendar:(id)arg4 error:(id *)arg5;
- (BOOL)_createConflictsForEvent:(id)arg1 onDates:(id)arg2 error:(id *)arg3;
- (BOOL)batchRespondToInvitations:(id)arg1 withStatus:(long long)arg2 exceptForDates:(id)arg3 placingInCalendar:(id)arg4 error:(id *)arg5;
- (BOOL)_respondToProposedStartDate:(id)arg1 forEvent:(id)arg2 error:(id *)arg3;
- (BOOL)batchAcceptAlternateTimeProposal:(id)arg1 error:(id *)arg2;
- (BOOL)_batchAcknowledgeNotifications:(id)arg1 error:(id *)arg2;
- (id)_suggestedEventsForNotificationsClearingChangedField:(id)arg1;
- (id)_cancelledEventsForNotifications:(id)arg1;
- (BOOL)batchAcknowledgeNotifications:(id)arg1 error:(id *)arg2;
- (BOOL)batchDeleteSource:(id)arg1 error:(id *)arg2;
- (BOOL)_batchChangeSource:(id)arg1 error:(id *)arg2;
- (BOOL)batchChangeSource:(id)arg1 error:(id *)arg2;
- (BOOL)_batchDeleteCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)batchDeleteCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)_batchChangeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)batchChangeCalendar:(id)arg1 error:(id *)arg2;
- (BOOL)_marksAsSavedAfterBatchChange;
- (void)_propagateNonDateChangesToDetachedForMaster:(id)arg1;
- (BOOL)_handleAppliesToInstanceOfRecurringSeriesForEvent:(id)arg1;
- (void)_handleAppliesToInstanceChangesForItem:(id)arg1;
- (void)_handleAppliesToMasterChangesForItem:(id)arg1;
- (BOOL)_batchChange:(id)arg1 appliesToMaster:(BOOL)arg2 rebin:(BOOL)arg3 error:(id *)arg4;
- (BOOL)_batchChange:(id)arg1 appliesToMaster:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_batchDelete:(id)arg1 appliesToMaster:(BOOL)arg2 deleteFuture:(BOOL)arg3 error:(id *)arg4;
- (BOOL)batchDelete:(id)arg1 error:(id *)arg2;
- (BOOL)_batchChange:(id)arg1 rebin:(BOOL)arg2 error:(id *)arg3;
- (BOOL)batchChange:(id)arg1 error:(id *)arg2;
- (BOOL)_handleRegeneratingReminderBehaviorForReminder:(id)arg1 error:(id *)arg2;
- (BOOL)batchSaveReminder:(id)arg1 error:(id *)arg2;
- (BOOL)batchDeleteAllOrFuture:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)batchRemoveEvent:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)_batchChangePassedInEventForFutureChange:(id)arg1 error:(id *)arg2;
- (BOOL)_batchChangeFuture:(id)arg1 error:(id *)arg2;
- (id)_changesToSkipWhenApplyingAllForEvent:(id)arg1;
- (BOOL)_batchChangeAll:(id)arg1 error:(id *)arg2;
- (BOOL)_batchChangeAllOrFuture:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)batchChangeAllOrFuture:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (BOOL)_batchSaveEventsForSpanThis:(id)arg1 error:(id *)arg2;
- (BOOL)batchSaveEvents:(id)arg1 span:(long long)arg2 error:(id *)arg3;
- (id)_updatedBackingNotificationWithIdentifier:(id)arg1 commit:(BOOL)arg2;
- (id)_baseNotificationWithIdentifier:(id)arg1;
- (id)_notificationWithIdentifier:(id)arg1;
- (id)allNotificationsIncludingPast:(BOOL)arg1;
- (id)allNotifications;
- (id)_allNotificationIdentifiers;
- (id)notificationsForSource:(id)arg1 includePast:(BOOL)arg2;
- (id)notificationsForSource:(id)arg1;
- (void)_accessNotificationsIfNecessary;
- (id)_ekSourceErrorFromError:(id)arg1;
- (id)sourceErrors;
- (id)errorForSource:(id)arg1;
- (void)_accessErrorsIfNecessary;
- (void)refreshSources;
- (id)_updatedBackingSourceWithIdentifier:(id)arg1 commit:(BOOL)arg2;
- (id)_baseSourceWithIdentifier:(id)arg1;
- (id)_sourceWithIdentifier:(id)arg1;
- (id)sourceWithIdentifier:(id)arg1;
- (id)allDelegateSources;
- (id)allSources;
- (id)_allSourceIdentifiers;
- (id)notificationsForCalendar:(id)arg1 includePast:(BOOL)arg2;
- (id)notificationsForCalendar:(id)arg1;
- (long long)notificationCountForCalendar:(id)arg1 includePast:(BOOL)arg2;
- (long long)notificationCountForCalendar:(id)arg1;
- (id)errorForCalendar:(id)arg1;
- (void)insertSuggestedEventCalendar;
- (id)committedCalendarForCalendar:(id)arg1;
- (id)diffFromCommittedCalendarForCalendar:(id)arg1;
@property(readonly, nonatomic) EKCalendar *suggestedEventCalendar;
@property(nonatomic) EKCalendar *defaultCalendarForNewReminders;
@property(nonatomic) EKCalendar *defaultCalendarForNewEvents;
- (id)_backingCalendarWithUpdatedSourceForCalendar:(id)arg1;
- (id)_updatedBackingCalendarWithIdentifier:(id)arg1 commit:(BOOL)arg2;
- (id)_baseCalendarWithIdentifier:(id)arg1;
- (id)_calendarWithIdentifier:(id)arg1;
- (id)calendarWithIdentifier:(id)arg1;
- (id)_allCalendarIdentifiers;
- (id)_allCalendars;
- (id)allReminderCalendars;
- (id)allEventCalendars;
- (id)allCalendars;
- (id)notificationsForEvent:(id)arg1 isForSeries:(BOOL)arg2 includePast:(BOOL)arg3;
- (id)notificationsForEvent:(id)arg1 isForSeries:(BOOL)arg2;
- (id)notificationsForEvent:(id)arg1 includePast:(BOOL)arg2;
- (id)notificationsForEvent:(id)arg1;
- (void)_addException:(id)arg1;
- (void)_removeException:(id)arg1;
- (void)_unexceptEvent:(id)arg1;
- (void)_redetachEvent:(id)arg1;
- (void)_undetachEvent:(id)arg1;
- (void)_detachEvent:(id)arg1;
- (void)_shiftDetachedEvent:(id)arg1 to:(id)arg2;
- (void)_removeDetachedEvent:(id)arg1;
- (void)_addDetachedEvent:(id)arg1;
- (id)exceptionsForLocalUID:(id)arg1;
- (id)detachedEventsForLocalUID:(id)arg1;
- (id)_expandGeneralLookupPredicate:(id)arg1;
- (id)_expandEventRangePredicateReturningCounts:(id)arg1;
- (id)_expandEventRangePredicate:(id)arg1;
- (BOOL)canCachePredicate:(id)arg1;
- (id)expandAndCachePredicateReturningCounts:(id)arg1;
- (id)expandAndCachePredicate:(id)arg1;
- (id)lastOccurrenceInSeries:(id)arg1 exclusionOptions:(long long)arg2;
- (id)lastOccurrenceInSeries:(id)arg1;
- (id)_expandOccurrencesForSeries:(id)arg1 inRange:(id)arg2 exclusionOptions:(long long)arg3;
- (id)occurrencesForMultipleSeries:(id)arg1 inRange:(id)arg2 exclusionOptions:(long long)arg3;
- (id)occurrencesForMultipleSeries:(id)arg1 inRange:(id)arg2;
- (id)occurrencesForSeries:(id)arg1 inRange:(id)arg2 exclusionOptions:(long long)arg3;
- (id)occurrencesForSeries:(id)arg1 inRange:(id)arg2;
- (id)occurrencesForSeries:(id)arg1 onDate:(id)arg2;
- (id)committedItemForItem:(id)arg1;
- (id)diffFromCommittedItemForItem:(id)arg1 ignoringPotentialSlice:(BOOL)arg2;
- (id)diffFromCommittedItemForItem:(id)arg1;
- (id)seriesForRecurrenceSetID:(id)arg1;
- (BOOL)eventsMarkedScheduleAgentClientExistOnCalendar:(id)arg1;
- (BOOL)futureScheduledEventsExistOnCalendar:(id)arg1;
- (BOOL)eventsExistOnCalendar:(id)arg1;
- (id)commitedEventForEvent:(id)arg1 ignoringPotentialSlice:(BOOL)arg2;
- (id)commitedEventForEvent:(id)arg1;
- (id)_backingItemWithUpdatedCalendarForItem:(id)arg1;
- (id)_updatedBackingItemWithIdentifier:(id)arg1 commit:(BOOL)arg2 options:(long long)arg3;
- (id)_updatedBackingItemWithIdentifier:(id)arg1 commit:(BOOL)arg2;
- (id)_baseItemWithIdentifier:(id)arg1;
- (id)_itemWithUpdatedCalendarForItem:(id)arg1;
- (id)_itemWithIdentifier:(id)arg1 options:(long long)arg2;
- (id)_itemWithIdentifier:(id)arg1;
- (id)_itemsWithExternalIdentifier:(id)arg1;
- (id)_lookupItemsWithExternalIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)_lookupItemsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;
- (id)lookupItemsWithExternalIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (id)lookupItemsWithIdentifiers:(id)arg1 type:(unsigned long long)arg2;
- (id)_apiExpectedEventForEvent:(id)arg1;
- (id)itemsWithExternalIdentifier:(id)arg1 ofType:(unsigned long long)arg2;
- (id)itemsWithIdentifiers:(id)arg1 apiExpected:(BOOL)arg2;
- (id)itemWithIdentifier:(id)arg1;
- (id)_remindersWithIsCompleted:(BOOL)arg1 maxResults:(unsigned long long)arg2 withCalendarIdentifiers:(id)arg3;
- (id)_remindersWithContactIdentifier:(id)arg1;
- (id)remindersWithIsCompleted:(BOOL)arg1 maxResults:(unsigned long long)arg2 withCalendarIdentifiers:(id)arg3;
- (id)remindersWithContactIdentifier:(id)arg1;
- (id)remindersWithIsCompleted:(BOOL)arg1 maxResults:(unsigned long long)arg2;
- (id)_remindersWithDueDatesInRange:(id)arg1 withCalendarIdentifiers:(id)arg2 withCompletion:(id)arg3;
- (id)remindersWithDueDatesInRange:(id)arg1 withCalendarIdentifiers:(id)arg2 withCompletion:(id)arg3;
- (id)remindersWithDueDates;
- (id)_allItemIdentifiers;
- (id)_itemsWithCalendarIdentifiers:(id)arg1;
- (id)_remindersWithCalendarIdentifiers:(id)arg1;
- (id)_eventsWithCalendarIdentifiers:(id)arg1;
- (id)remindersWithCalendarIdentifiers:(id)arg1;
- (id)eventsWithCalendarIdentifiers:(id)arg1;
- (id)allReminders;
- (id)allEvents;
@property(readonly, nonatomic) NSArray *sourceFilters;
@property(readonly, nonatomic) unsigned long long options;
- (void)_updateFromBackingStore:(id)arg1;
- (id)_copyForBackgroundUpdate;
- (id)copyForBackgroundUpdate;
- (void)_logIfNoAccessRequested;
- (BOOL)_interestedInAndAuthorizedForEntityType:(unsigned long long)arg1;
- (void)pruneCacheForDisjointRange:(id)arg1;
- (void)pruneCacheForRange:(id)arg1;
- (void)_emptyCache;
- (void)refreshBackingStore;
- (void)resetCache;
- (id)cachedRange;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *backingStoreAvailableGroup;
- (BOOL)_supportsChangingIdentifiers;
- (id)initWithSourceFilters:(id)arg1 options:(unsigned long long)arg2 accessRequestedForEvents:(BOOL)arg3 accessRequestedForReminders:(BOOL)arg4 orWithExistingStore:(id)arg5;
- (id)initWithBackingStore:(id)arg1;
- (id)init;

@end

