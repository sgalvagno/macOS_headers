//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Slideshows/MRAudioDucker-Protocol.h>
#import <Slideshows/MRAudioPlayer-Protocol.h>

@class AVPlayer, NSArray, NSString;

@interface MRAudioPlayer : NSObject <MRAudioPlayer, MRAudioDucker>
{
    NSArray *_audioItems;
    BOOL _shouldBePlaying;
    BOOL _isMuted;
    AVPlayer *_avPlayer;
    double _duration;
    double _parentDuration;
    double _localTime;
    double _volume;
    double _fadeInDuration;
    double _fadeOutDuration;
    double _duckLevel;
    double _duckInDuration;
    double _duckOutDuration;
    long long _priority;
    double _currentVolume;
}

@property(nonatomic) BOOL isMuted; // @synthesize isMuted=_isMuted;
@property(nonatomic) BOOL shouldBePlaying; // @synthesize shouldBePlaying=_shouldBePlaying;
@property(readonly) double currentVolume; // @synthesize currentVolume=_currentVolume;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) double duckOutDuration; // @synthesize duckOutDuration=_duckOutDuration;
@property(nonatomic) double duckInDuration; // @synthesize duckInDuration=_duckInDuration;
@property(nonatomic) double duckLevel; // @synthesize duckLevel=_duckLevel;
@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) double localTime; // @synthesize localTime=_localTime;
@property(nonatomic) double parentDuration; // @synthesize parentDuration=_parentDuration;
@property(readonly) double duration; // @synthesize duration=_duration;
@property(readonly) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
- (void)resyncAudioItem;
- (void)processWithDuckLevel:(double)arg1;
@property(readonly) double currentDuckLevel;
- (void)syncVolumeToAudioPlaylist:(id)arg1;
- (void)dealloc;
- (id)initWithAudioItems:(id)arg1 andAudioPlaylist:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

