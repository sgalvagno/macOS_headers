//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import <AppKit/FIFinderViewDelegate-Protocol.h>
#import <AppKit/NSNavFileBrowser-Protocol.h>

@class FIFinderView, NSArray, NSDictionary, NSString, NSURL;
@protocol FIFinderViewProtocol, NSNavFileBrowserDelegate;

@interface NSNavFinderViewFileBrowser : NSView <NSNavFileBrowser, FIFinderViewDelegate>
{
    NSDictionary *_recycleInitOptions;
    FIFinderView<FIFinderViewProtocol> *_finderView;
    id <NSNavFileBrowserDelegate> _delegate;
    NSURL *_lastDirectoryURL;
    NSArray *_lastSelectedURLs;
}

+ (int)_mapNSNavFileListModeFromFinderViewStyle:(int)arg1;
+ (int)_mapFinderViewStyleFromNSNavFileListMode:(int)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)_setRecycledFinderView:(id)arg1 withInitOptions:(id)arg2;
+ (id)_copyRecycledFinderViewWithInitOptions:(id)arg1;
+ (id)_findRecycledFinderViewDictionaryWithInitOptions:(id)arg1;
+ (id)_recycledFinderViewsArray;
@property(readonly) FIFinderView *finderView; // @synthesize finderView=_finderView;
@property(copy) NSArray *lastSelectedURLs; // @synthesize lastSelectedURLs=_lastSelectedURLs;
@property(retain) NSURL *lastDirectoryURL; // @synthesize lastDirectoryURL=_lastDirectoryURL;
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
- (id)finderViewQuerySearchUTIs:(id)arg1;
- (BOOL)finderView:(id)arg1 acceptsPreviewPanelControl:(id)arg2;
- (void)hidePreviewPanelIfNecessary;
- (BOOL)showGotoWithInitialFilename:(id)arg1;
- (BOOL)finderView:(id)arg1 showAsPackageForURL:(id)arg2;
- (void)finderView:(id)arg1 configureForGotoWithFilename:(id)arg2;
- (id)finderViewRequestRecentPlaces:(id)arg1;
- (void)finderView:(id)arg1 clickedOnDisabledURL:(id)arg2;
- (void)finderView:(id)arg1 populationInProgress:(BOOL)arg2;
- (BOOL)finderViewOpenSelection:(id)arg1;
- (void)finderViewSelectionDidChange:(id)arg1;
- (void)finderView:(id)arg1 didChangeToDirectoryURL:(id)arg2;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4 pathExtension:(id)arg5 itemHFSType:(unsigned int)arg6 typeIdentifier:(id)arg7;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)finderView:(id)arg1 canSelectURL:(id)arg2 itemIsContainer:(BOOL)arg3 itemIsPackage:(BOOL)arg4;
- (BOOL)finderView:(id)arg1 canSelectURL:(id)arg2;
- (id)seamlessOpener:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)seamlessOpener:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)selectedSeamlessOpenerPreviewItems;
- (void)disableHistoryAndDoWork:(CDUnknownBlockType)arg1;
- (id)documentsDirectoryURL;
@property BOOL hidesSharedSection; // @dynamic hidesSharedSection;
- (void)selectFirstKeyView;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)sidebarContainsURL:(id)arg1;
- (void)refreshContents;
- (BOOL)isNewFolderDialogRunning;
@property BOOL downloadsUbiquitousContents;
@property BOOL showsNewDocumentButton; // @dynamic showsNewDocumentButton;
- (BOOL)canCreateNewFolder;
- (void)makeNewFolderForSavePanel:(id)arg1;
@property id <NSNavFileBrowserDelegate> delegate;
- (void)finderView:(id)arg1 scopeChanged:(BOOL)arg2;
- (void)finderViewViewStyleChanged:(id)arg1;
@property int fileListMode; // @dynamic fileListMode;
@property(copy) NSArray *selectedURLs;
@property(readonly, copy) NSArray *selectedRawURLs;
@property(retain) NSURL *rootDirectoryURL; // @dynamic rootDirectoryURL;
@property(retain) NSURL *directoryURL; // @dynamic directoryURL;
@property BOOL allowsMultipleSelection; // @dynamic allowsMultipleSelection;
@property BOOL allowsExpandingMultipleDirectories; // @dynamic allowsExpandingMultipleDirectories;
@property BOOL canClickDisabledFiles; // @dynamic canClickDisabledFiles;
@property BOOL resolvesAliases; // @dynamic resolvesAliases;
@property BOOL showsHiddenFiles; // @dynamic showsHiddenFiles;
@property BOOL treatsFilePackagesAsDirectories; // @dynamic treatsFilePackagesAsDirectories;
@property(readonly) struct CGSize minimumViewSize;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setSavePanel:(id)arg1;
- (id)savePanel;
- (void)dealloc;
- (double)fauxToolbarHeightForWindow:(id)arg1 appCentric:(BOOL)arg2 hasMessageView:(BOOL)arg3 runningAsAService:(BOOL)arg4 verticalSpaceAbove:(double *)arg5;
- (id)initWithFrame:(struct CGRect)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

