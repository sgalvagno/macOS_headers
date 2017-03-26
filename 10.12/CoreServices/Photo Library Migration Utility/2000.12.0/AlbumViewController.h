//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class AVSections, AlbumView, ArchiveDocument, DBDocument, NSMutableArray, NSScrollView, NSTimer;

@interface AlbumViewController : NSObject
{
    AlbumView *mAlbumView;
    NSScrollView *mScrollView;
    ArchiveDocument *mDocument;
    BOOL mCreatedDroppedAlbum;
    BOOL _suspendNotify;
    AVSections *mSections;
    NSTimer *_animationTimer;
    NSMutableArray *_itemBeingCollapsed;
    BOOL mNeedInitialSectionSetup;
    float mAnimationStepSize;
    id mDelayedEditModeForAlbumClickedRow;
    id mDelayedSelectForAlbumClickedRow;
    BOOL _oneShotSkipAlbumChange;
    NSMutableArray *mSelectedAlbums;
    BOOL mInitialized;
    BOOL mNameWasEdited;
    DBDocument *mDoc;
    NSTimer *mShowDropPopoverTimer;
    id mDropPopoverRow;
}

- (BOOL)_acceptFilenameDrop:(id)arg1 item:(id)arg2 childIndex:(long long)arg3;
- (void)_importFilesFromDropPromptIfLibrary:(id)arg1 toAlbum:(id)arg2 droppedOnFolder:(id)arg3 beforeIndex:(long long)arg4;
- (void)_importLibrarySheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_importFilesFromDrop:(id)arg1 toAlbum:(id)arg2 droppedOnFolder:(id)arg3 beforeIndex:(long long)arg4;
- (id)_albumForDrop:(id)arg1 droppedOnFolder:(id)arg2 beforeIndex:(long long)arg3;
- (BOOL)_acceptSelectiveImportDrop:(id)arg1 item:(id)arg2 childIndex:(long long)arg3;
- (unsigned long long)_validateFilenameDrag:(id)arg1 proposedItem:(id)arg2 proposedChildIndex:(long long)arg3;
- (void)_setComboAlbumName:(id)arg1;
- (BOOL)_acceptKeyMgrDrop:(id)arg1 item:(id)arg2 childIndex:(long long)arg3;
- (void)_undoRedoImportFromPubSub:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (void)_undoRedoMovePhotosToNewEvent:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (unsigned long long)_validateKeyMgrDrag:(id)arg1 proposedItem:(id)arg2 proposedChildIndex:(long long)arg3 invalidateTimer:(char *)arg4;
- (BOOL)_acceptAlbumDrop:(id)arg1 item:(id)arg2 childIndex:(long long)arg3;
- (unsigned long long)_validateAlbumDrag:(id)arg1 proposedItem:(id)arg2 proposedChildIndex:(long long)arg3;
- (BOOL)_item:(id)arg1 isNotChildOfAlbums:(struct IPAlbumList *)arg2;
- (void)updateSections;
- (void)moveAlbums:(struct IPAlbumList *)arg1 beforeIndex:(long long)arg2 useBeforeAlbum:(id)arg3 newParent:(id)arg4;
- (void)moveAlbum:(id)arg1 beforeIndex:(long long)arg2 newParent:(id)arg3;
- (long long)endRowOfGroup:(unsigned long long)arg1;
- (long long)startRowOfGroup:(unsigned long long)arg1;
- (long long)endIndexOfGroup:(unsigned long long)arg1;
- (long long)startIndexOfGroup:(unsigned long long)arg1;
- (void)_loadPreferences:(id)arg1;
- (void)_setSelectedAlbums:(id)arg1;
- (id)_selectedAlbums;
- (void)_importDone:(id)arg1;
- (void)_importCancel:(id)arg1;
- (void)_undoCommandAddImages:(id)arg1 toAlbum:(id)arg2 fromAlbum:(id)arg3;
- (void)_doCommandAddImages:(id)arg1 inDB:(id)arg2 toAlbum:(id)arg3 fromAlbum:(id)arg4;
- (void)_doCommandAddImagesToShelf:(id)arg1 inDB:(id)arg2;
- (void)undoRedoShelfPhotos:(id)arg1 add:(BOOL)arg2 undoManager:(id)arg3;
- (void)_redoReorderAlbums:(id)arg1 originalState:(id)arg2 selectedAlbum:(id)arg3;
- (void)_undoReorderAlbums:(id)arg1 originalState:(id)arg2 selectedAlbum:(id)arg3;
- (void)_undoRedoChangeAlbumName:(id)arg1 forAlbum:(id)arg2;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)outlineView:(id)arg1 acceptDrop:(id)arg2 item:(id)arg3 childIndex:(long long)arg4;
- (unsigned long long)outlineView:(id)arg1 validateDrop:(id)arg2 proposedItem:(id)arg3 proposedChildIndex:(long long)arg4;
- (BOOL)outlineView:(id)arg1 writeItems:(id)arg2 toPasteboard:(id)arg3;
- (void)outlineView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 byItem:(id)arg4;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldEditTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldExpandItem:(id)arg2;
- (id)outlineView:(id)arg1 nextTypeSelectMatchFromItem:(id)arg2 toItem:(id)arg3 forString:(id)arg4;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (BOOL)outlineView:(id)arg1 isGroupItem:(id)arg2;
- (void)outlineView:(id)arg1 willDisplayOutlineCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (void)outlineView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 item:(id)arg4;
- (BOOL)outlineView:(id)arg1 shouldShowCellExpansionForTableColumn:(id)arg2 item:(id)arg3;
- (BOOL)outlineView:(id)arg1 shouldSelectItem:(id)arg2;
- (void)outlineViewClicked:(id)arg1;
- (void)reloadHappened:(id)arg1;
- (void)reloadWillHappen:(id)arg1;
- (void)albumViewDoubleClick:(id)arg1;
- (void)outlineViewItemWillExpand:(id)arg1;
- (void)outlineViewItemWillCollapse:(id)arg1;
- (id)outlineView:(id)arg1 toolTipForCell:(id)arg2 rect:(struct CGRect *)arg3 tableColumn:(id)arg4 item:(id)arg5 mouseLocation:(struct CGPoint)arg6;
- (BOOL)outlineView:(id)arg1 shouldCollapseItem:(id)arg2;
- (void)selectMultipleRows;
- (id)albumWithName:(id)arg1;
- (void)makeItemVisible:(id)arg1;
- (void)_recursiveExpandItem:(id)arg1 group:(unsigned long long)arg2 subgroup:(id)arg3;
- (void)selectItem:(id)arg1;
- (id)selectedItem;
- (id)createDuplicateOfAlbum:(id)arg1 withName:(id)arg2 select:(BOOL)arg3;
- (void)installAlbum:(id)arg1 beforeIndex:(long long)arg2 startEdit:(BOOL)arg3;
- (id)createNewSlideshowInDB:(id)arg1 withName:(id)arg2 fromSelection:(struct IPPhotoList *)arg3 beforeIndex:(long long)arg4;
- (id)createNewAlbumInDB:(id)arg1 withName:(id)arg2 fromSelection:(struct IPPhotoList *)arg3 beforeIndex:(long long)arg4 albumClass:(Class)arg5;
- (void)_redoCreateNewAlbum:(id)arg1 fromSelection:(id)arg2;
- (void)_undoCreateNewAlbum:(id)arg1 fromSelection:(id)arg2;
- (id)createNewFolderInDB:(id)arg1 withName:(id)arg2 beforeIndex:(long long)arg3 select:(BOOL)arg4 startEdit:(BOOL)arg5 withUndo:(BOOL)arg6;
- (id)createNewFolderInDB:(id)arg1 withName:(id)arg2 beforeIndex:(long long)arg3 select:(BOOL)arg4 startEdit:(BOOL)arg5;
- (void)_redoCreateNewFolder:(id)arg1;
- (void)_undoCreateNewFolder:(id)arg1;
- (void)delayedEditModeForAlbum:(id)arg1;
- (void)delayedSelectForAlbum:(id)arg1;
- (id)createNewAlbumInDB:(id)arg1 withName:(id)arg2 beforeIndex:(long long)arg3 select:(BOOL)arg4 startEdit:(BOOL)arg5 albumClass:(Class)arg6 withUndo:(BOOL)arg7;
- (id)createNewAlbumInDB:(id)arg1 withName:(id)arg2 beforeIndex:(long long)arg3 select:(BOOL)arg4 startEdit:(BOOL)arg5 albumClass:(Class)arg6;
- (void)_redoCreateNewAlbum:(id)arg1;
- (void)_undoCreateNewAlbum:(id)arg1;
- (void)removeAlbums:(struct IPAlbumList *)arg1;
- (void)removeAlbum:(id)arg1;
- (void)_currentAlbumDidSwitch:(id)arg1;
- (void)setOneShotSkipAlbumChange:(BOOL)arg1;
- (BOOL)oneShotSkipAlbumChange;
- (id)document;
- (id)scrollView;
- (id)albumView;
- (id)mainAlbumMgr;
- (id)albumMgr;
- (id)albumMasksForSections;
- (id)sectionWithNumber:(long long)arg1;
- (id)sections;
- (id)mainDB;
- (void)removeDocument:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)init;

@end

