//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CAVariableGridView.h"

#import "MWOneUpTransitionAware-Protocol.h"
#import "PAShareKitAwareViewProtocol-Protocol.h"
#import "RKTerminationDelegateProtocol-Protocol.h"

@class IPFirstTimeHelpLayer, IPThumbFactoryPhoto, MultiPaneController, NSMutableSet, NSString, PLHolder;

@interface CAPhotoView : CAVariableGridView <RKTerminationDelegateProtocol, MWOneUpTransitionAware, PAShareKitAwareViewProtocol>
{
    IPThumbFactoryPhoto *_imageFactory;
    IPThumbFactoryPhoto *_altImageFactory;
    NSMutableSet *_eventHeaderAvailableCells;
    NSMutableSet *_importHeaderAvailableCells;
    NSMutableSet *_assetImageAvailableCells;
    NSMutableSet *_yearHeaderAvailableCells;
    NSMutableSet *_moreFacesHeaderAvailableCells;
    PLHolder *_displayedPhotos;
    struct IPSelectionList *_selectionList;
    MultiPaneController *_controller;
    BOOL _captionVisible;
    BOOL _rankingVisible;
    BOOL _unviewedIndicatorVisible;
    BOOL _borderVisible;
    BOOL _shadowVisible;
    BOOL _eventHeadersVisible;
    BOOL _dateHeadersVisible;
    BOOL _importHiddenVisible;
    BOOL _hiddenVisible;
    double _bgGray;
    BOOL _showScrollOverlay;
    BOOL _suppressFlags;
    BOOL _hideFlags;
    BOOL _personShowFaceActive;
    IPFirstTimeHelpLayer *_firstTimeLayer;
    NSString *_firstTimeLayerType;
}

