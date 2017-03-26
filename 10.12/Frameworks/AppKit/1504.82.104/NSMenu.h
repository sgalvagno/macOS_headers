//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSAccessibility-Protocol.h>
#import <AppKit/NSAccessibilityElement-Protocol.h>
#import <AppKit/NSCoding-Protocol.h>
#import <AppKit/NSCopying-Protocol.h>
#import <AppKit/NSUserInterfaceItemIdentification-Protocol.h>

@class NSArray, NSFont, NSMenuItem, NSString, NSURL;
@protocol NSMenuDelegate;

@interface NSMenu : NSObject <NSCopying, NSCoding, NSUserInterfaceItemIdentification, NSAccessibilityElement, NSAccessibility>
{
    NSMenu *_supermenu;
    NSString *_title;
    id _itemArray;
    id _extra;
    struct __mFlags {
        unsigned int noAutoenable:1;
        unsigned int inMain:1;
        unsigned int internalPerformAction:1;
        unsigned int condenseSeparators:1;
        unsigned int disabled:1;
        unsigned int ownedByPopUp:1;
        unsigned int delegateNeedsUpdate:1;
        unsigned int delegateUpdateItem:1;
        unsigned int delegateHasKeyEquiv:1;
        unsigned int delegateHasAltKeyEquiv:1;
        unsigned int excludeMarkColumn:1;
        unsigned int isContextualMenu:1;
        unsigned int cmPluginMode:2;
        unsigned int invertedCMPluginTypes:2;
        unsigned int allowsDifferentSelection:1;
        unsigned int noTopPadding:1;
        unsigned int noBottomPadding:1;
        unsigned int hasNCStyle:1;
        unsigned int delegateIsUnsafeUnretained:1;
        unsigned int avoidUsingCache:1;
        unsigned int RESERVED:10;
    } _mFlags;
    NSString *_uiid;
}

