//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICCloudSyncingObject.h>

#import <NotesShared/ICCloudObject-Protocol.h>
#import <NotesShared/ICSearchIndexableNote-Protocol.h>
#import <NotesShared/NSPasteboardReading-Protocol.h>
#import <NotesShared/NSPasteboardWriting-Protocol.h>
#import <NotesShared/NSTextStorageDelegate-Protocol.h>
#import <NotesShared/TTTextStorageDelegate-Protocol.h>

@class ICAccount, ICNoteData, NSData, NSDate, NSMutableSet, NSNumber, NSSet, NSString, NSTimer, NSUUID, TTTextStorage, TTVectorMultiTimestamp;
@protocol ICNoteDelegate;

@interface ICNote : ICCloudSyncingObject <ICSearchIndexableNote, NSPasteboardWriting, NSPasteboardReading, ICCloudObject, TTTextStorageDelegate, NSTextStorageDelegate>
{
    TTTextStorage *_textStorage;
    NSMutableSet *_connectedSockets;
    NSMutableSet *_connectedDevices;
    NSUUID *_uuid;
    BOOL needsRefresh;
    BOOL sendingNoteDataKVO;
    BOOL observingData;
    BOOL _attemptedToMergeWhenEditingMarkedText;
    BOOL _shouldBypassDidUnmarkTextCallback;
    BOOL _correctionPanelIsActive;
    BOOL _attemptedToMergeWhenCorrectionPanelIsActive;
    BOOL _didAddNotificationCenterObservers;
    BOOL _textViewNotificationCenterCounter;
    TTVectorMultiTimestamp *archivedTimestamp;
    NSData *decryptedData;
    NSTimer *_unmarkTextTimer;
    id <ICNoteDelegate> _delegate;
}

