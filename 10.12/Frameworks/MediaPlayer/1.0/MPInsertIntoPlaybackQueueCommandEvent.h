//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommandEvent.h>

@class MPRemotePlaybackQueue, NSArray;

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent
{
    NSArray *_supportedInsertionPositions;
    long long _insertionPosition;
    MPRemotePlaybackQueue *_playbackQueue;
}

@property(readonly, nonatomic) MPRemotePlaybackQueue *playbackQueue; // @synthesize playbackQueue=_playbackQueue;
@property(readonly, nonatomic) long long insertionPosition; // @synthesize insertionPosition=_insertionPosition;
@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (void).cxx_destruct;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;

@end