+ (void)_drawHelpResultsSeparatorInRect:(struct CGRect)arg1 withClipRect:(struct CGRect)arg2 flags:(unsigned long long)arg3;
+ (void)_drawOverlayForMenuHelpResultsInRect:(struct CGRect)arg1 withClipRect:(struct CGRect)arg2 flags:(unsigned long long)arg3;
+ (double)menuBarHeight;
+ (void)_restoreTornOffMenus;
+ (void)_saveTornOffMenus;
+ (void)_setHelpMenu:(id)arg1;
+ (id)_helpMenu;
+ (id)_currentTrackingInfo;
+ (BOOL)menuBarVisible;
+ (void)setMenuBarVisible:(BOOL)arg1;
+ (void)_setAppleMenuEnabled:(BOOL)arg1;
+ (void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
+ (void)popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
+ (id)_contextMenuTarget;
+ (void)_setContextMenuTarget:(id)arg1;
+ (id)_contextMenuEvent;
+ (void)_setContextMenuEvent:(id)arg1;
+ (long long)menuTypeForEvent:(id)arg1;
+ (id)_menusWithName:(id)arg1;
+ (struct _NSZone *)menuZone;
+ (void)setMenuZone:(struct _NSZone *)arg1;
+ (void)initialize;
+ (id)_captureKeyEquivalentsWithOptions:(unsigned long long)arg1 inMode:(id)arg2 finalEvent:(id *)arg3 status:(long long *)arg4 additionalEventProcessing:(CDUnknownBlockType)arg5;
+ (id)_captureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2;
+ (BOOL)_validateCaptureKeyEquivalentsFromEvent:(id)arg1 withOptions:(unsigned long long)arg2;
+ (BOOL)_canUseKeyEquivalentForMenuItem:(id)arg1;
+ (void)_recursivelyUnregisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2;
+ (void)_recursivelyRegisterMenuItem:(id)arg1 forKeyEquivalentUniquingInMenu:(id)arg2;
+ (void)_recursivelyUnregisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_recursivelyRegisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterMenuItemForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerMenuItemForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterOneMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerOneMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_unregisterMenuForKeyEquivalentUniquing:(id)arg1;
+ (void)_registerMenuForKeyEquivalentUniquing:(id)arg1;
@property(copy) NSString *identifier;
- (void)setUserInterfaceItemIdentifier:(id)arg1;
- (id)userInterfaceItemIdentifier;
- (void)_menuDidChangeAccessibilityOverriddenAttribute:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeRespectsKeyEquivalentWhileHiddenFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeAccessibilityOverriddenAttribute:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 didChangeSeparatorStatusFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeHiddenFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeCustomViewHandlesEventsFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeCustomViewFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeTooltipFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeIndentFrom:(long long)arg2 to:(long long)arg3;
- (void)_menuItem:(id)arg1 didChangeNextItemIsAlternateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeDestructiveFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeAlternateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentModifierMaskFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentVirtualKeyCodeFrom:(unsigned short)arg2 to:(unsigned short)arg3;
- (void)_menuItem:(id)arg1 didChangeKeyEquivalentFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeImageFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeStateImageFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeActionFrom:(SEL)arg2 to:(SEL)arg3;
- (void)_menuItem:(id)arg1 didChangeNewItemsCountFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)_menuItem:(id)arg1 didChangeFontFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeAttributedTitleFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeTitleFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeSubmenuContentsWithSubmenu:(id)arg2;
- (void)_menuItem:(id)arg1 didChangeSubmenuFrom:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 didChangeEnabledStateFrom:(BOOL)arg2 to:(BOOL)arg3;
- (void)_notifySupermenuOfSubmenuChange;
- (void)_limitedViewWantsRedisplayForItem:(id)arg1 inRect:(struct CGRect)arg2;
- (const struct AEDesc *)_contextMenuPluginAEDesc;
- (void)_setContextMenuPluginAEDesc:(const struct AEDesc *)arg1;
@property BOOL showsStateColumn;
- (void)_sendMenuClosedNotification:(BOOL)arg1;
- (void)_sendMenuOpeningNotification:(BOOL)arg1;
- (void)_associateStatusItem:(id)arg1;
- (struct CGRect)_boundsIfOpen;
- (struct CGRect)_confinementRectForScreen:(id)arg1;
- (void)_unlockMenuPosition;
- (void)_lockMenuPosition;
- (void)cancelTracking;
- (void)cancelTrackingWithoutAnimation;
- (void)_cancelTrackingWithFade:(BOOL)arg1;
@property(readonly) NSMenuItem *highlightedItem;
- (void)highlightItem:(id)arg1;
- (void)_informDelegateOfHighlightedItem:(id)arg1;
@property(readonly) double menuBarHeight;
- (BOOL)_menuOwnerCanUseMenuWhenModal;
- (BOOL)_isInMainMenu;
- (void)_recursivelyNoteChangedIsInMainMenu:(BOOL)arg1;
- (void)_recursivelyChangeLayoutDirectionFrom:(long long)arg1 to:(long long)arg2;
- (void)_setMenuOwner:(id)arg1;
- (id)_menuOwner;
- (id)_owningPopUp;
- (void)_setOwnedByPopUp:(id)arg1;
- (BOOL)_ownedByPopUp;
- (void)_performSidebandUpdatersForRole:(long long)arg1 withEventRef:(void *)arg2;
- (void)_removeSidebandMenuUpdaterForToken:(id)arg1;
- (void)_addSidebandMenuUpdaterForRoles:(long long)arg1 token:(id)arg2 priority:(long long)arg3 handler:(CDUnknownBlockType)arg4;
- (long long)_sidebandUpdaterRoles;
- (void)_populate:(BOOL)arg1;
- (BOOL)_populateWithEventRef:(void *)arg1;
- (void)_populateFromSidebandUpdatersOfSign:(int)arg1 withEventRef:(void *)arg2;
- (BOOL)_populateFromDelegateWithEventRef:(void *)arg1;
- (BOOL)_delegateWantsDidFailToOpenCall;
- (BOOL)_delegateWantsPrepareCall;
- (BOOL)_delegateWantsConfinementRectCall;
- (BOOL)_delegateWantsHighlightedCall;
- (BOOL)_delegateWantsCloseCall;
- (BOOL)_delegateWantsOpenCall;
- (BOOL)_delegateWantsPopulateCall;
@property __weak id <NSMenuDelegate> delegate;
- (void)_endHandlingCarbonEvents:(id)arg1;
- (id)_handleCarbonEvents:(const struct EventTypeSpec *)arg1 count:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)_hasPendingCancellationEvent;
@property long long userInterfaceLayoutDirection;
- (long long)_layoutDirectionIfExists;
- (void)_setIndentationWidth:(unsigned long long)arg1;
- (unsigned long long)_indentationWidth;
- (void)_setHasNCStyle:(BOOL)arg1;
- (BOOL)_hasNCStyle;
- (void)_setHasPadding:(BOOL)arg1 onEdge:(unsigned long long)arg2;
- (BOOL)_hasPaddingOnEdge:(unsigned long long)arg1;
- (BOOL)_condensesSeparators;
- (void)_setCondensesSeparators:(BOOL)arg1;
- (id)_menuServicesStartingRequestor;
- (void)_setMenuServicesStartingRequestor:(id)arg1;
- (unsigned long long)_menuPluginTypes;
- (void)_setMenuPluginTypes:(unsigned long long)arg1;
- (long long)_menuPluginInsertionMode;
- (void)_setMenuPluginInsertionMode:(long long)arg1;
@property BOOL allowsContextMenuPlugIns;
- (void)_setAllowsDifferentInitialPopupSelection:(BOOL)arg1;
- (BOOL)_allowsDifferentInitialPopupSelection;
- (long long)_backgroundStyle;
@property(retain) NSFont *font;
- (id)_fontOrNilIfDefault;
@property(readonly) struct CGSize size;
@property double minimumWidth;
- (void)_popUpMenuWithEvent:(id)arg1 forView:(id)arg2;
- (void)_updateEnabled;
- (BOOL)_isEnabled;
- (void)_setEnabled:(BOOL)arg1;
- (void)_setIsContextualMenu:(BOOL)arg1;
- (BOOL)_isContextualMenu;
- (void)_image:(id *)arg1 frame:(struct CGRect *)arg2 forPopUpMenuPositioningItem:(id)arg3 atLocation:(struct CGPoint)arg4 inView:(id)arg5 appearance:(id)arg6;
- (BOOL)popUpMenuPositioningItem:(id)arg1 atLocation:(struct CGPoint)arg2 inView:(id)arg3 appearance:(id)arg4;
- (BOOL)popUpMenuPositioningItem:(id)arg1 atLocation:(struct CGPoint)arg2 inView:(id)arg3;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (BOOL)_servicesMenuItemsAreForContextMenu;
- (id)_insertItemInSortedOrderWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (void)_internalPerformActionForItemAtIndex:(long long)arg1;
- (void)performActionForItemAtIndex:(long long)arg1;
- (struct CGPoint)locationForSubmenu:(id)arg1;
- (void)sizeToFit;
- (BOOL)isAttached;
- (id)attachedMenu;
- (BOOL)isTornOff;
- (id)tearOffMenuRepresentation;
- (void)setTearOffMenuRepresentation:(id)arg1;
- (id)contextMenuRepresentation;
- (id)_contextMenuImpl;
- (void)setContextMenuRepresentation:(id)arg1;
- (id)menuRepresentation;
- (void)_createExtraIvars;
- (unsigned long long)propertiesToUpdate;
- (unsigned long long)_currentMenuUpdateFlags;
- (id)_menuImplIfExists;
- (id)_menuImpl;
- (id)_createMenuImpl;
- (void)setMenuRepresentation:(id)arg1;
- (void)helpRequested:(id)arg1;
- (void)_postItemChangedNotificationButIgnoringItOurselves:(id)arg1;
- (void)itemChanged:(id)arg1;
- (void)_menuChanged;
- (BOOL)menuChangedMessagesEnabled;
- (void)setMenuChangedMessagesEnabled:(BOOL)arg1;
- (void)update;
- (void)_updateForTracking;
- (void)_enableItems;
- (void)_enableItem:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)_setAvoidUsingCache:(BOOL)arg1;
- (void)_performActionWithHighlightingForItemAtIndex:(long long)arg1;
- (void)_performActionWithHighlightingForItemAtIndex:(long long)arg1 sendAccessibilityNotification:(BOOL)arg2;
- (BOOL)_performKeyEquivalentWithDelegate:(id)arg1;
@property BOOL autoenablesItems;
- (void)_setSuppressAutoenabling:(BOOL)arg1;
- (id)itemWithTag:(long long)arg1;
- (id)itemWithTitle:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)_indexOfItemWithPartialTitle:(id)arg1;
- (long long)indexOfItemWithTarget:(id)arg1 andAction:(SEL)arg2;
- (long long)indexOfItemWithSubmenu:(id)arg1;
- (long long)indexOfItemWithRepresentedObject:(id)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
@property(readonly) long long numberOfItems;
- (id)_itemArray;
@property(readonly, copy) NSArray *itemArray;
- (void)setSubmenu:(id)arg1 forItem:(id)arg2;
- (void)removeAllItems;
- (void)removeItem:(id)arg1;
- (void)removeItemAtIndex:(long long)arg1;
- (id)addItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3;
- (id)insertItemWithTitle:(id)arg1 action:(SEL)arg2 keyEquivalent:(id)arg3 atIndex:(long long)arg4;
- (void)addItem:(id)arg1;
- (void)insertItem:(id)arg1 atIndex:(long long)arg2;
@property NSMenu *supermenu;
- (id)_menuName;
- (void)_setMenuName:(id)arg1;
@property(copy) NSString *title;
- (id)_trackingInfo;
- (void)_finishedMakingConnections;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (BOOL)accessibilityPerformRaise;
- (BOOL)accessibilityPerformPress;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformIncrement;
- (BOOL)accessibilityPerformDelete;
- (BOOL)accessibilityPerformDecrement;
- (BOOL)accessibilityPerformConfirm;
- (BOOL)accessibilityPerformCancel;
- (void)setAccessibilityContentSiblingBelow:(id)arg1;
- (id)accessibilityContentSiblingBelow;
- (void)setAccessibilityContentSiblingAbove:(id)arg1;
- (id)accessibilityContentSiblingAbove;
- (void)setNextContentSibling:(id)arg1;
- (id)accessibilityNextContentSibling;
- (void)setPreviousContentSibling:(id)arg1;
- (id)accessibilityPreviousContentSibling;
@property(retain) id accessibilityZoomButton; // @dynamic accessibilityZoomButton;
@property(copy) NSArray *accessibilityWindows; // @dynamic accessibilityWindows;
@property __weak id accessibilityWindow; // @dynamic accessibilityWindow;
@property(retain) id accessibilityWarningValue; // @dynamic accessibilityWarningValue;
@property(copy) NSArray *accessibilityVisibleRows; // @dynamic accessibilityVisibleRows;
@property(copy) NSArray *accessibilityVisibleColumns; // @dynamic accessibilityVisibleColumns;
@property(copy) NSArray *accessibilityVisibleChildren; // @dynamic accessibilityVisibleChildren;
@property struct _NSRange accessibilityVisibleCharacterRange; // @dynamic accessibilityVisibleCharacterRange;
@property(copy) NSArray *accessibilityVisibleCells; // @dynamic accessibilityVisibleCells;
@property long long accessibilityVerticalUnits; // @dynamic accessibilityVerticalUnits;
@property(copy) NSString *accessibilityVerticalUnitDescription; // @dynamic accessibilityVerticalUnitDescription;
@property(retain) id accessibilityVerticalScrollBar; // @dynamic accessibilityVerticalScrollBar;
@property(copy) NSString *accessibilityValueDescription; // @dynamic accessibilityValueDescription;
@property(retain) id accessibilityValue; // @dynamic accessibilityValue;
@property long long accessibilityUnits; // @dynamic accessibilityUnits;
@property(copy) NSString *accessibilityUnitDescription; // @dynamic accessibilityUnitDescription;
@property(copy) NSURL *accessibilityURL; // @dynamic accessibilityURL;
@property __weak id accessibilityTopLevelUIElement; // @dynamic accessibilityTopLevelUIElement;
@property(retain) id accessibilityToolbarButton; // @dynamic accessibilityToolbarButton;
@property __weak id accessibilityTitleUIElement; // @dynamic accessibilityTitleUIElement;
@property(copy) NSString *accessibilityTitle; // @dynamic accessibilityTitle;
@property(copy) NSArray *accessibilityTabs; // @dynamic accessibilityTabs;
@property(copy) NSString *accessibilitySubrole; // @dynamic accessibilitySubrole;
@property(copy) NSArray *accessibilitySplitters; // @dynamic accessibilitySplitters;
@property long long accessibilitySortDirection; // @dynamic accessibilitySortDirection;
- (void)setAccessibilityFrameInParentSpace:(struct CGRect)arg1;
- (struct CGRect)accessibilityFrameInParentSpace;
@property struct CGRect accessibilityFrame; // @dynamic accessibilityFrame;
@property(retain) id accessibilityShownMenu; // @dynamic accessibilityShownMenu;
@property(copy) NSArray *accessibilitySharedTextUIElements; // @dynamic accessibilitySharedTextUIElements;
@property(copy) NSArray *accessibilitySharedFocusElements; // @dynamic accessibilitySharedFocusElements;
@property struct _NSRange accessibilitySharedCharacterRange; // @dynamic accessibilitySharedCharacterRange;
@property(copy) NSArray *accessibilityServesAsTitleForUIElements; // @dynamic accessibilityServesAsTitleForUIElements;
@property(copy) NSArray *accessibilitySelectedTextRanges; // @dynamic accessibilitySelectedTextRanges;
@property struct _NSRange accessibilitySelectedTextRange; // @dynamic accessibilitySelectedTextRange;
@property(copy) NSString *accessibilitySelectedText; // @dynamic accessibilitySelectedText;
@property(copy) NSArray *accessibilitySelectedRows; // @dynamic accessibilitySelectedRows;
- (void)setAccessibilityHeaderGroup:(id)arg1;
- (id)accessibilityHeaderGroup;
@property(copy) NSArray *accessibilitySelectedColumns; // @dynamic accessibilitySelectedColumns;
@property(copy) NSArray *accessibilitySelectedChildren; // @dynamic accessibilitySelectedChildren;
@property(copy) NSArray *accessibilitySelectedCells; // @dynamic accessibilitySelectedCells;
@property(getter=isAccessibilitySelected) BOOL accessibilitySelected; // @dynamic accessibilitySelected;
- (void)setAccessibilitySections:(id)arg1;
- (id)accessibilitySections;
@property(retain) id accessibilitySearchMenu; // @dynamic accessibilitySearchMenu;
@property(retain) id accessibilitySearchButton; // @dynamic accessibilitySearchButton;
@property(copy) NSArray *accessibilityRows; // @dynamic accessibilityRows;
@property struct _NSRange accessibilityRowIndexRange; // @dynamic accessibilityRowIndexRange;
@property(copy) NSArray *accessibilityRowHeaderUIElements; // @dynamic accessibilityRowHeaderUIElements;
@property long long accessibilityRowCount; // @dynamic accessibilityRowCount;
@property(copy) NSString *accessibilityRoleDescription; // @dynamic accessibilityRoleDescription;
@property(copy) NSString *accessibilityRole; // @dynamic accessibilityRole;
@property(getter=isAccessibilityRequired) BOOL accessibilityRequired; // @dynamic accessibilityRequired;
@property(retain) id accessibilityProxy; // @dynamic accessibilityProxy;
@property(copy) NSArray *accessibilityPreviousContents; // @dynamic accessibilityPreviousContents;
@property(copy) NSString *accessibilityPlaceholderValue; // @dynamic accessibilityPlaceholderValue;
@property __weak id accessibilityParent; // @dynamic accessibilityParent;
@property(retain) id accessibilityOverflowButton; // @dynamic accessibilityOverflowButton;
@property long long accessibilityOrientation; // @dynamic accessibilityOrientation;
@property(getter=isAccessibilityOrderedByRow) BOOL accessibilityOrderedByRow; // @dynamic accessibilityOrderedByRow;
@property long long accessibilityNumberOfCharacters; // @dynamic accessibilityNumberOfCharacters;
@property(copy) NSArray *accessibilityNextContents; // @dynamic accessibilityNextContents;
@property(getter=isAccessibilityModal) BOOL accessibilityModal; // @dynamic accessibilityModal;
@property(getter=isAccessibilityMinimized) BOOL accessibilityMinimized; // @dynamic accessibilityMinimized;
@property(retain) id accessibilityMinimizeButton; // @dynamic accessibilityMinimizeButton;
@property(retain) id accessibilityMinValue; // @dynamic accessibilityMinValue;
- (void)setAccessibilityMimicNativeView:(BOOL)arg1;
- (BOOL)isAccessibilityMimicNativeView;
@property __weak id accessibilityMenuBar; // @dynamic accessibilityMenuBar;
@property(retain) id accessibilityMaxValue; // @dynamic accessibilityMaxValue;
@property(retain) id accessibilityMarkerValues; // @dynamic accessibilityMarkerValues;
@property(copy) NSArray *accessibilityMarkerUIElements; // @dynamic accessibilityMarkerUIElements;
@property(copy) NSString *accessibilityMarkerTypeDescription; // @dynamic accessibilityMarkerTypeDescription;
@property long long accessibilityRulerMarkerType; // @dynamic accessibilityRulerMarkerType;
@property(retain) id accessibilityMarkerGroupUIElement; // @dynamic accessibilityMarkerGroupUIElement;
@property(retain) id accessibilityMainWindow; // @dynamic accessibilityMainWindow;
@property(getter=isAccessibilityMain) BOOL accessibilityMain; // @dynamic accessibilityMain;
@property(copy) NSArray *accessibilityLinkedUIElements; // @dynamic accessibilityLinkedUIElements;
@property float accessibilityLabelValue; // @dynamic accessibilityLabelValue;
@property(copy) NSArray *accessibilityLabelUIElements; // @dynamic accessibilityLabelUIElements;
@property long long accessibilityInsertionPointLineNumber; // @dynamic accessibilityInsertionPointLineNumber;
@property long long accessibilityIndex; // @dynamic accessibilityIndex;
@property(retain) id accessibilityIncrementButton; // @dynamic accessibilityIncrementButton;
@property(copy) NSString *accessibilityIdentifier; // @dynamic accessibilityIdentifier;
@property long long accessibilityHorizontalUnits; // @dynamic accessibilityHorizontalUnits;
@property(copy) NSString *accessibilityHorizontalUnitDescription; // @dynamic accessibilityHorizontalUnitDescription;
@property(retain) id accessibilityHorizontalScrollBar; // @dynamic accessibilityHorizontalScrollBar;
@property(getter=isAccessibilityHidden) BOOL accessibilityHidden; // @dynamic accessibilityHidden;
@property(copy) NSString *accessibilityHelp; // @dynamic accessibilityHelp;
@property(retain) id accessibilityHeader; // @dynamic accessibilityHeader;
@property(copy) NSArray *accessibilityHandles; // @dynamic accessibilityHandles;
@property(retain) id accessibilityGrowArea; // @dynamic accessibilityGrowArea;
- (void)setAccessibilityFunctionRowTopLevelElements:(id)arg1;
- (id)accessibilityFunctionRowTopLevelElements;
@property(retain) id accessibilityFullScreenButton; // @dynamic accessibilityFullScreenButton;
@property(getter=isAccessibilityFrontmost) BOOL accessibilityFrontmost; // @dynamic accessibilityFrontmost;
@property(retain) id accessibilityFocusedWindow; // @dynamic accessibilityFocusedWindow;
@property(retain) id accessibilityApplicationFocusedUIElement; // @dynamic accessibilityApplicationFocusedUIElement;
@property(getter=isAccessibilityFocused) BOOL accessibilityFocused; // @dynamic accessibilityFocused;
@property(copy) NSString *accessibilityFilename; // @dynamic accessibilityFilename;
@property __weak id accessibilityExtrasMenuBar; // @dynamic accessibilityExtrasMenuBar;
@property(getter=isAccessibilityExpanded) BOOL accessibilityExpanded; // @dynamic accessibilityExpanded;
- (void)setAccessibilityEnhancedUserInterface:(BOOL)arg1;
- (BOOL)isAccessibilityEnhancedUserInterface;
@property(getter=isAccessibilityEnabled) BOOL accessibilityEnabled; // @dynamic accessibilityEnabled;
@property(getter=isAccessibilityEdited) BOOL accessibilityEdited; // @dynamic accessibilityEdited;
@property(copy) NSString *accessibilityDocument; // @dynamic accessibilityDocument;
@property long long accessibilityDisclosureLevel; // @dynamic accessibilityDisclosureLevel;
@property(getter=isAccessibilityDisclosed) BOOL accessibilityDisclosed; // @dynamic accessibilityDisclosed;
@property(retain) id accessibilityDisclosedRows; // @dynamic accessibilityDisclosedRows;
@property __weak id accessibilityDisclosedByRow; // @dynamic accessibilityDisclosedByRow;
@property(copy) NSString *accessibilityLabel; // @dynamic accessibilityLabel;
- (id)_accessibilityLabel;
@property(retain) id accessibilityDefaultButton; // @dynamic accessibilityDefaultButton;
@property(retain) id accessibilityDecrementButton; // @dynamic accessibilityDecrementButton;
- (void)setAccessibilityCustomChoosers:(id)arg1;
- (id)accessibilityCustomChoosers;
@property(retain) id accessibilityCriticalValue; // @dynamic accessibilityCriticalValue;
@property(copy) NSArray *accessibilityContents; // @dynamic accessibilityContents;
@property(getter=isAccessibilityProtectedContent) BOOL accessibilityProtectedContent; // @dynamic accessibilityProtectedContent;
@property(copy) NSArray *accessibilityColumns; // @dynamic accessibilityColumns;
@property(copy) NSArray *accessibilityColumnTitles; // @dynamic accessibilityColumnTitles;
@property struct _NSRange accessibilityColumnIndexRange; // @dynamic accessibilityColumnIndexRange;
@property(copy) NSArray *accessibilityColumnHeaderUIElements; // @dynamic accessibilityColumnHeaderUIElements;
@property long long accessibilityColumnCount; // @dynamic accessibilityColumnCount;
@property(retain) id accessibilityCloseButton; // @dynamic accessibilityCloseButton;
@property(retain) id accessibilityClearButton; // @dynamic accessibilityClearButton;
- (void)setAccessibilityChildrenInNavigationOrder:(id)arg1;
- (id)accessibilityChildrenInNavigationOrder;
@property(copy) NSArray *accessibilityChildren; // @dynamic accessibilityChildren;
@property(retain) id accessibilityCancelButton; // @dynamic accessibilityCancelButton;
- (void)setAccessibilityAuditIssues:(id)arg1;
- (id)accessibilityAuditIssues;
@property(getter=isAccessibilityAlternateUIVisible) BOOL accessibilityAlternateUIVisible; // @dynamic accessibilityAlternateUIVisible;
@property(copy) NSArray *accessibilityAllowedValues; // @dynamic accessibilityAllowedValues;
@property struct CGPoint accessibilityActivationPoint; // @dynamic accessibilityActivationPoint;
@property(getter=isAccessibilityElement) BOOL accessibilityElement; // @dynamic accessibilityElement;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (id)accessibilityRTFForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityStyleRangeForIndex:(long long)arg1;
- (struct CGSize)accessibilityScreenSizeForLayoutSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityScreenPointForLayoutPoint:(struct CGPoint)arg1;
- (id)accessibilityResultsForSearchPredicate:(id)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct CGSize)accessibilityLayoutSizeForScreenSize:(struct CGSize)arg1;
- (struct CGPoint)accessibilityLayoutPointForScreenPoint:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (id)accessibilityCellForColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)arg1;
- (void)presentControllerAsModalWindow:(id)arg1;
- (void)_setStoryboard:(id)arg1;
- (id)storyboard;
- (void)_recursivelyUpdateKeyEquivalents;
- (id)_getKeyEquivalentUniquerCreatingIfNecessary:(BOOL)arg1;
- (void)_addMenuItemWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_recursiveItemWithTarget:(id)arg1 action:(SEL)arg2 allowNilTarget:(BOOL)arg3;
- (BOOL)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilitySupportsOverriddenAttributes;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

