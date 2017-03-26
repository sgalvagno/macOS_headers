//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer, AVURLAsset, NSArray, NSImageView, NSMutableArray, NSMutableDictionary, NSTextField, NSTrackingArea, NSURL, NSView, PPGesture, PPGestureRow, PPGestureView;

@interface PPGestureViewController : NSObject
{
    NSArray *mGesturesArray;
    PPGestureView *mGestureTableView;
    AVPlayer *mAVPlayer;
    AVURLAsset *mAVAsset;
    BOOL mPlayMovieWhenReady;
    NSArray *mChapters;
    NSMutableArray *mPlayingChapters;
    long long mPlayingChapterIndex;
    NSMutableDictionary *mAVPlayerObserverDict;
    NSView *mMoviewView;
    NSTextField *mMoviewNotes;
    NSImageView *mMoviewViewPlaceholder;
    NSTrackingArea *mGestureTableTrackingArea;
    PPGestureRow *mSelectedGestureRow;
    BOOL mUseNewUI;
    BOOL mDidRegisterForFirstResponder;
    CDUnknownBlockType mChapterPlaybackCompleteBlock;
    CDUnknownBlockType mUserDidSelectGestureBlock;
}

@property(readonly) PPGestureView *gestureTableView; // @synthesize gestureTableView=mGestureTableView;
@property(readonly) NSArray *gestureRowsArray; // @synthesize gestureRowsArray=mGesturesArray;
@property BOOL useNewUI; // @synthesize useNewUI=mUseNewUI;
- (void)setUserDidSelectGestureBlock:(CDUnknownBlockType)arg1;
- (void)setPlaybackCompleteBlock:(CDUnknownBlockType)arg1;
- (void)setAVAsset:(id)arg1;
- (void)setMoviePlaceHolderImage:(id)arg1;
@property long long selectionType; // @dynamic selectionType;
@property(readonly) PPGesture *selectedGesture; // @dynamic selectedGesture;
- (void)selectGesture:(id)arg1 animate:(BOOL)arg2;
- (void)selectGesture:(id)arg1;
- (void)didSelect;
- (void)willSelect;
- (void)willUnselect;
- (void)willBecomeActive;
- (BOOL)hasGesture:(id)arg1;
- (void)setGesturesArray:(id)arg1;
@property(retain) NSURL *compositeMovieURL; // @dynamic compositeMovieURL;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingArea;
- (void)dealloc;
- (void)awakeFromNib;
- (void)_refreshMovieForGestureNotification:(id)arg1;
- (void)_popUpButtonWillPopUpNotification:(id)arg1;
- (void)_hitTestWithEvent:(id)arg1;
- (void)_selectGestureRow:(id)arg1;
- (BOOL)_selectGestureRow:(id)arg1 animate:(BOOL)arg2;
- (void)_startMovie;

@end

