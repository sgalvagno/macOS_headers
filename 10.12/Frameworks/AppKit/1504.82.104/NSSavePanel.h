//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSArray, NSBox, NSButton, NSControl, NSProgressIndicator, NSSavePanelAuxiliary, NSString, NSTextField, NSURL, NSView;
@protocol NSOpenSavePanelDelegate;

@interface NSSavePanel : NSPanel
{
    NSView *__navView;
    NSView *_accessoryView;
    NSArray *_allowedFileTypes;
    NSString *_validatedPosixName;
    NSString *_hiddenExtension;
    NSTextField *_messageTextField;
    NSView *_savePane;
    NSBox *_saveNavSeparatorBox;
    NSView *_savePaneTopPartsContainer;
    NSTextField *_nameField;
    NSTextField *_nameFieldLabel;
    NSButton *_expansionButton;
    NSView *_directoryPopUpContainer;
    NSControl *_directoryPopUp;
    NSTextField *_directoryPopUpLabel;
    NSBox *_navViewContainer;
    NSBox *_accessoryViewContainer;
    NSView *_bottomControlsContainer;
    NSButton *_hideExtensionButton;
    NSButton *_newFolderButton;
    NSButton *_cancelButton;
    NSButton *_okButton;
    id _filepathInputController;
    id _reservedID;
    struct __SPFlags {
        unsigned int saveMode:1;
        unsigned int isExpanded:1;
        unsigned int allowsOtherFileTypes:1;
        unsigned int canCreateDirectories:1;
        unsigned int canSelectedHiddenExtension:1;
        unsigned int reserved2:1;
        unsigned int delegate_shouldShowFilename:1;
        unsigned int delegate_compareFilename:1;
        unsigned int delegate_shouldEnableURL:1;
        unsigned int delegate_validateURL:1;
        unsigned int delegate_didChangeToDirectoryURL:1;
        unsigned int changingFrameSize:1;
        unsigned int movingAccessoryView:1;
        unsigned int userAccessoryViewFrameChange:1;
        unsigned int canChooseDirectories:1;
        unsigned int canChooseFiles:1;
        unsigned int delegate_selectionDidChange:1;
        unsigned int delegate_didChangeToDirectory:1;
        unsigned int calledWindowOrderedIn:1;
        unsigned int appCentric:1;
        unsigned int bottomControlsDisabled:1;
        unsigned int okButtonDisabled:1;
        unsigned int accessoryViewDisclosed:1;
        unsigned int delegate_isValidFilename:1;
        unsigned int delegate_userEnteredFilename:1;
        unsigned int delegate_panel_willExpand:1;
        unsigned int canResolveUbiquitousConflicts:1;
        unsigned int reserved:5;
    } _spFlags;
    NSSavePanelAuxiliary *_spAuxiliaryStorage;
    unsigned int _unused:1;
    NSProgressIndicator *_openProgressIndicator;
}

