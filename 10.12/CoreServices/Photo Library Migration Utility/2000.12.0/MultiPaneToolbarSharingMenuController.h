//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPProgressProtocol-Protocol.h"
#import "NSMenuDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class IPKPopOverMenu, NSArray, NSMutableArray, NSString, NSTimer, ProgressController;

@interface MultiPaneToolbarSharingMenuController : NSObject <NSWindowDelegate, NSMenuDelegate, IPProgressProtocol>
{
    NSMutableArray *_menuItemsWithoutThumbnails;
    IPKPopOverMenu *_currentlyOpenSharingMenu;
    ProgressController *_sharePreparationProgressController;
    NSTimer *_sharePreparationProgressBarDelay;
    BOOL _sharePreparationWasCancelled;
    NSArray *_photoRefsToShare;
}

@property(retain) NSMutableArray *menuItemsWithoutThumbnails; // @synthesize menuItemsWithoutThumbnails=_menuItemsWithoutThumbnails;
@property(retain) IPKPopOverMenu *currentlyOpenSharingMenu; // @synthesize currentlyOpenSharingMenu=_currentlyOpenSharingMenu;
- (BOOL)validateMenuItem:(id)arg1;
- (void)publishedAlbumQuickUpdateFinished:(id)arg1;
- (struct IPPhotoInfo *)thumbnailPhotoForAlbum:(id)arg1;
- (id)thumbnailImageForPhoto:(struct IPPhotoInfo *)arg1 album:(id)arg2 useThumbnail:(BOOL)arg3;
- (void)progressCanceled:(id)arg1;
- (void)showPreparationProgressBar:(id)arg1;
- (void)shareViaShareKit:(id)arg1;
- (void)facebookVideoSelectionAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)beginFacebookVideoSelectionAlertForPublishDestinationInfo:(id)arg1;
- (void)accountConfigurationManager:(struct NSObject *)arg1 didValidateAccountConfiguration:(id)arg2 isValid:(BOOL)arg3 contextInfoPublishToFBProfilePicture:(id)arg4;
- (void)publishToFBProfilePicture:(id)arg1;
- (void)accountConfigurationManager:(struct NSObject *)arg1 didValidateAccountConfiguration:(id)arg2 isValid:(BOOL)arg3 contextInfoPublishToFBWallAlbum:(id)arg4;
- (void)publishToFBWallAlbum:(id)arg1;
- (void)configurePopoverMenu:(id)arg1 forFacebookPublishDestinationInfo:(id)arg2;
- (void)genericAlertDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)showFacebookDestinationPopOverMenu:(id)arg1;
- (void)plugin:(struct NSObject *)arg1 didCheckFlickrPhotostreamUploadLimitsForPhotoRefs:(id)arg2 acceptablePhotoRefs:(id)arg3 contextInfo:(id)arg4;
- (void)accountConfigurationManager:(struct NSObject *)arg1 didValidateAccountConfiguration:(id)arg2 isValid:(BOOL)arg3 contextInfoPublishToFlickrPhotostream:(id)arg4;
- (void)publishToFlickrPhotostream:(id)arg1;
- (void)configurePopoverMenu:(id)arg1 forFlickrPublishDestinationInfo:(id)arg2;
- (void)showFlickrDestinationPopOverMenu:(id)arg1;
- (id)menuItemsForSharedPhotoStreamPublishDestinationInfo:(id)arg1;
- (void)configurePopoverMenu:(id)arg1 forSharedPhotoStreamPublishDestinationInfo:(id)arg2;
- (id)photoStreamPopOverMenuItemsForServiceKey:(id)arg1 username:(id)arg2 action:(SEL)arg3;
- (id)photoStreamPopOverMenuItems;
- (id)photoStreamGridViewItems;
- (id)photoStreamMenuItemsForItemType:(unsigned long long)arg1;
- (id)myPhotoStreamPopOverMenuItem;
- (id)myPhotoStreamMenuItemForItemType:(unsigned long long)arg1;
- (void)showSharedPhotoStreamDestinationPopOverMenu:(id)arg1;
- (void)showSharedPhotoStreamDestinationPopOverWithMenu:(id)arg1 destinationInfo:(id)arg2 photoRefs:(id)arg3;
- (void)validateAccountForPublishDestinationInfo:(id)arg1 selector:(SEL)arg2;
- (void)accountLoginSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)createPublishingAccountForServiceKey:(id)arg1;
- (id)albumsPopOverMenuItemsForServiceKey:(id)arg1 username:(id)arg2 action:(SEL)arg3;
- (id)addItemForPublishedAlbum:(id)arg1 serviceKey:(id)arg2 username:(id)arg3 action:(SEL)arg4;
- (id)menuItemForItemType:(unsigned long long)arg1 accountType:(id)arg2;
- (id)sharingPopOverMenuItemsForServiceKey:(id)arg1 action:(SEL)arg2 itemType:(unsigned long long)arg3;
- (id)sharingMenuItemForShareKitServiceName:(id)arg1 action:(SEL)arg2 target:(id)arg3 itemType:(unsigned long long)arg4;
- (id)sharingMenuItemForShareKitServiceName:(id)arg1 itemType:(unsigned long long)arg2;
- (id)sharingGridItemForShareKitServiceName:(id)arg1;
- (id)sharingPopOverMenuItemForShareKitServiceName:(id)arg1;
- (id)webSharingMenuItemsForItemType:(unsigned long long)arg1;
- (id)webSharingGridMenuItems;
- (id)webSharingPopOverMenuItems;
- (BOOL)publishingIsDisabled;
- (void)displayHUDMessageForPublishingNotification:(id)arg1;
- (void)publishingOperationFinished:(id)arg1;
- (void)accountConfigurationChanged:(id)arg1;
- (void)configurePopoverMenu:(id)arg1 forPublishDestinationInfo:(id)arg2;
- (void)publishedAlbumListDownloaded:(id)arg1;
- (void)popOverWindow:(id)arg1 didEndAnimation:(id)arg2;
- (id)photoStreamUploadSelection;
- (id)validPhotoStreamPhotoRefsForSelection;
- (id)validPhotoStreamPhotoRefsForPhotoList:(struct IPPhotoList *)arg1;
- (id)photoRefsForSelection;
- (id)photoRefsForPhotoList:(struct IPPhotoList *)arg1;
- (struct NSObject *)photoRefFromPhotoInfo:(struct IPPhotoInfo *)arg1;
- (BOOL)onlyPhotosSelected;
- (BOOL)onlyMoviesSelected;
- (BOOL)singleItemSelected;
- (BOOL)multipleItemsSelected;
- (unsigned long long)movieSelectionCount;
- (unsigned long long)photoSelectionCount;
- (unsigned long long)selectionCount;
- (struct IPPhotoList *)selectionPhotoList;
- (struct IPPhotoList *)selectionPhotoListUsingCurrentAlbumIfNoSelection:(int)arg1;
- (id)popOverMenuForMenuItem:(id)arg1;
- (id)albumMenuItemForPublishDestinationInfo:(id)arg1;
- (void)updatePhotoStreamMenuItem:(id)arg1 forAlbum:(id)arg2;
- (void)plugin:(struct NSObject *)arg1 didCheckUploadLimitsForPhotoRefs:(id)arg2 acceptablePhotoRefs:(id)arg3 contextInfo:(id)arg4;
- (void)accountConfigurationManager:(struct NSObject *)arg1 didValidateAccountConfiguration:(id)arg2 isValid:(BOOL)arg3 contextInfoPublishNetAlbums:(id)arg4;
- (void)_postSharedPhotoStreamSettingsDidEnd:(id)arg1 returnCode:(int)arg2 contextInfo:(void *)arg3;
- (void)__uploadPhotos:(id)arg1 fromImageDB:(id)arg2 toSharedStream:(id)arg3 usingPlugin:(struct NSObject *)arg4 isNewStream:(BOOL)arg5 withCaption:(id)arg6;
- (void)_sharedStreamPlugin:(struct NSObject *)arg1 didCheckUploadLimitsForPhotoRefs:(id)arg2 acceptablePhotoRefs:(id)arg3 contextInfo:(id)arg4;
- (void)accountConfigurationManager:(struct NSObject *)arg1 didValidateAccountConfiguration:(id)arg2 isValid:(BOOL)arg3 contextInfoPublishToSharedPhotoStream:(id)arg4;
- (id)_suggestedPublishAlbumTitleForSettings:(id)arg1;
- (void)publishNetAlbums:(id)arg1;
- (void)menuNeedsUpdate:(id)arg1;
- (void)unregisterAsMainMenuSharingItemDelegate;
- (void)registerAsMainMenuSharingItemDelegate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

