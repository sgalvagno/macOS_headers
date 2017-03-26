//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScriptingBridge/SBApplication.h>

@class NSArray, NSColor, NSString;

@interface _AMDVDPlayerApplication : SBApplication
{
}

+ (id)application;
- (long long)ejectDvd;
- (long long)obscureCursor;
- (long long)exitClipMode;
- (long long)playNamedVideoClip:(id)arg1;
- (long long)playVideoClip:(long long)arg1;
- (long long)playNamedBookmark:(id)arg1;
- (long long)playBookmark:(long long)arg1;
- (long long)playNextChapter;
- (long long)playPreviousChapter;
- (long long)openDvdVideoFolder:(id)arg1;
- (long long)openVIDEO_TS:(id)arg1;
- (long long)press:(int)arg1;
- (long long)go:(int)arg1;
- (long long)stepDvd;
- (long long)stopDvd;
- (long long)rewindDvd;
- (long long)pauseDvd;
- (long long)playDvd;
- (long long)fastForwardDvd;
@property BOOL disableStatusWindow;
@property(readonly) BOOL clipMode;
@property BOOL loopVideoClip;
@property(readonly, copy) NSArray *videoClipList;
@property(readonly) long long availableVideoClips;
@property(readonly) BOOL extendedVideoClips;
@property(readonly, copy) id hasLastPlayBookmark;
@property(readonly) BOOL hasDefaultBookmark;
@property(readonly, copy) NSArray *bookmarkList;
@property(readonly) long long availableBookmarks;
@property(readonly) BOOL extendedBookmarks;
@property int closedCaptioningDisplay;
@property BOOL closedCaptioning;
@property long long title;
@property long long subtitle;
@property BOOL displayingSubtitle;
@property long long chapter;
@property long long audioTrack;
@property long long angle;
@property(readonly) long long availableTitles;
@property(readonly) long long availableSubtitles;
@property(readonly) long long availableChapters;
@property(readonly) long long availableAudioTracks;
@property(readonly) long long availableAngles;
@property(readonly) struct CGPoint titleExtendedLength;
@property(readonly) long long titleLength;
@property struct CGPoint remainingExtendedTime;
@property long long remainingTime;
@property struct CGPoint elapsedExtendedTime;
@property long long elapsedTime;
@property long long audioVolume;
@property BOOL audioMuted;
@property BOOL viewerFullScreen;
@property int viewerSize;
@property(readonly) struct CGRect viewerScreenBounds;
@property(readonly) struct CGRect viewerBounds;
@property struct CGPoint viewerPosition;
@property BOOL viewerVisibility;
@property(copy) NSColor *infoTextColor;
@property int infoType;
@property(readonly) struct CGRect infoScreenBounds;
@property struct CGRect infoBounds;
@property struct CGPoint infoPosition;
@property BOOL infoVisibility;
@property int controllerDrawer;
@property int controllerOrientation;
@property(readonly) struct CGRect controllerScreenBounds;
@property(readonly) struct CGRect controllerBounds;
@property struct CGPoint controllerPosition;
@property BOOL controllerVisibility;
@property int dvdScanRate;
@property(readonly) int dvdState;
@property(readonly) int activeDvdMenu;
@property(readonly) BOOL dvdMenuActive;
@property(readonly) BOOL hasMedia;
@property BOOL viewerFullScreenMenuOverride;
@property BOOL interactionOverride;
@property(readonly) BOOL hasMultiplePlaybackChoice;
@property(readonly) BOOL appInitializing;
@property(readonly, copy) NSString *version;
- (id)codesForPropertyNames;
- (id)classNamesForCodes;

@end

