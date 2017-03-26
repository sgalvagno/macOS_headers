//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class NSURL;

@interface MPCreateRadioStationCommandEvent : MPRemoteCommandEvent
{
    BOOL _requestingPlaybackInitialization;
    NSURL *_stationURL;
}

@property(readonly, nonatomic, getter=isRequestingPlaybackInitialization) BOOL requestingPlaybackInitialization; // @synthesize requestingPlaybackInitialization=_requestingPlaybackInitialization;
@property(readonly, nonatomic) NSURL *stationURL; // @synthesize stationURL=_stationURL;
- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

