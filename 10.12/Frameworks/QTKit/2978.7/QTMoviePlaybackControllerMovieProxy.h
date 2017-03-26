//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QTKit/QTKeyValueProxy.h>

@class NSArray, NSString, QTMovie;

__attribute__((visibility("hidden")))
@interface QTMoviePlaybackControllerMovieProxy : QTKeyValueProxy
{
    struct {
        unsigned int scrubbing:1;
        unsigned int disabledIdleSystemSleep:1;
        unsigned int disabledIdleDisplaySleep:1;
        unsigned int listeningForSessionResignActive:1;
        unsigned int initialized:1;
        unsigned int playing:1;
    } _internal;
    struct {
        short scrubCount;
        short preventIdleSleepCount;
        short pauseWhenInactiveCount;
    } _configuration;
    struct {
        CDStruct_900afa40 duration;
        CDStruct_900afa40 currentTime;
        CDStruct_977f9211 playbackRange;
        struct CGSize naturalSize;
        float volume;
        NSArray *availableRanges;
        NSArray *loadedRanges;
        NSString *statusString;
        double nominalRate;
        struct {
            unsigned int canChangeVolume:1;
            unsigned int canChangePlayingRate:1;
        } capabilities;
    } _properties;
}

+ (BOOL)automaticallyNotifiesObserversOfPlaying;
+ (BOOL)shouldProxyValueForPlaying;
+ (BOOL)automaticallyNotifiesObserversOfStatusString;
+ (BOOL)shouldProxyValueForStatusString;
+ (BOOL)automaticallyNotifiesObserversOfLoadedRanges;
+ (BOOL)shouldProxyValueForLoadedRanges;
+ (BOOL)automaticallyNotifiesObserversOfAvailableRanges;
+ (BOOL)shouldProxyValueForAvailableRanges;
+ (BOOL)shouldProxyValueForCanChangePlayingRate;
+ (BOOL)shouldProxyValueForCanChangeVolume;
+ (BOOL)automaticallyNotifiesObserversOfMuted;
+ (BOOL)shouldProxyValueForMuted;
+ (BOOL)automaticallyNotifiesObserversOfVolume;
+ (BOOL)shouldProxyValueForVolume;
+ (BOOL)automaticallyNotifiesObserversOfNaturalSize;
+ (BOOL)shouldProxyValueForNaturalSize;
+ (BOOL)automaticallyNotifiesObserversOfRate;
+ (BOOL)shouldProxyValueForRate;
+ (id)keyPathsForValuesAffectingPlaybackRangeRemainingTime;
+ (BOOL)shouldProxyValueForPlaybackRangeRemainingTime;
+ (id)keyPathsForValuesAffectingPlaybackRangeCurrentTime;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackRangeCurrentTime;
+ (BOOL)shouldProxyValueForPlaybackRangeCurrentTime;
+ (id)keyPathsForValuesAffectingPlaybackRangeDuration;
+ (BOOL)shouldProxyValueForPlaybackRangeDuration;
+ (BOOL)automaticallyNotifiesObserversOfPlaybackRange;
+ (BOOL)shouldProxyValueForPlaybackRange;
+ (BOOL)automaticallyNotifiesObserversOfCurrentTime;
+ (BOOL)shouldProxyValueForCurrentTime;
+ (BOOL)automaticallyNotifiesObserversOfDuration;
+ (BOOL)shouldProxyValueForDuration;
+ (BOOL)accessesIvarsDirectly;
+ (id)proxyForMovie:(id)arg1;
+ (void)initialize;
- (void)setPlaying:(BOOL)arg1;
- (BOOL)isPlaying;
- (void)_movieStatusStringDidChange:(id)arg1;
- (id)statusString;
- (void)_movieLoadedRangesDidChange:(id)arg1;
- (id)loadedRanges;
- (void)_movieAvailableRangesDidChange:(id)arg1;
- (id)availableRanges;
- (void)_movieCanChangePlayingRateDidChange:(id)arg1;
- (BOOL)canChangePlayingRate;
- (void)_movieCanChangeVolumeDidChange:(id)arg1;
- (BOOL)canChangeVolume;
- (void)_movieMutedDidChange:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (BOOL)isMuted;
- (void)_movieVolumeDidChange:(id)arg1;
- (void)setVolume:(float)arg1;
- (float)volume;
- (void)_movieNaturalSizeDidChange:(id)arg1;
- (struct CGSize)naturalSize;
- (void)_movieRateDidChange:(id)arg1;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)_updateNominalRate:(double)arg1;
- (id)playbackRangeRemainingTime;
- (void)setPlaybackRangeCurrentTime:(id)arg1;
- (id)playbackRangeCurrentTime;
- (id)playbackRangeDuration;
- (void)_moviePlaybackRangeDidChange;
- (void)setPlaybackRange:(CDStruct_977f9211)arg1;
- (CDStruct_977f9211)playbackRange;
- (void)_movieTimeDidChange:(id)arg1;
- (void)setCurrentTime:(id)arg1;
- (id)currentTime;
- (void)_movieDurationDidChange:(id)arg1;
- (id)duration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_evaluateMovieSleepCharacteristics:(id)arg1;
- (void)disablePauseWhenSessionResignsActive;
- (void)enablePauseWhenSessionResignsActive;
- (void)_sessionDidResignActive:(id)arg1;
- (void)_stopListeningToSessionResignActive;
- (void)_startListeningToSessionResignActive;
- (void)allowIdleSleepWhilePlaying;
- (void)preventIdleSleepWhilePlaying;
- (void)_syncIdleSleepAssertions;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)_stopScrubbing;
- (void)_startScrubbing;
- (void)setTarget:(id)arg1;
@property(readonly, nonatomic) QTMovie *movie; // @dynamic movie;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (id)initWithMovie:(id)arg1;

@end

