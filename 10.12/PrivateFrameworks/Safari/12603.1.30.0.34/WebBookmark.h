//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Safari/NSCopying-Protocol.h>
#import <Safari/NSPasteboardReading-Protocol.h>
#import <Safari/NSPasteboardWriting-Protocol.h>

@class BookmarkImportInfo, NSData, NSDate, NSDictionary, NSImage, NSString, WebBookmarkGroup, WebBookmarkList;

@interface WebBookmark : NSObject <NSPasteboardWriting, NSPasteboardReading, NSCopying>
{
    BOOL _threadUnsafeShouldOmitFromUI;
    BOOL _canOpenInTabs;
    BOOL _hasDefaultSiteOrFolderIcon;
    NSString *_UUID;
    NSString *_threadUnsafeTitle;
    NSDictionary *_threadUnsafeReadingListItemAttributes;
    NSDictionary *_threadUnsafeReadingListItemNonSyncAttributes;
    BookmarkImportInfo *_threadUnsafeImportInfo;
    WebBookmarkGroup *_group;
    WebBookmarkList *_parent;
    NSString *_identifier;
    NSString *_syncServerID;
    NSDictionary *_syncExtraAttributes;
    NSString *_syncKey;
    NSData *_syncData;
}

+ (id)bookmarkWithURLString:(id)arg1 title:(id)arg2;
+ (id)bookmarkFromHistoryItem:(id)arg1;
+ (id)bookmarkFromDictionaryRepresentation:(id)arg1 topLevelOnly:(BOOL)arg2 withGroup:(id)arg3;
+ (id)bookmarkFromDictionaryRepresentation:(id)arg1 withGroup:(id)arg2;
+ (id)_bookmarkFromDictionaryRepresentation:(id)arg1 topLevelOnly:(BOOL)arg2 withGroup:(id)arg3;
+ (BOOL)_getBookmarkType:(long long *)arg1 fromDictionaryRepresentation:(id)arg2;
+ (id)emptyFolderTitle;
+ (Class)_classForBookmarkType:(long long)arg1;
+ (id)bookmarkOfType:(long long)arg1 identifier:(id)arg2 UUID:(id)arg3 group:(id)arg4;
+ (id)bookmarkOfType:(long long)arg1;
+ (void)initializeCollections;
+ (id)allCollectionsRoot;
+ (id)bookmarkForFileOrFolderAtPath:(id)arg1;
+ (BOOL)isAcceptableBookmarkObjectPath:(id)arg1;
+ (id)_bookmarkForFileOrFolderAtPath:(id)arg1 directoryDepth:(unsigned int)arg2;
+ (id)bookmarkWithURL:(id)arg1 title:(id)arg2;
+ (id)defaultTitleFromURL:(id)arg1;
+ (void)replaceTabsWithBookmarks:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
+ (void)replaceTabsWithBookmarks:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2 confirmQuantity:(BOOL)arg3;
+ (void)performTabVisitingOperationWithURLs:(id)arg1 titles:(id)arg2 tabPlacementHint:(const struct TabPlacementHint *)arg3 confirmQuantity:(BOOL)arg4 confirmationMessageText:(id)arg5 continueButtonMessageText:(id)arg6 operationBlock:(CDUnknownBlockType)arg7;
+ (void)replaceTabsWithURLs:(id)arg1 titles:(id)arg2 tabPlacementHint:(const struct TabPlacementHint *)arg3 confirmQuantity:(BOOL)arg4;
+ (void)openAllUrlsInNewTabs:(id)arg1 withTitles:(id)arg2 tabPlacementHint:(const struct TabPlacementHint *)arg3 confirmQuantity:(BOOL)arg4;
+ (id)urlsForBookmarks:(id)arg1 withTitles:(id *)arg2;
+ (id)_flattenedDescendantsOfBookmarks:(id)arg1;
+ (void)_addFlattenedDescendantsOfBookmarks:(id)arg1 toArray:(id)arg2;
+ (unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2;
+ (id)readableTypesForPasteboard:(id)arg1;
@property(nonatomic) BOOL hasDefaultSiteOrFolderIcon; // @synthesize hasDefaultSiteOrFolderIcon=_hasDefaultSiteOrFolderIcon;
@property(copy, nonatomic) NSData *syncData; // @synthesize syncData=_syncData;
@property(copy, nonatomic) NSString *syncKey; // @synthesize syncKey=_syncKey;
@property(copy, nonatomic) NSDictionary *syncExtraAttributes; // @synthesize syncExtraAttributes=_syncExtraAttributes;
@property(copy, nonatomic) NSString *syncServerID; // @synthesize syncServerID=_syncServerID;
@property(readonly, nonatomic) BOOL canOpenInTabs; // @synthesize canOpenInTabs=_canOpenInTabs;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(setter=_setParent:) __weak WebBookmarkList *parent; // @synthesize parent=_parent;
@property(nonatomic) __weak WebBookmarkGroup *group; // @synthesize group=_group;
- (void).cxx_destruct;
- (void)_updateStateHash:(struct SHA256 *)arg1;
- (BOOL)_looksLikeTopLevelBookmarkFolderWithTitle:(id)arg1;
- (BOOL)mergeAttributesFromBookmark:(id)arg1;
- (BOOL)updateByCopyingAttributesFromBookmark:(id)arg1 withExistingBookmarksByUUID:(id)arg2;
@property(retain) BookmarkImportInfo *importInfo; // @synthesize importInfo=_threadUnsafeImportInfo;
- (BOOL)_serverIDMatchesCurrentDAVHomeURL:(id)arg1;
- (BOOL)hasPriorityOverBookmarkForDeduplication:(id)arg1 currentDAVHomeURL:(id)arg2;
- (BOOL)isUserVisiblyEqualToBookmark:(id)arg1;
- (BOOL)isDescendantOf:(id)arg1;
- (BOOL)isFolderWithTitle:(id)arg1;
- (void)clearUUID;
- (id)init;
- (id)initWithTopSite:(struct TopSite *)arg1;
- (id)initWithIdentifier:(id)arg1 UUID:(id)arg2 group:(id)arg3;
- (id)initFromDictionaryRepresentation:(id)arg1 withGroup:(id)arg2;
- (id)initFromDictionaryRepresentation:(id)arg1 topLevelOnly:(BOOL)arg2 withGroup:(id)arg3;
- (id)_syncDataAsDictionary;
- (void)_loadSyncDataFromDictionary:(id)arg1;
- (id)_mutableDictionaryRepresentation;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) unsigned long long numberOfChildren;
@property(readonly, nonatomic) long long bookmarkType;
@property(readonly, nonatomic) NSImage *icon;
- (void)_setTitle:(id)arg1 notifyBookmarkGroup:(BOOL)arg2;
- (void)setTitleWithoutNotifications:(id)arg1;
@property(copy) NSString *title; // @synthesize title=_threadUnsafeTitle;
- (void)clearDAVSyncState;
- (void)clearSyncStateForDelete;
- (void)clearSyncStateForMove;
- (void)clearSyncStateForCopy;
- (void)clearAllChangesRecursively;
- (void)updateByCopyingSyncDataFromBookmark:(id)arg1 withChildBookmarksByUUID:(id)arg2;
- (void)clearSyncServerIDWithoutNotifications;
@property(copy) NSString *readingListItemPreviewText;
@property(retain) NSDate *readingListItemDateLastViewed;
@property(retain) NSDate *readingListItemDateAdded;
- (void)_removeReadingListAttributeValueForKey:(id)arg1;
- (void)_setReadingListItemAttributeValue:(id)arg1 forKey:(id)arg2;
@property(copy) NSDictionary *readingListItemNonSyncAttributes; // @synthesize readingListItemNonSyncAttributes=_threadUnsafeReadingListItemNonSyncAttributes;
- (void)_setReadingListItemAttributes:(id)arg1 changedAttributes:(id)arg2;
@property(copy) NSDictionary *readingListItemAttributes; // @synthesize readingListItemAttributes=_threadUnsafeReadingListItemAttributes;
@property(readonly, nonatomic) BOOL looksLikeReadingList;
@property(readonly, nonatomic) BOOL looksLikeBookmarksMenu;
@property(readonly, nonatomic) BOOL looksLikeBookmarksBar;
@property(readonly, nonatomic) BOOL shouldOmitFromUIOrHasOmittedAncestor;
@property BOOL shouldOmitFromUI; // @synthesize shouldOmitFromUI=_threadUnsafeShouldOmitFromUI;
@property(readonly, nonatomic) struct SHA256Hash stateHash;
@property(readonly, nonatomic) unsigned long long numberOfAncestors;
@property(copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
@property(readonly, nonatomic) BOOL hasUUID;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)_contentItem:(id)arg1 matchesString:(id)arg2 options:(unsigned long long)arg3 searchCriteria:(unsigned long long)arg4;
- (void)_collectContentItems:(id)arg1 matchingSearchStrings:(id)arg2 orWithAddressInSet:(id)arg3 fromContentItem:(id)arg4 searchCriteria:(unsigned long long)arg5 searchDomain:(int)arg6;
- (BOOL)_addressOfContentItem:(id)arg1 isInSet:(id)arg2;
- (id)titleStringForContentItem:(id)arg1 forEditing:(BOOL)arg2;
- (id)parentStringForContentItem:(id)arg1;
- (id)parentOfContentItem:(id)arg1;
- (int)numberOfChildrenOfContentItem:(id)arg1;
- (id)imageForContentItem:(id)arg1;
- (BOOL)isCollection;
- (id)contentItemsToExpandOnReload;
- (id)contentItemsToInitiallyExpand;
- (id)contentItemsMatchingSearchStrings:(id)arg1 orWithAddressInSet:(id)arg2 searchCriteria:(unsigned long long)arg3 searchDomain:(int)arg4;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (BOOL)contentItem:(id)arg1 matchesStrings:(id)arg2 options:(unsigned long long)arg3 searchCriteria:(unsigned long long)arg4;
- (void)didExpandContentItem:(id)arg1;
- (void)didCollapseContentItem:(id)arg1;
- (id)childAtIndex:(int)arg1 ofContentItem:(id)arg2;
- (BOOL)canDeleteContentItems;
- (BOOL)canCopyContentItems;
- (BOOL)canAddContentItems;
- (id)previewTextForContentItem:(id)arg1;
- (id)bookmarkFromContentItem:(id)arg1;
- (id)addressStringForContentItem:(id)arg1;
- (void)enumerateDescendantsIncludingFolders:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)_enumerateDescendantsIncludingFolders:(BOOL)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2 isCopy:(BOOL)arg3;
- (id)createInternetLocationFileHierarchyInDirectory:(id)arg1;
- (BOOL)isDescendantOfFavorites;
- (BOOL)isAncestorOf:(id)arg1;
- (BOOL)isOrHasAnyLeaves;
- (void)writeToPasteboard;
- (id)_browserWindowController;
- (void)replaceTabsWithDescendantsUsingTabPlacementHint:(const struct TabPlacementHint *)arg1 confirmQuantity:(BOOL)arg2;
- (void)replaceTabsWithDescendantsUsingTabPlacementHint:(const struct TabPlacementHint *)arg1;
- (void)openAllDescendantsInNewTabsWithTabPlacementHint:(const struct TabPlacementHint *)arg1 confirmQuantity:(BOOL)arg2;
- (void)openAllDescendantsInNewTabsWithTabPlacementHint:(const struct TabPlacementHint *)arg1;
- (id)_urlsOfDescendantsForOpeningTabsWithTitles:(id *)arg1;
- (id)_flattenedDescendants;
- (void)_addFlattenedDescendantsToArray:(id)arg1;
- (void)replaceTabsWithDescendantsFromMenuItem:(id)arg1;
- (void)openAllInNewTabsFromMenuItem:(id)arg1;
- (void)goToFromMenuItem:(id)arg1;
- (void)goToUsingWindowPolicyFromCurrentEventWithTabPlacementHint:(const struct TabPlacementHint *)arg1;
- (void)goToInNewTabWithTabPlacementHint:(const struct TabPlacementHint *)arg1;
- (void)goToInNewWindow;
- (void)goToWithWindowPolicy:(long long)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToWithTabPlacementHint:(const struct TabPlacementHint *)arg1;
- (BOOL)insertBookmarkWithUndo:(id)arg1 atIndex:(unsigned long long)arg2 didCheckIfBookmarkEditingIsPermitted:(BOOL)arg3 allowDuplicateURLs:(BOOL)arg4;
- (id)convertWithUndoToFolderTitled:(id)arg1 addedBookmarks:(id)arg2;
- (BOOL)moveWithUndoToFolder:(id)arg1 index:(unsigned long long)arg2;
- (id)addNewSubfolderWithUndoTitled:(id)arg1 insertionIndex:(unsigned long long)arg2;
- (BOOL)deleteWithUndoWithoutAuthorization;
- (void)deleteWithUndo;
- (void)toggleAutomaticallyReplacesTabsWithUndo;
- (BOOL)setAddressWithUndo:(id)arg1;
- (BOOL)setPreviewTextWithUndo:(id)arg1 isUserCustomized:(BOOL)arg2;
- (BOOL)setTitleWithUndo:(id)arg1;
- (BOOL)_bookmarkEditingPermitted;
- (BOOL)canEditAddress;
- (id)initWithPasteboardPropertyList:(id)arg1 ofType:(id)arg2;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

