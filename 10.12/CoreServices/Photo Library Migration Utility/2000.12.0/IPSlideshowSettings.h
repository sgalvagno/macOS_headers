//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class NSString;

@interface IPSlideshowSettings : NSObject
{
    float mZoom;
    float mPanX;
    float mPanY;
    BOOL mAnimatePanAndZoom;
    float mAnimationStartTime;
    float mAnimationEndTime;
    float mEndZoom;
    float mEndPanX;
    float mEndPanY;
    NSString *mTransitionName;
    NSString *mTransitionIdentifier;
    float mTransitionSpeed;
    int mTransitionDirection;
    NSString *mEffectName;
    NSString *mEffectIdentifier;
    int mSecondsPerSlide;
    unsigned long long mUseDefaultFlags;
    BOOL mFillScreen;
    BOOL mRandomOrder;
    BOOL mLoop;
    BOOL mUseTitles;
    float mFontSize;
    BOOL mUseRankings;
    BOOL mShowControls;
    BOOL mPlayMusic;
    BOOL mFitToMusic;
    BOOL mAutoPanAndZoom;
    float mPanAndZoomMaxZoom;
    NSString *mSongPath;
    NSString *mPlaylistName;
    int mSlideshowFormat;
}

+ (struct CGRect)screenFrame:(int)arg1 screen:(id)arg2;
+ (double)formatAspectRatio:(int)arg1 screenFrame:(struct CGRect)arg2;
+ (id)defaultSettings;
+ (id)defaultTransitionIdentifier;
+ (id)_pluginIdentifierForName:(id)arg1;
- (struct CGSize)imageSize;
- (float)aspectRatioForImage;
- (int)slideshowFormat;
- (void)setSlideshowFormat:(int)arg1;
- (BOOL)showControls;
- (void)setShowControls:(BOOL)arg1;
- (BOOL)useRankings;
- (void)setUseRankings:(BOOL)arg1;
- (float)fontSize;
- (void)setFontSize:(float)arg1;
- (BOOL)useTitles;
- (void)setUseTitles:(BOOL)arg1;
- (BOOL)loop;
- (void)setLoop:(BOOL)arg1;
- (BOOL)randomOrder;
- (void)setRandomOrder:(BOOL)arg1;
- (BOOL)fillScreen;
- (void)setFillScreen:(BOOL)arg1;
- (int)secondsPerSlide;
- (void)setSecondsPerSlide:(int)arg1;
- (id)effectIdentifier;
- (void)setEffectIdentifier:(id)arg1;
- (id)effectName;
- (void)setEffectName:(id)arg1;
- (int)transitionDirection;
- (void)setTransitionDirection:(int)arg1;
- (float)transitionSpeed;
- (void)setTransitionSpeed:(float)arg1;
- (BOOL)transitionIsNone;
- (id)transitionIdentifier;
- (void)setTransitionIdentifier:(id)arg1;
- (id)transitionName;
- (void)setTransitionName:(id)arg1 andID:(BOOL)arg2;
- (id)playlistName;
- (void)setPlaylistName:(id)arg1;
- (id)songTitle;
- (id)songPath;
- (void)setSongPath:(id)arg1;
- (BOOL)fitToMusic;
- (void)setFitToMusic:(BOOL)arg1;
- (BOOL)playMusic;
- (void)setPlayMusic:(BOOL)arg1;
- (BOOL)usingAllDefaultSettings;
- (void)clearUseDefaultFlag:(unsigned long long)arg1;
- (BOOL)getUseDefaultFlag:(unsigned long long)arg1;
- (void)setUseDefaultFlagsExcept:(unsigned long long)arg1;
- (void)setUseDefaultFlag:(unsigned long long)arg1;
- (unsigned long long)useDefaultFlags;
- (void)setUseDefaultFlags:(unsigned long long)arg1;
- (float)endPanY;
- (void)setEndPanY:(float)arg1;
- (float)endPanX;
- (void)setEndPanX:(float)arg1;
- (float)endZoom;
- (void)setEndZoom:(float)arg1;
- (float)animationEndTime;
- (void)setAnimationEndTime:(float)arg1;
- (float)animationStartTime;
- (void)setAnimationStartTime:(float)arg1;
- (BOOL)animatePanAndZoom;
- (void)setAnimatePanAndZoom:(BOOL)arg1;
- (float)panY;
- (void)setPanY:(float)arg1;
- (float)panX;
- (void)setPanX:(float)arg1;
- (float)zoom;
- (void)setZoom:(float)arg1;
- (float)panAndZoomMaxZoom;
- (void)setPanAndZoomMaxZoom:(float)arg1;
- (BOOL)autoPanAndZoom;
- (void)setAutoPanAndZoom:(BOOL)arg1;
- (id)copyWithDefaults;
- (void)encodeWithDictionary:(id)arg1 baseSettings:(id)arg2;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1 baseSettings:(id)arg2;
- (id)initWithAlbum:(id)arg1;
- (id)init;

@end