+ (void)_waitForURL:(id)arg1 useSecurityScopedURL:(BOOL)arg2 withNameFieldString:(id)arg3 thenSetTags:(id)arg4;
+ (void)_waitForURL:(id)arg1 thenSetTags:(id)arg2;
+ (id)keyPathsForValuesAffectingTags;
+ (id)_tagNamesForTags:(id)arg1;
+ (id)_tagsForTagNames:(id)arg1;
+ (BOOL)_allowTagsFieldInPanel;
+ (id)directoryPathAdjustedForSecurity:(id)arg1;
+ (void)_consumeSandboxExtensions:(id)arg1;
+ (id)_generateFileInfoForPaths:(id)arg1 sandboxPermissions:(unsigned long long)arg2;
+ (BOOL)_shouldCallDelegateMethodShouldShowFileNameForURL:(id)arg1 path:(id *)arg2;
+ (void)newDocumentAfterDelay;
+ (void)newDocument:(id)arg1;
+ (BOOL)_defaultSettingForUbiquitousBehaviors;
+ (double)_getMinSizeForAccessoryView:(id)arg1;
+ (BOOL)_shouldDiscloseAccessoryViewByDefaultForPanelThatIsSheet:(BOOL)arg1;
+ (void)_hideWindowForTimeMachineMode:(BOOL)arg1 onPanel:(id)arg2;
+ (id)_arrayOfFilePathsFromArrayOfURLs:(id)arg1;
+ (void)_storeRootDirectoryURL:(id)arg1 forSaveMode:(BOOL)arg2;
+ (id)_lastSavedRootDirectoryForSaveMode:(BOOL)arg1;
+ (void)_orderRemoteWindow:(id)arg1 toPlace:(long long)arg2 sender:(id)arg3;
+ (void)_showExistingOpenPanel:(id)arg1;
+ (void)_setLevelForiCloudOpenPanel:(id)arg1;
+ (BOOL)_shouldCreateAppCentricOpenPanel;
+ (BOOL)_shouldCreateiCloudOpenPanel;
+ (void)_setShouldCreateAppCentricOpenPanel:(BOOL)arg1;
+ (BOOL)_supportsAppCentricBrowsing;
+ (BOOL)_useFinderKit;
+ (id)savePanel;
+ (id)_crunchyRawUnbonedPanel;
+ (id)newRemotePanel;
+ (void)_warmUp;
+ (BOOL)_applicationContextHasEntitlement:(unsigned long long)arg1;
+ (BOOL)_clientWithSecurityTaskRef:(struct __SecTask *)arg1 hasEntitlement:(unsigned long long)arg2 sandboxPermissions:(unsigned long long *)arg3;
+ (BOOL)_tracksDirtyRegions;
+ (id)_resolvedSymLinkedURL:(id)arg1;
+ (BOOL)_filenameHasAcceptableFileType:(id)arg1 allowedFileTypes:(id)arg2 allowsOtherFileTypes:(BOOL)arg3;
+ (BOOL)_filenameHasNonEmptyAcceptableFileType:(id)arg1 allowedFileTypes:(id)arg2 allowsOtherFileTypes:(BOOL)arg3;
+ (BOOL)_isDirectoryURL:(id)arg1 treatFilePackagesAsDirectories:(BOOL)arg2 fauxFilePackageTypes:(id)arg3 enabledFileTypes:(id)arg4;
+ (BOOL)_isFauxFilePackageURL:(id)arg1 fauxFilePackageTypes:(id)arg2 enabledFileTypes:(id)arg3;
+ (id)_nameWithStrictRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2;
+ (id)_nameWithLooseRequiredExtensionCheck:(id)arg1 andPreferredFileExtension:(id)arg2;
+ (id)_containerURLsForRemoteProcess:(int)arg1;
+ (struct CGSize)_minContentRectSize;
+ (BOOL)setValue:(id)arg1 forUndefinedKey:(id)arg2 onObject:(id)arg3;
+ (void)_spiPropertySelectorForKey:(id)arg1 withClass:(Class)arg2 isSetter:(BOOL)arg3 outSelector:(SEL *)arg4;
+ (id)kvoKeysForType:(long long)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)_fileBrowserKVOKeys;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_supportedDelegateMethodsFromDelegate:(id)arg1;
+ (void)_addToDefaultsCurrentDirectoryToRecentPlaces:(id)arg1;
+ (void)_storeUserSetHideExtensionButtonState:(BOOL)arg1 toDefaultsUsingKey:(id)arg2 forPanelType:(BOOL)arg3;
+ (BOOL)_userSetHideExtensionButtonStateFromDefaultsUsingKey:(id)arg1 forPanelType:(BOOL)arg2;
+ (void)_storeRootDirectoryUsingKey:(id)arg1 rootURL:(id)arg2 directoryPath:(id)arg3;
+ (void)_storeCurrentDirectoryUsingKey:(id)arg1 directoryURL:(id)arg2 rootURL:(id)arg3;
+ (id)_directoryForKey:(id)arg1;
+ (struct CGSize)_expandedFrameSizeForKey:(id)arg1 minSize:(struct CGSize)arg2;
+ (void)_storeToDefaultsExpandedState:(BOOL)arg1 forPanelType:(BOOL)arg2;
+ (BOOL)_expandedStateFromDefaultsForPanelType:(BOOL)arg1;
+ (void)_storeFrameSize:(struct CGSize)arg1 withKey:(id)arg2;
+ (BOOL)_shouldShowHiddenFiles;
+ (void)_writeToDefaultsFileListMode:(int)arg1 forPanelType:(BOOL)arg2;
+ (int)fileListModeForPanelInSaveMode:(BOOL)arg1 inDirectory:(id)arg2 lastListForMediaBrowserMode:(BOOL)arg3;
+ (void)_synchronizeDefaults;
+ (id)_NSNavRecentPlacesFromDefaults;
+ (unsigned long long)_NSNavMaxRecentPlacesFromDefaults;
- (void)setAccessoryViewMinWidth:(double)arg1;
- (void)_send_resizeKeepingPanelOnScreen:(struct CGRect)arg1 expand:(BOOL)arg2 animate:(BOOL)arg3;
- (void)_setTagsIfNecessary;
- (void)_registerTagsWithFinder;
- (void)_commitPendingTags;
- (void)_tagsDidChange:(id)arg1;
@property(copy) NSArray *tagNames;
- (id)_tags;
- (void)_setTags:(id)arg1;
@property BOOL showsTagField;
- (BOOL)_showsTagField;
- (void)_setShowsTagField:(BOOL)arg1;
- (BOOL)_shouldSetTagsForClient;
- (void)_setShouldSetTagsForClient:(BOOL)arg1;
- (void)_revertOriginalDocumentCheckBoxHit:(id)arg1;
- (BOOL)_shouldRevertOriginalDocument;
- (void)_setShouldRevertOriginalDocument:(BOOL)arg1;
- (BOOL)_showsRevertOriginalDocumentButton;
- (void)_setShowsRevertOriginalDocumentButton:(BOOL)arg1;
- (id)_overwritingAlertSuppressionURL;
- (void)_setOverwritingAlertSuppressionURL:(id)arg1;
- (id)_dontSaveButtonTitle;
- (void)_setDontSaveButtonTitle:(id)arg1;
- (void)dontSave:(id)arg1;
- (void)_setAlertInformativeMessage:(id)arg1;
- (id)_alertInformativeMessage;
- (void)_setAlertMessage:(id)arg1;
- (id)_alertMessage;
- (BOOL)_useAlertStyle;
- (BOOL)_showNewDocumentButton;
- (BOOL)_setShowNewDocumentButtonShouldLayout:(BOOL)arg1;
- (void)_setShowNewDocumentButton:(BOOL)arg1;
- (BOOL)_showNewFolderButton;
- (void)_setCancelButtonTitle:(id)arg1;
- (id)_cancelButtonTitle;
- (BOOL)_okButtonDisabled;
- (void)_setOkButtonDisabled:(BOOL)arg1;
- (BOOL)_bottomControlsDisabled;
- (void)_setBottomControlsDisabled:(BOOL)arg1;
- (void)_updateControlStates;
- (void)_setUseAlertStyle:(BOOL)arg1;
- (void)_loadAlertStyleContentViewIfNecessary;
- (id)_alertStyleContentView;
- (void)_setAlertStyleContentView:(id)arg1;
- (void)cancel:(id)arg1;
- (void)overwriteAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(id)arg3;
- (void)ok:(id)arg1;
- (void)_prepareSeamlessOpening;
- (BOOL)_enableSeamlessOpening;
- (void)_setClientPID:(int)arg1;
- (int)_clientPID;
- (BOOL)_selectionIsASingleFolder;
- (void)dismissWindow:(long long)arg1;
- (void)_cancelAndClose;
- (void)_dismissWindowWithReturnCode:(long long)arg1 willRunSeamlessOpening:(BOOL)arg2;
- (void)_reactToPanelDismissalWithReturnCode:(long long)arg1;
- (void)_hidePreviewPanelIfNecessary;
- (id)seamlessOpenerTransientWindow:(id)arg1 level:(long long *)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)_isModal;
- (BOOL)_resolveUbiquitousConflictsForURLs:(id)arg1;
- (BOOL)_okForOpenMode;
- (void)_didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (BOOL)_okForSaveMode;
- (BOOL)_sendToDelegateValidateURLs:(id)arg1;
- (BOOL)_sendToDelegateValidateFilenameOrURL:(id)arg1 error:(id *)arg2;
- (id)sendToDelegate:(id)arg1 userEnteredFileName:(id)arg2 confirmed:(BOOL)arg3;
- (BOOL)_overwriteExistingFileCheck:(id)arg1;
- (BOOL)_shouldAlertForFileOverwrite:(id)arg1;
- (id)_nameWithRequiredExtensionCheck:(id)arg1 appendExtensionIfRequired:(BOOL)arg2;
- (id)_nameWithStrictRequiredExtensionCheck:(id)arg1;
- (id)_nameWithLooseRequiredExtensionCheck:(id)arg1;
- (long long)runModalForTypes:(id)arg1;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 modalForWindow:(id)arg3 modalDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (long long)runModal;
- (void)_nsSavePanel_SendFileSystemChangeNotification;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2;
- (void)_dismissModeless:(long long)arg1;
- (void)_didEndSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_removeExtraRetainIfNeeded;
- (void)beginWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)beginSheetModalForWindow:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_doMakeKeyAndOrderFront;
- (void)beginForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modelessDelegate:(id)arg4 didEndSelector:(SEL)arg5 contextInfo:(void *)arg6;
- (void)beginSheetForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 modalForWindow:(id)arg4 modalDelegate:(id)arg5 didEndSelector:(SEL)arg6 contextInfo:(void *)arg7;
- (void)orderWindow:(long long)arg1 relativeTo:(long long)arg2;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3;
- (void)_selectFilePath:(id)arg1;
- (void)_setBeginWithFileNames:(id)arg1;
- (id)_beginWithFileNames;
- (void)_loadPreviousModeAndLayout;
- (unsigned long long)_mediaBrowserShownTypes;
- (BOOL)_showFilesForBrowserType:(unsigned long long)arg1;
- (void)_configureForDirectory:(id)arg1 forceDefault:(BOOL)arg2;
- (id)_fileInfoForPaths:(id)arg1 sandboxPermissions:(unsigned long long)arg2;
- (void)_configureForFilename:(id)arg1;
- (void)_saveCurrentPanelState:(long long)arg1;
- (void)_addCurrentDirectoryToRecentPlaces;
- (id)fileBrowserRequestRecentPlaces:(id)arg1;
- (id)makeButtonGroupSpace;
- (id)makeButtonGroupButtonWithButton:(id)arg1;
- (id)makeTouchBar;
- (void)fileBrowserDidFinishPopulation:(id)arg1;
- (void)fileBrowserDidStartPopulation:(id)arg1;
- (void)_stopOpenProgressIndicator;
- (void)_startOpenProgressIndicator;
- (void)_reallyStartOpenProgressIndicator;
- (long long)_delegateCompareFilename:(id)arg1 with:(id)arg2 caseSensitive:(BOOL)arg3;
- (BOOL)_delegateRespondsToCompareFilename;
- (BOOL)fileBrowser:(id)arg1 showAsPackageForURL:(id)arg2;
- (id)fileBrowser:(id)arg1 selectedURLsForProposedSelection:(id)arg2;
- (id)fileBrowserQuerySearchUTIs:(id)arg1;
- (BOOL)_allowSearchingForFolders;
- (BOOL)fileBrowser:(id)arg1 canChooseURL:(id)arg2 isDirectory:(BOOL)arg3 isPackage:(BOOL)arg4;
- (BOOL)fileBrowser:(id)arg1 canChooseURL:(id)arg2;
- (BOOL)fileBrowser:(id)arg1 shouldEnableURL:(id)arg2 isDirectory:(BOOL)arg3 isPackage:(BOOL)arg4 pathExtension:(id)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(id)arg7;
- (BOOL)fileBrowser:(id)arg1 shouldEnableURL:(id)arg2 isDirectory:(BOOL)arg3 isPackage:(BOOL)arg4;
- (BOOL)fileBrowser:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)_shouldEnableURL:(id)arg1;
- (BOOL)_shouldEnableURL:(id)arg1 isDirectoryURLHandler:(CDUnknownBlockType)arg2;
- (BOOL)_canChooseURL:(id)arg1;
- (BOOL)_nonDelegateShouldEnableURL:(id)arg1 isDirectory:(BOOL)arg2;
- (BOOL)_isFileTypeEnabledForURL:(id)arg1;
- (BOOL)_isEnabledItemWithExtensionProvider:(CDUnknownBlockType)arg1 HFSTypeProvider:(CDUnknownBlockType)arg2 UTIProvider:(CDUnknownBlockType)arg3;
- (BOOL)_isDirectoryURL:(id)arg1;
- (BOOL)_isFauxFilePackageURL:(id)arg1;
- (BOOL)_delegateShouldEnableURL:(id)arg1;
- (BOOL)_sendShouldShowFileName:(id)arg1 toDelegate:(id)arg2;
- (BOOL)_sendShouldShowFileName:(id)arg1 fileSchemePath:(id)arg2 toDelegate:(id)arg3;
- (BOOL)_sendShouldEnableURL:(id)arg1 toDelegate:(id)arg2;
- (BOOL)hidesSharedSection;
- (void)setHidesSharedSection:(BOOL)arg1;
- (void)selectKeyViewPrecedingView:(id)arg1;
- (void)selectKeyViewFollowingView:(id)arg1;
- (id)fieldEditor:(BOOL)arg1 forObject:(id)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)_selectURL:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_registerForDragTypes;
- (BOOL)fileBrowser:(id)arg1 acceptsPreviewPanelControl:(id)arg2;
- (void)fileBrowser:(id)arg1 configureForGotoWithFilename:(id)arg2;
- (void)fileBrowser:(id)arg1 scopeChanged:(BOOL)arg2;
- (void)fileBrowserFileListModeChanged:(id)arg1;
- (BOOL)fileBrowserPerformOpenAction:(id)arg1;
- (void)fileBrowserSelectionWillChange:(id)arg1;
- (void)fileBrowserSelectionDidChange:(id)arg1;
- (void)fileBrowser:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (void)fileBrowser:(id)arg1 clickedOnDisabledURL:(id)arg2;
- (BOOL)_handleFileListConfirmedSelection:(id)arg1;
- (void)_handleFileListSelectionChanged:(id)arg1;
- (void)_handleFileListModeChanged:(id)arg1;
- (void)_handleCurrentDirectoryChanged:(id)arg1;
- (void)_sendSelectionDidChange;
- (void)_sendSelectionDidChangeToDelegate:(id)arg1;
- (void)_sendDirectoryDidChange;
- (void)_sendDirectoryDidChange:(id)arg1 toDelegate:(id)arg2;
- (void)_sendDidChangeToDirectoryURL:(id)arg1 toDelegate:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (id)control:(id)arg1 textView:(id)arg2 completions:(id)arg3 forPartialWordRange:(struct _NSRange)arg4 indexOfSelectedItem:(long long *)arg5;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textShouldBeginEditing:(id)arg2;
- (void)hideExtensionButtonClick:(id)arg1;
- (void)selectText:(id)arg1;
- (void)_getOutOfTheWayAndPostNewDocumentAction:(id)arg1;
- (void)newFolder:(id)arg1;
- (BOOL)_handleNameFieldContentsChangedAsGoto;
- (void)keyDown:(id)arg1;
- (BOOL)_shouldHandleAsGotoForTypedString:(id)arg1;
- (BOOL)_isModalWindowOrSheetRunning;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)showGotoWithInitialFilename:(id)arg1;
- (Class)filepathInputControllerClass;
- (id)_perDialogPrefString:(id)arg1;
- (void)_storeUserSetHideExtensionButtonState;
- (BOOL)_fetchUserSetHideExtensionButtonState;
- (void)_storeExpandedFrameSize;
- (void)_storeExpandedFrameSizeValue:(struct CGSize)arg1;
- (void)center;
- (struct CGSize)_fetchExpandedFrameSize:(struct CGSize)arg1;
- (void)_storeExpandedState;
- (BOOL)_fetchExpandedState;
- (void)_writeFileListMode;
- (void)_readFileListMode;
- (BOOL)_setMessageTextFieldValueNoLayout:(id)arg1;
@property(copy) NSString *message;
- (id)_defaultMessageAttributes;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(copy) NSString *nameFieldStringValue;
- (void)_commitPendingEditsIn_nameField;
- (void)_setNameFieldValueLastSet:(id)arg1;
@property(copy) NSString *nameFieldLabel;
@property(copy) NSString *title;
@property(copy) NSString *prompt;
@property BOOL treatsFilePackagesAsDirectories;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setCanDownloadUbiquitousContents:(BOOL)arg1;
- (BOOL)canDownloadUbiquitousContents;
- (void)setCanResolveUbiquitousConflicts:(BOOL)arg1;
- (BOOL)canResolveUbiquitousConflicts;
- (void)setCanChooseFiles:(BOOL)arg1;
- (BOOL)canChooseFiles;
- (void)setCanChooseDirectories:(BOOL)arg1;
- (BOOL)canChooseDirectories;
- (void)setIsExtensionHidden:(BOOL)arg1;
@property(getter=isExtensionHidden) BOOL extensionHidden;
- (void)_handleShowAllExtensionsPrefChanged:(id)arg1;
@property BOOL canSelectHiddenExtension;
@property BOOL canCreateDirectories;
- (void)setResolvesAliases:(BOOL)arg1;
- (BOOL)resolvesAliases;
- (void)_setIsExpandedAndStoreStateDictionaryMessage:(id)arg1;
- (id)_isExpandedAndStoreStateDictionaryMessage;
- (void)toggleIsExpanded:(id)arg1;
- (void)_setIsExpanded:(BOOL)arg1 andStoreState:(BOOL)arg2;
- (void)_setIsExpanded:(BOOL)arg1;
- (void)_sendDelegateWillExpand:(BOOL)arg1;
- (void)_sendPanelWillExpand:(BOOL)arg1 toDelegate:(id)arg2;
- (BOOL)_isExpanded;
@property(readonly, getter=isExpanded) BOOL expanded;
- (void)_reloadDisplayState;
- (void)validateVisibleColumns;
@property id <NSOpenSavePanelDelegate> delegate;
- (void)_refreshDelegateOptions;
- (void)_setSupportedDelegateMethodsWithDelegate:(id)arg1 overrides:(id)arg2;
- (void)_clearDelegateOptions;
- (void)_accessoryViewFrameDidChange:(id)arg1;
- (BOOL)_shouldAutosizeBasedOnAccessoryViewChanges;
- (BOOL)_isUserAccessoryViewFrameChange;
- (void)_discloseAccessoryView:(BOOL)arg1 animate:(BOOL)arg2 accessoryViewChanged:(BOOL)arg3;
- (void)_hideAccessoryViewAnimated:(BOOL)arg1 navViewMinSize:(struct CGSize)arg2;
- (void)_showAccessoryViewAnimated:(BOOL)arg1 navViewMinSize:(struct CGSize)arg2;
- (BOOL)_shouldAnimateAccessoryViewByResizingWindow;
- (void)_discloseAccessoryViewShowingView:(BOOL)arg1 isBeginning:(BOOL)arg2 animate:(BOOL)arg3 navViewMinSize:(struct CGSize)arg4;
- (BOOL)_shouldAnimateAccessoryView;
- (void)_swapImageViewWithAccessoryViewAndShow:(BOOL)arg1;
- (void)_swapAccessoryViewWithImageViewAndDisplay:(BOOL)arg1;
- (id)_accessoryViewImageView;
- (void)_setAccessoryViewImageView:(id)arg1;
- (id)_getAccessoryViewScreenShot;
- (void)_setShouldShowOptionsButton:(BOOL)arg1;
- (BOOL)_shouldShowOptionsButton;
- (void)_changeOptionsButtonTitleIfNecessary;
- (long long)_durationMultiplier;
- (void)_setRemoteAccessoryViewAvailable:(BOOL)arg1;
- (BOOL)_remoteAccessoryViewAvailable;
- (void)_configureAccessoryView;
- (BOOL)_shouldShowAccessoryView;
@property(retain) NSView *accessoryView;
- (struct CGRect)_ensureWindowWithFrame:(struct CGRect)arg1 exceedsMinContentSize:(struct CGSize)arg2 animate:(BOOL)arg3 deltaContentSize:(struct CGSize *)arg4;
- (void)setAccessoryViewDisclosed:(BOOL)arg1;
- (BOOL)isAccessoryViewDisclosed;
- (void)_setAccessoryViewDisclosedVBKVO:(BOOL)arg1;
- (void)_setAccessoryViewDisclosed:(BOOL)arg1;
- (BOOL)_accessoryViewDisclosedVBKVO;
- (BOOL)_accessoryViewDisclosed;
- (void)toggleOptionsView:(id)arg1;
- (BOOL)_shouldAlwaysDislcoseAccessoryView;
- (BOOL)_accessoryViewDisclosureIsSupported;
- (void)_setFrameForTimeMachineMode:(struct CGRect)arg1 animate:(BOOL)arg2;
- (void)_hideWindowForTimeMachineMode:(BOOL)arg1;
@property BOOL showsHiddenFiles;
- (void)_setFauxFilePackageTypes:(id)arg1;
- (id)_fauxFilePackageTypes;
- (void)_setEnabledFileTypes:(id)arg1;
- (id)_enabledFileTypes;
@property BOOL allowsOtherFileTypes;
- (id)_preferredFileNameExtension;
- (BOOL)_isAllowedFileNameExtension:(id)arg1;
- (BOOL)_filenameHasAcceptableFileType:(id)arg1;
- (BOOL)_filenameHasNonEmptyAcceptableFileType:(id)arg1;
@property(copy) NSArray *allowedFileTypes;
- (void)_updateForAllowedFileTypesChangedWithPreviousName:(id)arg1 previousAllowedTypes:(id)arg2 newAllowedFileTypes:(id)arg3;
- (void)setRequiredFileType:(id)arg1;
- (id)requiredFileType;
- (id)_ubiquityContainerURLs:(int)arg1;
- (BOOL)_saveMode;
@property(copy) NSURL *directoryURL;
- (void)setDirectory:(id)arg1;
- (id)directory;
- (id)_directoryPreferringURL:(BOOL)arg1;
- (BOOL)_isSaveFilenameLengthLegal;
- (BOOL)_shouldDoLayerPerformanceUpdates;
- (id)_filenamesAlwaysIncludingDirectories;
- (id)filenames;
- (id)_filenamesWithAlwaysIncludingDirectories:(BOOL)arg1 wantRawURLs:(BOOL)arg2;
- (id)_selectedURLsWithAlwaysIncludingDirectories:(BOOL)arg1 wantRawURLs:(BOOL)arg2;
- (void)_selectNameFieldContentsExcludingExtension;
- (void)_setInitialNameFieldContentsFromPosixName:(id)arg1;
- (void)_setNameFieldContentsFromPosixName:(id)arg1 addToUndo:(BOOL)arg2;
- (void)_setUndoableNameFieldString:(id)arg1;
- (id)_nameFieldContentsAsPosixName;
- (void)_setHiddenExtension:(id)arg1;
- (id)_hiddenExtension;
- (void)_setValidatedPosixName:(id)arg1;
- (id)_validatedPosixName;
- (id)URLs;
- (id)_securityScopedURLs;
- (id)_sandboxExtensions;
- (void)_setSandboxExtensions:(id)arg1;
- (unsigned long long)_sandboxPermissions;
- (void)_setSandboxPermissions:(unsigned long long)arg1;
@property(readonly, copy) NSURL *URL;
- (id)_securityScopedURL;
- (id)filename;
- (void)_handleNameFieldContentsChanged:(id)arg1;
- (BOOL)_updateNameFieldContentsFromHideExtensionButtonState;
- (void)_updateHideExtensionButtonStateFromNameFieldContents;
- (void)_updateExpansionButtonEnabledState;
- (void)_updateNewFolderButtonEnabledState;
- (void)_updateNewDocumentButtonEnabledState;
- (id)_getNewFolderOrDocumentButtonOrNil;
- (void)_updateRevertOriginalDocumentChangesButtonState;
- (void)_updateOptionsButtonState;
- (void)_updateSpaceBetweenExtensionCheckAndNewButton;
- (id)_rootDirectoryURLDefault;
- (id)_directoryURLDefault;
- (id)_defaultDocumentsDirectoryURL;
- (void)_storeRootDirectory;
- (void)_storeCurrentDirectory;
- (id)_lastSavedRootDirectoryFromDefaults;
- (id)_lastSavedDirectoryFromDefaults;
- (id)_customizedPrefKey:(id)arg1;
- (void)_updateOkButtonEnabledState;
- (BOOL)_shouldEnableShareButton;
- (void)_handleGoIntoSelectedDirectory;
- (BOOL)_canGoIntoSelectedDirectory;
- (void)_initPanelCommon;
- (void)_restoreDefaultSettingsForOpenMode;
- (void)_restoreDefaultSettingsForSaveMode;
- (void)_restoreDefaultSettingsCommon;
- (void)_orderRemoteWindow:(long long)arg1 sender:(id)arg2;
- (void)orderOut:(id)arg1;
- (void)_navViewWindowOrderedOut;
- (void)_navViewWindowOrderedIn;
- (BOOL)canBecomeMainWindow;
- (Class)newFolderControllerClass;
- (void)dealloc;
- (void)_selectFirstKeyView;
- (BOOL)_isTitleHidden;
- (struct CGRect)frameRectForContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (struct CGRect)contentRectForFrameRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2;
- (id)initWithContentRect:(struct CGRect)arg1 styleMask:(unsigned long long)arg2 backing:(unsigned long long)arg3 defer:(BOOL)arg4;
- (id)initWithOptions:(id)arg1;
- (BOOL)_shouldUseTexturedAppearanceForSegmentedCellInView:(id)arg1;
- (struct CGRect)startRectForSheet:(id)arg1;
- (double)_startRectForSheetHeightOffset;
- (void)_initializeiCloudOpenPanelBehavior;
- (id)panel;
- (BOOL)_iCloudOpenPanel;
- (void)_init_iCloudOpenPanel:(BOOL)arg1;
- (BOOL)_using_AppCentricNib;
- (void)_initAppCentric:(BOOL)arg1;
- (void)_initSaveMode;
- (void)warmUpPowerbox;
- (void)_setRunningAsASheet:(BOOL)arg1;
- (BOOL)_runningAsASheet;
- (BOOL)_runningAsAService;
- (void)_setRunningAsAService:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 relativeToWindow:(id)arg3;
- (long long)runModalForDirectory:(id)arg1 file:(id)arg2 types:(id)arg3 relativeToWindow:(id)arg4;
- (void)_setIncludeNewFolderButton:(BOOL)arg1;
- (id)_navView;
- (void)_centerOnScreen;
- (void)_layoutViewsVerticallyAndResizeWindowToLastExpandedSize:(BOOL)arg1 accessoryViewHeight:(double)arg2 documentWindow:(id)arg3 navViewMinSize:(struct CGSize)arg4 visibleFrameAvailable:(struct CGRect)arg5;
- (void)_layoutViewsVerticallyAndResizeWindowToLastExpandedSize:(BOOL)arg1;
- (void)_layoutViewsVerticallyAndResize;
- (BOOL)_canSendSynchronousMessagesToRemote;
- (void)_setCanSendSynchronousMessagesToRemote:(BOOL)arg1;
- (void)accessoryViewContainerContentFrameDidChange:(id)arg1;
- (struct CGSize)_getAndAdjustContentMinSizeWithNavViewMinSize:(struct CGSize)arg1 isExpanded:(BOOL)arg2 visibleFrameAvailable:(struct CGRect)arg3;
- (struct CGRect)_visibleFrameAvailableForPanelWithDocumentWindow:(id)arg1;
- (struct CGRect)_visibleFrameAvailableForScreen;
- (struct CGRect)_visibleFrameAvailableForScreenOfWindow:(id)arg1;
- (struct CGRect)_documentWindowFrameForPanelRunningAsASheet:(id)arg1;
- (void)_fixFetchExpandedFrameSizeForVisibleFrameWithDocumentWindow:(id)arg1 navViewMinSize:(struct CGSize)arg2 visibleFrameAvailable:(struct CGRect)arg3;
- (void)_fixupKeyboardLoop;
- (void)_configureBottomControls;
- (double)_appCentricSidebarWidth;
- (void)_configureExtraControls;
- (BOOL)_horizontallyLayoutButton:(id)arg1 followingButton:(BOOL)arg2 relativeTo:(id)arg3 isLTR:(BOOL)arg4 spacingToButton:(double)arg5 outFrame:(struct CGRect *)arg6 invalidate:(BOOL)arg7;
- (void)_configureDirectoryPopup;
- (void)_configureSavePane;
- (void)_configureAlertContentView;
- (void)_configureMessageView;
- (struct CGSize)_initContentView;
- (void)_setupFileBrowserView;
- (void)setContentView:(id)arg1;
- (void)saveFrameUsingName:(id)arg1;
- (struct CGSize)_minNonExpandedFrameSize:(struct CGSize)arg1 visibleFrameAvailable:(struct CGRect)arg2;
- (struct CGSize)_minExpandedFrameSize:(struct CGSize)arg1 visibleFrameAvailable:(struct CGRect)arg2;
- (double)_computeMinPixelHeightForSimpleSavePanel:(BOOL)arg1 navViewMinHeight:(double)arg2 visibleFrameAvailable:(struct CGRect)arg3;
- (double)_titlebarAuxiliaryHeight;
- (double)_computeMinPixelWidthForSimpleSavePanel:(BOOL)arg1 navViewMinWidth:(double)arg2;
- (struct CGSize)_getAndAdjustContentMinSizeForMinFrameSize:(struct CGSize)arg1;
- (void)setMinSize:(struct CGSize)arg1;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityAttributeNames;
- (id)_makeFileBrowserView;
- (id)_makeFinderKitBasedFileBrowser;
- (id)_makeAppkitBasedFileBrowser;
- (void)_unregisterKey:(id)arg1 withViewBridgeService:(id)arg2 onBridge:(id)arg3 shouldRemoveObserversFromBridge:(BOOL)arg4 shouldRemoveObserversFromPanel:(BOOL)arg5;
- (void)_registerKey:(id)arg1 withViewBridgeService:(id)arg2 onBridge:(id)arg3 defaultObject:(id)arg4 owner:(unsigned char)arg5 assertOnNULLForKeys:(id)arg6 shouldObserveBridge:(BOOL)arg7 bridgeShouldObservePanel:(BOOL)arg8;
- (id)valueforUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_trackObservedByVBKey:(id)arg1 remove:(BOOL)arg2;
- (void)_trackObservingVBKey:(id)arg1 remove:(BOOL)arg2;
- (void)_trackRegisteredVBKey:(id)arg1 remove:(BOOL)arg2;
- (void)_setSupportedDelegateMethods:(id)arg1;
- (id)_supportedDelegateMethods;
- (void)_unregisterKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;
- (void)_registerKVOWithViewBridgeService:(id)arg1 onBridge:(id)arg2;
- (id)defaultNSNumberBOOLObjectForKey:(id)arg1;
- (id)defaultObjectForKey:(id)arg1;

@end