@property NSString *firstTimeLayerType; // @synthesize firstTimeLayerType=_firstTimeLayerType;
@property(readonly) BOOL showScrollOverlay; // @synthesize showScrollOverlay=_showScrollOverlay;
@property(nonatomic) BOOL personShowFaceActive; // @synthesize personShowFaceActive=_personShowFaceActive;
@property double bgGray; // @synthesize bgGray=_bgGray;
@property BOOL hideFlags; // @synthesize hideFlags=_hideFlags;
@property BOOL suppressFlags; // @synthesize suppressFlags=_suppressFlags;
@property BOOL importHiddenVisible; // @synthesize importHiddenVisible=_importHiddenVisible;
@property BOOL hiddenVisible; // @synthesize hiddenVisible=_hiddenVisible;
@property BOOL dateHeadersVisible; // @synthesize dateHeadersVisible=_dateHeadersVisible;
@property BOOL eventHeadersVisible; // @synthesize eventHeadersVisible=_eventHeadersVisible;
@property BOOL shadowVisible; // @synthesize shadowVisible=_shadowVisible;
@property BOOL borderVisible; // @synthesize borderVisible=_borderVisible;
@property BOOL unviewedIndicatorVisible; // @synthesize unviewedIndicatorVisible=_unviewedIndicatorVisible;
@property BOOL rankingVisible; // @synthesize rankingVisible=_rankingVisible;
@property BOOL captionVisible; // @synthesize captionVisible=_captionVisible;
@property(retain) IPThumbFactoryPhoto *altImageFactory; // @synthesize altImageFactory=_altImageFactory;
@property(retain) IPThumbFactoryPhoto *imageFactory; // @synthesize imageFactory=_imageFactory;
@property(retain) PLHolder *displayedPhotos; // @synthesize displayedPhotos=_displayedPhotos;
- (void)prepareToShareWithSession:(id)arg1 commit:(char *)arg2;
- (id)_shareKitAnimationDataForVersion:(id)arg1;
- (void)_shareKitPopulateAnimationData:(id)arg1 forPhoto:(struct IPPhotoInfo *)arg2 withLocalKey:(unsigned long long)arg3;
- (BOOL)prefetchUsingThumbnailManager;
- (void)_deleteSelectedItemsSheetEnded:(id)arg1 returnCode:(int)arg2 contextInfo:(id)arg3;
- (void)deleteSelectedItems:(id)arg1 forceMoveToTrash:(BOOL)arg2;
- (void)willOneUpTransition:(id)arg1;
- (struct CGImage *)_createTransitionImageForCellIndex:(long long)arg1;
- (void)_deleteSelectedItems:(BOOL)arg1;
- (BOOL)pasteFromPasteboard:(id)arg1 fromSource:(id)arg2;
- (void)_doCommandPasteImages:(id)arg1 toAlbum:(id)arg2;
- (void)_undoCommandPasteImages:(id)arg1 toAlbum:(id)arg2 originalOrder:(id)arg3 originalSortOrder:(int)arg4 originalSortAscending:(BOOL)arg5;
- (void)_undoRedoMovePhotosToNewEvent:(id)arg1 beginState:(id)arg2 endState:(id)arg3 addedKeys:(id)arg4 removedKeys:(id)arg5 undoManager:(id)arg6;
- (void)_doCommandReorderImages:(id)arg1 toAlbum:(id)arg2 beforePhoto:(struct IPPhotoInfo *)arg3 uniqueOnly:(BOOL)arg4;
- (void)_undoCommandReorderImages:(id)arg1 toAlbum:(id)arg2 beforePhoto:(struct IPPhotoInfo *)arg3 originalOrder:(id)arg4 originalSortOrder:(int)arg5 originalSortAscending:(BOOL)arg6 uniqueOnly:(BOOL)arg7;
- (id)createDragImageForCellIndex:(long long)arg1;
- (BOOL)allowDragOfSelection;
- (BOOL)allowMoveToCellIndex:(long long)arg1 afterPreviousCell:(BOOL)arg2 dragInfo:(id)arg3 newDragDropTargetIndex:(long long *)arg4 newDragMoveTargetIndex:(long long *)arg5;
- (BOOL)allowDropOnCellIndex:(long long *)arg1 dragInfo:(id)arg2 newDragDropTargetIndex:(long long *)arg3 newDragMoveTargetIndex:(long long *)arg4;
- (BOOL)isSelectionAllInOneEvent:(unsigned long long *)arg1;
- (BOOL)wantsDropOrMoveTrackingForAvailableTypes:(id)arg1;
- (void)registerAcceptedDragTypes;
- (void)populatePasteboard:(id)arg1 clearContents:(BOOL)arg2;
- (id)overlayTextForCurrentScroll:(id *)arg1;
- (void)configureOverlay;
- (BOOL)wantsScrollOverlay;
- (BOOL)setFieldValue:(id)arg1 forInlineEdit:(id)arg2 cellKey:(long long)arg3 fieldIndex:(long long)arg4;
- (void)setPhotoRanking:(long long)arg1 oldRanking:(long long)arg2 database:(id)arg3 photoKey:(unsigned int)arg4 state:(id)arg5 undoManager:(id)arg6;
- (void)setEventName:(id)arg1 oldName:(id)arg2 database:(id)arg3 eventKey:(unsigned int)arg4 state:(id)arg5 undoManager:(id)arg6;
- (void)setPhotoCaption:(id)arg1 oldCaption:(id)arg2 database:(id)arg3 photoKey:(unsigned int)arg4 state:(id)arg5 undoManager:(id)arg6;
- (id)fieldValueForInlineEdit:(id)arg1 cellKey:(long long)arg2 fieldIndex:(long long)arg3;
- (long long)fieldCountForInlineEdit:(id)arg1;
- (void)inlineEditCell:(long long)arg1 hitIndex:(long long)arg2 event:(id)arg3;
- (id)selectableCellIndices:(id)arg1;
- (id)selectableCellIndex:(unsigned long long)arg1;
- (BOOL)shouldCheckPaths;
- (void)setShowHiddenPhotos:(BOOL)arg1;
- (BOOL)showHiddenPhotos;
- (void)toggleShowHiddenPhotos:(id)arg1;
- (void)setShowRankings:(BOOL)arg1;
- (BOOL)showRankings;
- (void)toggleShowRankings:(id)arg1;
- (void)setShowCaptions:(BOOL)arg1;
- (BOOL)showCaptions;
- (void)toggleShowCaptions:(id)arg1;
- (void)setShowFilmRolls:(BOOL)arg1;
- (BOOL)showFilmRolls;
- (void)toggleShowFilmRolls:(id)arg1;
- (void)refreshViewFlags:(BOOL)arg1 asIfAlbum:(id)arg2;
- (void)rotateImage:(id)arg1;
- (void)applyRankingToSelection:(id)arg1;
- (void)setRankForSelection:(long long)arg1;
- (void)_undoRedoSetRankingForSelection:(id)arg1 originalRankings:(id)arg2 newRanking:(long long)arg3;
- (void)removePhotoFromShelf:(struct IPPhotoInfo *)arg1;
- (void)addPhotoToShelf:(struct IPPhotoInfo *)arg1;
- (void)removeSelectedPhotosFromShelf:(id)arg1;
- (void)addSelectedPhotosToShelf:(id)arg1;
- (void)undoRedoShelfPhotos:(id)arg1 add:(BOOL)arg2 undoManager:(id)arg3;
- (void)clearShelf:(id)arg1;
- (void)undoRedoClearShelfWithPhotos:(id)arg1 undoManager:(id)arg2;
- (void)setFlaggedMarker:(BOOL)arg1 forPhoto:(struct IPPhotoInfo *)arg2;
- (void)showUserHiddenPhotos:(id)arg1;
- (void)hideUserHiddenPhotos:(id)arg1;
- (void)undoRedoShowHidePhotos:(id)arg1 oldSelection:(id)arg2 newSelection:(id)arg3 undoManager:(id)arg4;
- (BOOL)validateMenuItem:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_moveCutPhotosToCurrentDetailEvent;
- (void)undoRedoPasteCutPhotos:(id)arg1 beginState:(id)arg2 endState:(id)arg3 undoManager:(id)arg4;
- (void)_undoCommandCutImages:(id)arg1 fromAlbum:(id)arg2 sortedArray:(id)arg3 withState:(id)arg4;
- (void)_doCommandCutImages:(id)arg1 fromAlbum:(id)arg2 withState:(id)arg3;
- (void)_setCutList:(id)arg1;
- (void)_undoRedoSetCutList:(id)arg1 oldCutList:(id)arg2 undoManager:(id)arg3;
- (id)stateDictionary;
- (void)resetState:(id)arg1;
- (BOOL)_canPaste;
- (BOOL)_canCopy;
- (BOOL)_canCut;
- (void)makePhotoEventKey:(id)arg1;
- (void)_undoRedoMakeKeyPhotoForRoll:(id)arg1 oldPhoto:(id)arg2 newPhoto:(id)arg3 undoManager:(id)arg4;
- (void)_undoRedoMakeKeyPhotoForAlbum:(id)arg1 oldPhotoUID:(id)arg2 newPhotoUID:(id)arg3 undoManager:(id)arg4;
- (BOOL)_canFlagPhotos;
- (BOOL)_canHideUserHiddenPhotos;
- (BOOL)_canShowUserHiddenPhotos;
- (id)menuForEvent:(id)arg1;
- (BOOL)isCellSelectableAtIndex:(long long)arg1;
- (BOOL)specialClick:(CDStruct_fb816f7b *)arg1 hitSomething:(BOOL)arg2 trackHit:(BOOL)arg3 event:(id)arg4;
- (void)installSelection:(struct IPSelectionList *)arg1;
- (void)broadcastSelectionChanged;
- (void)_clearSelectionList;
- (struct IPSelectionList *)retrieveSelection;
- (void)updateFlagsOnLayer:(id)arg1;
- (int)_commentStateForPhoto:(id)arg1;
- (void)layoutCellVector;
- (void)unifyCellHeightsFromStart:(long long)arg1 toEnd:(long long)arg2 maxHeight:(double)arg3 maxUsedHeight:(double)arg4;
- (void)layoutCellVectorNoColumnChange;
- (double)unifyCellHeightsFromStart:(long long)arg1 toEnd:(long long)arg2;
- (void)populateCellVector;
- (void)populateSharedPhotoStreamCellVector;
- (unsigned long long)photoCount;
- (struct IPPhotoList *)photoList;
- (void)clearFirstTimeLayer;
- (void)updateCellExtrasWithDuration:(double)arg1;
- (void)_populateCellVectorExtras:(struct IPPhotoList *)arg1;
- (struct CGRect)cellRatingMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellEventNameMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellCaptionMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellMetaRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellUsedImageRectForCellAtIndex:(long long)arg1;
- (struct CGRect)cellImageRectForCellAtIndex:(long long)arg1;
- (void)wasUninstalledFromMultiPane:(id)arg1;
- (void)wasInstalledInMultiPane:(id)arg1;
- (void)_markAsViewed:(id)arg1;
- (void)handleDbMessage:(unsigned int)arg1 data1:(void *)arg2 data2:(void *)arg3 data3:(void *)arg4;
- (void)preferencesChanged:(id)arg1;
- (BOOL)redrawCellsOnBackgroundColorChange;
- (void)uncachePhotoWithKey:(unsigned long long)arg1;
- (BOOL)canShowMagnifierForCellAtIndex:(long long)arg1;
- (BOOL)handleKeyDown:(id)arg1 key:(unsigned short)arg2 modifiers:(unsigned long long)arg3;
- (void)cellDoubleClicked:(long long)arg1 eventModifiers:(unsigned long long)arg2;
- (void)showMagnifierForCellAtIndex:(long long)arg1;
- (id)gridCellAvailablePoolForLayer:(id)arg1;
- (Class)gridCellLayerClassForIndex:(long long)arg1 availablePool:(id *)arg2;
- (struct CGSize)imageSizeForCurrentCellSize;
- (struct CGSize)maxCellSize;
- (struct CGSize)minCellSize;
- (void)setCellSize:(struct CGSize)arg1;
- (double)currentMetaDataHeight;
- (void)setCurrentAlbum:(id)arg1;
- (void)setCurrentDB:(id)arg1;
- (void)awakeFromNib;
- (void)setMultiPaneController:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

