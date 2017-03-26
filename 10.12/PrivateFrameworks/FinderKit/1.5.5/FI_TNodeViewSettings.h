//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSColor, NSDictionary, NSImage, NSString;

__attribute__((visibility("hidden")))
@interface FI_TNodeViewSettings : NSObject
{
    double _iconViewIconSize;
    double _iconViewGridSpacing;
    struct CGPoint _iconViewGridOffset;
    double _iconViewTextSize;
    _Bool _iconViewLabelOnBottom;
    _Bool _iconViewShowItemInfo;
    _Bool _iconViewShowIconPreview;
    int _iconViewArrangeBy;
    int _iconViewBackgroundType;
    _Bool _iconViewHideColorWell;
    _Bool _iconViewHideImageWell;
    struct TNSRef<NSColor *, void> _iconViewBackgroundColor;
    struct TNSRef<NSImage *, void> _iconViewBackgroundImage;
    struct TFENode _iconViewBackgroundImageNode;
    struct CGPoint _iconViewScrollPosition;
    double _listViewIconSize;
    double _listViewTextSize;
    _Bool _listViewShowDateModified;
    _Bool _listViewShowDateCreated;
    _Bool _listViewShowDateAdded;
    _Bool _listViewShowDateLastOpened;
    _Bool _listViewShowSize;
    _Bool _listViewShowKind;
    _Bool _listViewShowVersion;
    _Bool _listViewShowComments;
    _Bool _listViewShowLabel;
    _Bool _listViewShowICloudStatus;
    _Bool _listViewUseRelativeDates;
    _Bool _listViewCalculateAllSizes;
    _Bool _listViewShowIconPreview;
    struct TString _listViewSortColumn;
    _Bool _listViewSortOrderAscending;
    struct TNSRef<NSMutableDictionary *, void> _listViewColumnSettings;
    struct CGPoint _listViewScrollPosition;
    _Bool _userHasChangedListViewSort;
    struct TFENode _node;
    _Bool _browseWithCustomViewStyle;
    unsigned int _customViewStyle;
    struct TString _viewStyle;
    _Bool _isLinen;
    _Bool _isAppCentric;
    struct TString _arrangeBy;
    struct TString _sortBy;
    struct TString _groupBy;
    struct unique_ptr<Browser::TIconBrowserSettings, std::__1::default_delete<Browser::TIconBrowserSettings>> _iconBrowserSettings;
    struct unique_ptr<Browser::TListBrowserSettings, std::__1::default_delete<Browser::TListBrowserSettings>> _listBrowserSettings;
    _Bool _refreshing;
    long long _refreshingCount;
    _Bool _settingsChanged;
    struct TNSRef<FI_TListViewSettings *, void> _listViewSettings;
    struct TNSRef<FI_TIconViewSettings *, void> _iconViewSettings;
}