+ (id)defaultTitleForEmptyNote;
+ (id)keyPathsForValuesAffectingHasUnreadChanges;
+ (id)keyPathsForValuesAffectingFolder;
+ (unsigned long long)maxNoteTextLength;
+ (id)keyPathsForValuesAffectingIsSharedViaICloud;
+ (id)keyPathsForValuesAffectingCanBeSharedViaICloud;
+ (id)keyPathsForValuesAffectingParentCloudObject;
+ (void)redactNote:(id)arg1;
+ (id)createNoteFromNote:(id)arg1 inFolder:(id)arg2 isPasswordProtected:(BOOL)arg3 removingOriginalNote:(BOOL)arg4;
+ (id)createNoteFromNote:(id)arg1 isPasswordProtected:(BOOL)arg2 removingOriginalNote:(BOOL)arg3;
+ (id)predicateForVisibleNotesIncludingTrash:(BOOL)arg1;
+ (id)predicateForSearchableNotes;
+ (id)predicateForVisibleNotes;
+ (id)predicateForNote:(id)arg1;
+ (id)newFetchRequestForNotes;
+ (unsigned long long)countOfNotesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (id)notesMatchingPredicate:(id)arg1 context:(id)arg2;
+ (unsigned long long)countOfVisibleNotesInContext:(id)arg1;
+ (id)visibleNotesInContext:(id)arg1;
+ (unsigned long long)countOfAllNotesInContext:(id)arg1;
+ (id)allNotesInContext:(id)arg1;
+ (id)noteWithLegacyManagedObjectID:(id)arg1 context:(id)arg2;
+ (id)visibleNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithIdentifier:(id)arg1 includeDeleted:(BOOL)arg2 context:(id)arg3;
+ (id)noteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)noteWithUUID:(id)arg1 context:(id)arg2;
+ (id)refreshAllOfNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (void)purgeAllNotesInContext:(id)arg1;
+ (void)purgeNote:(id)arg1;
+ (void)deleteNote:(id)arg1;
+ (void)deleteEmptyNote:(id)arg1;
+ (id)newEmptyNoteWithUUID:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)newEmptyNoteInContext:(id)arg1;
+ (id)newNoteWithoutIdentifierInContext:(id)arg1;
+ (id)newObjectWithIdentifier:(id)arg1 context:(id)arg2;
+ (id)hexStringForColor:(struct NSColor *)arg1;
+ (BOOL)isDefaultColor:(struct NSColor *)arg1;
+ (id)tagDictionariesForAttributes:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (id)tagDictionaryForWrapperAroundParagraphStyle:(id)arg1;
+ (id)htmlStringFromAttributedString:(id)arg1 attachmentConversionHandler:(CDUnknownBlockType)arg2;
+ (void)fixFontsInAttributedString:(id)arg1;
+ (void)fixUnwantedCharactersInAttributedString:(id)arg1;
+ (void)fixDashedListsInAttributedString:(id)arg1;
+ (id)htmlStringByFixingDashedListsInHTMLString:(id)arg1;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)mutableAttributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2;
+ (id)htmlObjectAttributesForAttachmentWithContentID:(id)arg1;
+ (id)attributedStringFromHTMLString:(id)arg1 baseURL:(id)arg2 readerDelegate:(id)arg3;
+ (id)attributedStringFromHTMLString:(id)arg1 readerDelegate:(id)arg2;
+ (id)attributedStringFromHTMLString:(id)arg1;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
+ (id)keyPathsForValuesAffectingCloudAccount;
+ (BOOL)supportsUserSpecificRecords;
+ (id)allCloudObjectsInContext:(id)arg1;
+ (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;
+ (id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2;
@property(nonatomic) BOOL textViewNotificationCenterCounter; // @synthesize textViewNotificationCenterCounter=_textViewNotificationCenterCounter;
@property(nonatomic) BOOL didAddNotificationCenterObservers; // @synthesize didAddNotificationCenterObservers=_didAddNotificationCenterObservers;
@property(nonatomic) __weak id <ICNoteDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL attemptedToMergeWhenCorrectionPanelIsActive; // @synthesize attemptedToMergeWhenCorrectionPanelIsActive=_attemptedToMergeWhenCorrectionPanelIsActive;
@property(nonatomic) BOOL correctionPanelIsActive; // @synthesize correctionPanelIsActive=_correctionPanelIsActive;
@property(retain, nonatomic) NSTimer *unmarkTextTimer; // @synthesize unmarkTextTimer=_unmarkTextTimer;
@property(nonatomic) BOOL shouldBypassDidUnmarkTextCallback; // @synthesize shouldBypassDidUnmarkTextCallback=_shouldBypassDidUnmarkTextCallback;
@property(nonatomic) BOOL attemptedToMergeWhenEditingMarkedText; // @synthesize attemptedToMergeWhenEditingMarkedText=_attemptedToMergeWhenEditingMarkedText;
@property(nonatomic, getter=isObservingData) BOOL observingData; // @synthesize observingData;
@property(nonatomic, getter=isSendingNoteDataKVO) BOOL sendingNoteDataKVO; // @synthesize sendingNoteDataKVO;
@property(retain) NSData *decryptedData; // @synthesize decryptedData;
@property(nonatomic) BOOL needsRefresh; // @synthesize needsRefresh;
@property(copy, nonatomic) TTVectorMultiTimestamp *archivedTimestamp; // @synthesize archivedTimestamp;
- (void).cxx_destruct;
- (void)textStorageDidEndEditingNotification:(id)arg1;
- (void)resetUnmarkTextTimerIfNeeded;
- (void)stopUnmarkTextTimerIfNeeded;
- (void)startUnmarkTextTimerIfNeeded;
- (double)unmarkTextTimerTimeout;
- (id)checklistStyleAccessibilityDescriptionForRange:(struct _NSRange)arg1;
- (void)announceAccessibilitySelectionChangedByMerge;
- (void)announceAccessibilitySelectionChangedByMergeWithSavedSelections:(id)arg1 beforeMergeTimestamp:(id)arg2;
- (void)notifyTextViewsNoteDidMerge;
- (void)notifyTextViewsNoteWillMerge;
- (id)ic_loggingValues;
- (void)setLegacyManagedObjectID:(id)arg1;
@property(retain, nonatomic) NSSet *folders; // @dynamic folders;
- (void)setFolder:(id)arg1;
- (void)setNeedsInitialFetchFromCloud:(BOOL)arg1;
- (void)textStorageDidPerformUndo:(id)arg1;
- (void)textStorage:(id)arg1 didProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;
- (void)filterAttachmentsInTextStorage:(id)arg1 range:(struct _NSRange)arg2;
- (void)textStorageDidProcessEditing:(id)arg1;
- (void)textStorageWillProcessEditing:(id)arg1;
- (void)setNeedsSave;
- (void)saveAfterDelay;
- (void)save;
- (BOOL)isDeletedOrInTrash;
- (id)contentInfoText;
- (void)regenerateTitle;
- (struct _NSRange)rangeForTitle:(char *)arg1;
- (void)regenerateSnippet;
- (struct _NSRange)rangeForSnippet;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachmentsInBackground;
- (void)mergeUnappliedEncryptedRecordsIncludingAttachments;
- (void)saveAndClearDecryptedData;
- (id)parentEncryptableObject;
- (void)decrypt;
- (id)textDataDecryptedIfNecessary;
- (BOOL)supportsEncryptedValuesDictionary;
- (void)setCryptoTag:(id)arg1;
- (void)setCryptoInitializationVector:(id)arg1;
@property(readonly, nonatomic) BOOL hasUnreadChanges;
- (BOOL)hasTextStorage;
- (void)releaseTextStorage;
- (void)willSave;
- (void)saveNoteData;
- (void)didChangeNoteText;
- (void)replaceWithDocument:(id)arg1;
- (unsigned long long)mergeWithNoteDocument:(id)arg1;
- (unsigned long long)mergeWithNoteData:(id)arg1;
- (void)refreshNoteTextFromDataStore;
- (struct _NSRange)rangeForAttachment:(id)arg1;
- (struct NSImage *)thumbnailImageWithMinSize:(struct CGSize)arg1 scale:(double)arg2 imageScaling:(unsigned long long *)arg3 showAsFileIcon:(char *)arg4 isMovie:(char *)arg5 movieDuration:(CDStruct_198678f7 *)arg6;
- (BOOL)hasThumbnailImage;
- (id)attachmentFromRemoteFileWrapper:(id)arg1;
- (id)attachmentFromLegacyAttachmentFileWrapper:(id)arg1;
- (id)attachmentFromStandardFileWrapper:(id)arg1;
- (id)attachmentFromObject:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)attachmentActivityItemsForSharing;
- (id)visibleTopLevelAttachments;
- (id)visibleAttachments;
- (BOOL)containsAttachmentsUnsupportedInPasswordProtection;
- (BOOL)attachmentExceedsMaxSizeAllowed:(unsigned long long)arg1;
- (BOOL)canAddAttachments:(unsigned long long)arg1;
- (BOOL)canAddAttachment;
- (void)updateChangeCount;
- (void)unmarkForDeletion;
- (void)markForDeletion;
- (BOOL)requiresLegacyTombstoneAfterDeletion;
- (BOOL)allowsNewTextLength:(unsigned long long)arg1;
- (BOOL)isEditable;
- (BOOL)isVisible;
- (BOOL)isEmpty;
- (long long)primaryWritingDirection;
- (id)noteAsPlainTextWithoutTitle;
- (id)quotedTitle;
- (id)noteAsPlainText;
@property(retain, nonatomic) TTTextStorage *textStorage;
- (id)replicaID;
@property(readonly, nonatomic) TTTextStorage *textStorageWithoutCreating;
- (id)uuid;
- (id)connectedSockets;
- (id)connectedDevices;
- (id)folder;
- (void)textViewWillAddFirstCorrectionPanel:(id)arg1;
- (void)textViewDidRemoveAllCorrectionPanels:(id)arg1;
- (void)mergeNoteDataAfterAutoCorrection;
- (void)textViewDidUnmarkText:(id)arg1;
- (void)unmarkTextIfNecessary;
- (struct _NSRange)markedTextRange;
- (void)addNotificationCenterObserversIfNecessary;
- (void)startObservingDataIfNecessary;
- (void)removeNotificationCenterObservers;
- (void)removeNotificationCenterObserversIfNecessary;
- (void)stopObservingDataIfNecessary;
- (void)stopObservingTextViewNotifications;
- (void)startObservingTextViewNotifications;
- (void)dealloc;
- (void)willTurnIntoFault;
- (void)awakeFromInsert;
- (void)faultLiveTextStorageIfNecessary;
- (void)awakeFromFetch;
- (void)mergeNotePrimitiveData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didAcceptShare:(id)arg1;
- (BOOL)needsToDeleteShare;
- (id)shareType;
- (id)shareTitle;
- (BOOL)isSharedViaICloud;
- (BOOL)canBeSharedViaICloud;
- (id)childCloudObjects;
- (id)parentCloudObject;
- (id)attachmentWithIdentifier:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3 updateFileBasedAttributes:(BOOL)arg4;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filename:(id)arg3;
- (id)addAttachment;
- (id)addURLAttachmentWithURL:(id)arg1;
- (id)addAttachmentWithUTI:(id)arg1 data:(id)arg2 filenameExtension:(id)arg3;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2 updateFileBasedAttributes:(BOOL)arg3;
- (id)addAttachmentWithUTI:(id)arg1 withURL:(id)arg2;
- (id)addAttachmentWithUTI:(id)arg1;
- (id)addAttachmentWithRemoteFileURL:(id)arg1;
- (id)addAttachmentWithFileWrapper:(id)arg1;
- (id)addAttachmentWithFileURL:(id)arg1 updateFileBasedAttributes:(BOOL)arg2;
- (id)addAttachmentWithFileURL:(id)arg1;
- (id)addAttachmentWithData:(id)arg1 filename:(id)arg2;
- (id)addAttachmentWithIdentifier:(id)arg1;
- (id)htmlStringWithAttachmentConversionHandler:(CDUnknownBlockType)arg1;
- (id)htmlStringWithAttachments:(BOOL)arg1;
- (id)htmlString;
- (id)searchableContentKeyPaths;
- (BOOL)shouldUpdateIndexForChangedValues:(id)arg1;
- (id)searchIndexStringsOutHasAdditionalStrings:(char *)arg1;
- (id)authorsExcludingCurrentUser;
- (id)dateForCurrentSortType;
- (BOOL)isHiddenFromSearch;
- (id)trimmedTitle;
- (BOOL)searchResultCanBeDeletedFromNoteContext;
- (unsigned long long)searchResultsSection;
- (id)searchIndexableTitleUsingContentTextIfNecessary:(id)arg1;
- (id)objectIdentifier;
- (long long)visibilityTestingType;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;
- (BOOL)needsToFetchAfterServerRecordChanged:(id)arg1;
- (void)resetUniqueIdentifier;
- (id)attachmentForWebThumbnail;
- (void)deduplicateSelfAndCreateNewObjectFromRecord:(id)arg1;
- (long long)mergePolicyForRecord:(id)arg1;
- (BOOL)supportsDeletionByTTL;
- (void)deleteFromLocalDatabase;
- (id)objectsToBeDeletedBeforeThisObject;
- (id)cloudAccount;
- (BOOL)hasAllMandatoryFields;
- (void)fixBrokenReferences;
- (BOOL)isInICloudAccount;
- (void)mergeDataFromUserSpecificRecord:(id)arg1;
- (id)newlyCreatedUserSpecificRecord;
- (id)newlyCreatedRecord;
- (void)mergeFoldersFromRecord:(id)arg1;
- (void)mergeTextData:(id)arg1 record:(id)arg2 mergePolicy:(long long)arg3;
- (void)mergeTextDataFromRecord:(id)arg1 mergePolicy:(long long)arg2;
- (void)mergeEncryptedDataFromRecord:(id)arg1;
- (void)mergeDataFromRecord:(id)arg1 withMergePolicy:(long long)arg2;
- (void)mergeDataFromRecord:(id)arg1;
- (void)objectWasFetchedFromCloudWithRecord:(id)arg1;
- (id)recordType;
- (id)recordZoneName;

// Remaining properties
@property(retain, nonatomic) ICAccount *account; // @dynamic account;
@property(nonatomic) short attachmentViewType; // @dynamic attachmentViewType;
@property(retain, nonatomic) NSSet *attachments; // @dynamic attachments;
@property(retain, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSDate *foldersModificationDate; // @dynamic foldersModificationDate;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSNumber *integerId; // @dynamic integerId;
@property(retain, nonatomic) NSDate *lastViewedModificationDate; // @dynamic lastViewedModificationDate;
@property(retain, nonatomic) NSString *legacyContentHashAtImport; // @dynamic legacyContentHashAtImport;
@property(retain, nonatomic) NSString *legacyImportDeviceIdentifier; // @dynamic legacyImportDeviceIdentifier;
@property(retain, nonatomic) NSString *legacyManagedObjectIDURIRepresentation; // @dynamic legacyManagedObjectIDURIRepresentation;
@property(retain, nonatomic) NSDate *legacyModificationDateAtImport; // @dynamic legacyModificationDateAtImport;
@property(retain, nonatomic) NSNumber *legacyNoteIntegerId; // @dynamic legacyNoteIntegerId;
@property(retain, nonatomic) NSNumber *legacyNoteWasPlainText; // @dynamic legacyNoteWasPlainText;
@property(retain, nonatomic) NSDate *modificationDate; // @dynamic modificationDate;
@property(retain, nonatomic) ICNoteData *noteData; // @dynamic noteData;
@property(retain, nonatomic) NSNumber *noteHasChanges; // @dynamic noteHasChanges;
@property(retain, nonatomic) NSString *snippet; // @dynamic snippet;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSString *thumbnailAttachmentIdentifier; // @dynamic thumbnailAttachmentIdentifier;
@property(retain, nonatomic) NSString *title; // @dynamic title;

@end