+ (id)identifierForColumnViewOptionsArrangement:(int)arg1;
+ (int)columnViewArrangementForIdentifier:(id)arg1;
+ (unsigned int)propertyForColumnViewOptionsArrangement:(int)arg1;
+ (int)columnViewArrangementForProperty:(unsigned int)arg1;
+ (unsigned int)propertyForListViewColumnIdentifier:(id)arg1;
+ (id)listViewColumnIdentifierForProperty:(unsigned int)arg1;
+ (unsigned int)propertyForIconViewOptionsArrangement:(int)arg1;
+ (int)iconViewArrangementForIdentifier:(id)arg1;
+ (id)identifierForIconViewOptionsArrangement:(int)arg1;
+ (int)iconViewArrangementForProperty:(unsigned int)arg1;
+ (int)columnViewArrangeByForNode:(struct TFENode)arg1;
+ (id)keyPathsForValuesAffectingCanBeByICloudStatus;
+ (id)keyPathsForValuesAffectingCanBeSortedByLabel;
+ (id)keyPathsForValuesAffectingCanBeSortedByKind;
+ (id)keyPathsForValuesAffectingCanBeSortedBySize;
+ (id)keyPathsForValuesAffectingCanBeSortedByDate;
+ (id)keyPathsForValuesAffectingCanBeSortedBySnapToGrid;
+ (id)keyPathsForValuesAffectingCanBeSortedByNone;
+ (id)keyPathsForValuesAffectingIsDesktop;
+ (id)keyPathsForValuesAffectingIsMeetingRoom;
+ (id)keyPathsForValuesAffectingIsSearch;
+ (void)setViewStyleInPrefs:(unsigned int)arg1 forName:(struct TString)arg2;
+ (unsigned int)viewStyleFromPrefsForName:(struct TString)arg1;
+ (void)setSettingsDictionaryInPrefs:(id)arg1 forName:(struct TString)arg2;
+ (id)settingsDictionaryFromPrefsForName:(struct TString)arg1;
+ (void)deleteTagViewSettings:(struct TString)arg1;
+ (void)renameTagViewSettings:(struct TString)arg1 to:(struct TString)arg2;
+ (void)setNodeHasCustomViewStyle:(const struct TFENode *)arg1;
+ (id)settingsForNode:(const struct TFENode *)arg1;
+ (id)keyPathsForValuesAffectingBrowseWithCustomViewStyle;
+ (id)keyPathsForValuesAffectingNodeHasCustomViewStyle;
+ (id)keyPathsForValuesAffectingNodeCustomViewStyleIndex;
+ (id)keyPathsForValuesAffectingCustomViewStyleString;
+ (id)keyPathsForValuesAffectingShowDefaultsButton;
@property(nonatomic) _Bool userHasChangedListViewSort; // @synthesize userHasChangedListViewSort=_userHasChangedListViewSort;
@property(nonatomic) struct CGPoint listViewScrollPosition; // @synthesize listViewScrollPosition=_listViewScrollPosition;
@property(nonatomic) _Bool listViewSortOrderAscending; // @synthesize listViewSortOrderAscending=_listViewSortOrderAscending;
@property(nonatomic) _Bool listViewShowIconPreview; // @synthesize listViewShowIconPreview=_listViewShowIconPreview;
@property(nonatomic) _Bool listViewUseRelativeDates; // @synthesize listViewUseRelativeDates=_listViewUseRelativeDates;
@property(nonatomic) _Bool listViewShowICloudStatus; // @synthesize listViewShowICloudStatus=_listViewShowICloudStatus;
@property(nonatomic) _Bool listViewShowLabel; // @synthesize listViewShowLabel=_listViewShowLabel;
@property(nonatomic) _Bool listViewShowComments; // @synthesize listViewShowComments=_listViewShowComments;
@property(nonatomic) _Bool listViewShowVersion; // @synthesize listViewShowVersion=_listViewShowVersion;
@property(nonatomic) _Bool listViewShowKind; // @synthesize listViewShowKind=_listViewShowKind;
@property(nonatomic) _Bool listViewShowSize; // @synthesize listViewShowSize=_listViewShowSize;
@property(nonatomic) _Bool listViewShowDateAdded; // @synthesize listViewShowDateAdded=_listViewShowDateAdded;
@property(nonatomic) _Bool listViewShowDateLastOpened; // @synthesize listViewShowDateLastOpened=_listViewShowDateLastOpened;
@property(nonatomic) _Bool listViewShowDateCreated; // @synthesize listViewShowDateCreated=_listViewShowDateCreated;
@property(nonatomic) _Bool listViewShowDateModified; // @synthesize listViewShowDateModified=_listViewShowDateModified;
@property(nonatomic) double listViewTextSize; // @synthesize listViewTextSize=_listViewTextSize;
@property(nonatomic) double listViewIconSize; // @synthesize listViewIconSize=_listViewIconSize;
@property(nonatomic) struct CGPoint iconViewScrollPosition; // @synthesize iconViewScrollPosition=_iconViewScrollPosition;
@property(nonatomic) _Bool iconViewHideImageWell; // @synthesize iconViewHideImageWell=_iconViewHideImageWell;
@property(nonatomic) _Bool iconViewHideColorWell; // @synthesize iconViewHideColorWell=_iconViewHideColorWell;
@property(nonatomic) _Bool iconViewShowIconPreview; // @synthesize iconViewShowIconPreview=_iconViewShowIconPreview;
@property(nonatomic) _Bool iconViewShowItemInfo; // @synthesize iconViewShowItemInfo=_iconViewShowItemInfo;
@property(nonatomic) _Bool iconViewLabelOnBottom; // @synthesize iconViewLabelOnBottom=_iconViewLabelOnBottom;
@property(nonatomic) double iconViewTextSize; // @synthesize iconViewTextSize=_iconViewTextSize;
@property(nonatomic) struct CGPoint iconViewGridOffset; // @synthesize iconViewGridOffset=_iconViewGridOffset;
@property(nonatomic) double iconViewGridSpacing; // @synthesize iconViewGridSpacing=_iconViewGridSpacing;
@property(nonatomic) double iconViewIconSize; // @synthesize iconViewIconSize=_iconViewIconSize;
@property(nonatomic) _Bool settingsChanged; // @synthesize settingsChanged=_settingsChanged;
@property(nonatomic) _Bool refreshing; // @synthesize refreshing=_refreshing;
@property(nonatomic) _Bool isAppCentric; // @synthesize isAppCentric=_isAppCentric;
@property(nonatomic) _Bool isLinen; // @synthesize isLinen=_isLinen;
@property(readonly, nonatomic) struct TFENode node; // @synthesize node=_node;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int columnViewArrangeBy; // @dynamic columnViewArrangeBy;
@property(nonatomic) _Bool columnViewPreviewDisclosed; // @dynamic columnViewPreviewDisclosed;
@property(nonatomic) _Bool columnViewShowPreviewColumn; // @dynamic columnViewShowPreviewColumn;
@property(nonatomic) _Bool columnViewShowIconPreview; // @dynamic columnViewShowIconPreview;
@property(nonatomic) _Bool columnViewShowIcons; // @dynamic columnViewShowIcons;
@property(nonatomic) double columnViewPreferredColumnWidth; // @dynamic columnViewPreferredColumnWidth;
@property(nonatomic) double columnViewTextSize; // @dynamic columnViewTextSize;
- (void)saveColumnViewSettings;
@property(readonly, nonatomic) _Bool canBeSortedByICloudStatus; // @dynamic canBeSortedByICloudStatus;
@property(readonly, nonatomic) _Bool canBeSortedByLabel; // @dynamic canBeSortedByLabel;
@property(readonly, nonatomic) _Bool canBeSortedByKind; // @dynamic canBeSortedByKind;
@property(readonly, nonatomic) _Bool canBeSortedBySize; // @dynamic canBeSortedBySize;
@property(readonly, nonatomic) _Bool canBeSortedByDateAdded; // @dynamic canBeSortedByDateAdded;
@property(readonly, nonatomic) _Bool canBeSortedByDate; // @dynamic canBeSortedByDate;
@property(readonly, nonatomic) _Bool canBeSortedBySnapToGrid; // @dynamic canBeSortedBySnapToGrid;
@property(readonly, nonatomic) _Bool canBeSortedByNone; // @dynamic canBeSortedByNone;
- (void)setBackgroundType;
- (int)backgroundType;
@property(copy, nonatomic) NSDictionary *listViewColumnSettings; // @dynamic listViewColumnSettings;
@property(retain, nonatomic) NSString *listViewSortColumn; // @dynamic listViewSortColumn;
- (void)setColumnSortOrderAscending:(id)arg1 ascending:(_Bool)arg2;
- (_Bool)columnSortOrderAscending:(id)arg1;
- (unsigned long long)columnCount;
- (id)columnIDStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForColumnByName:(id)arg1;
- (unsigned long long)indexForColumn:(id)arg1;
- (id)columnNamesInOrder;
- (void)setColumnsOrder:(id)arg1;
- (double)widthForColumnByName:(id)arg1;
- (void)addSpotlightListViewColumn:(id)arg1;
- (_Bool)columnVisibility:(id)arg1;
- (void)setColumnVisibility:(id)arg1 visible:(_Bool)arg2;
- (double)widthForColumn:(id)arg1;
- (void)setColumnWidth:(double)arg1 forColumnByName:(id)arg2;
- (void)setColumnWidth:(double)arg1 forColumn:(id)arg2;
@property(nonatomic) _Bool listViewCalculateAllSizes;
- (void)setListViewIconSizeLarge;
- (void)setListViewIconSizeSmall;
- (void)setIconViewBackgroundImageNode:(const struct TFENode *)arg1;
- (const struct TFENode *)iconViewBackgroundImageNode;
@property(retain, nonatomic) NSImage *iconViewBackgroundImage; // @dynamic iconViewBackgroundImage;
@property(retain, nonatomic) NSColor *iconViewBackgroundColor; // @dynamic iconViewBackgroundColor;
@property(nonatomic) int iconViewBackgroundType; // @synthesize iconViewBackgroundType=_iconViewBackgroundType;
@property(nonatomic) int iconViewArrangeBy; // @synthesize iconViewArrangeBy=_iconViewArrangeBy;
@property(readonly, nonatomic) double iconViewMinIconSize;
@property(readonly, nonatomic) double iconViewMaxIconSize;
- (void)useAsDefaults;
- (void)restoreToDefaults;
@property(readonly, nonatomic) _Bool showDefaultsButton;
@property(readonly, nonatomic) _Bool isDesktop; // @dynamic isDesktop;
@property(readonly, nonatomic) _Bool isMeetingRoom; // @dynamic isMeetingRoom;
@property(readonly, nonatomic) _Bool isSearch; // @dynamic isSearch;
@property(nonatomic) NSString *windowName;
@property(nonatomic) NSString *viewStyleForViewOptions;
@property(retain, nonatomic) NSString *viewStyle; // @dynamic viewStyle;
- (id)validateViewStyle:(id)arg1;
- (void)checkIfUsingDefaultSettings;
- (_Bool)showIconPreviewForViewStyle:(unsigned int)arg1;
- (void)saveListViewSettings;
- (void)saveIconViewSettings;
- (_Bool)isAllMyFilesTarget;
@property(readonly, nonatomic) _Bool nodeCanSort;
@property(readonly, nonatomic) _Bool sortByNoneSupported;
@property(readonly, nonatomic) _Bool nodeCanArrangeByVolume;
@property(readonly, nonatomic) _Bool nodeCanArrangeByLabel;
@property(readonly, nonatomic) _Bool nodeCanArrangeBySize;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateCreated;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateModified;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateAdded;
@property(readonly, nonatomic) _Bool nodeCanArrangeByDateLastOpened;
@property(readonly, nonatomic) _Bool nodeCanArrangeByAppCategory;
@property(readonly, nonatomic) _Bool nodeCanArrangeByApplication;
@property(readonly, nonatomic) _Bool nodeCanArrangeByTags;
@property(readonly, nonatomic) _Bool nodeCanArrangeByKind;
@property(readonly, nonatomic) _Bool nodeCanArrangeByName;
@property(retain, nonatomic) NSString *arrangeBy; // @dynamic arrangeBy;
@property(retain, nonatomic) NSString *sortBy; // @dynamic sortBy;
- (_Bool)isValidSortBy:(id)arg1;
@property(retain, nonatomic) NSString *groupBy;
- (_Bool)isValidGrouping:(id)arg1;
@property(readonly, nonatomic) _Bool isGrouping;
@property(readonly, nonatomic) _Bool fxShowCustomViewStylePopup;
@property(nonatomic) int nodeCustomViewStyleIndex;
@property(nonatomic) _Bool nodeCanHaveCustomViewStyle;
@property(nonatomic) _Bool nodeHasCustomViewStyle;
@property(readonly, retain, nonatomic) NSString *customViewStyleString;
@property(nonatomic) unsigned int customViewStyle; // @synthesize customViewStyle=_customViewStyle;
@property(nonatomic) _Bool browseWithCustomViewStyle; // @synthesize browseWithCustomViewStyle=_browseWithCustomViewStyle;
- (id)init;
- (id)initWithNode:(const struct TFENode *)arg1;
- (void)refreshSettings:(_Bool)arg1;
- (void)refreshDesktopSettings;
- (void)refreshColumnViewSettings;
- (void)refreshListViewSettings;
- (void)refreshIconViewSettings;
- (void)saveBrowseWithCustomViewStyle:(_Bool)arg1;
- (_Bool)loadBrowseWithCustomViewStyle;
- (void)saveCustomViewStyle:(unsigned int)arg1;
- (unsigned int)loadCustomViewStyle;

@end

