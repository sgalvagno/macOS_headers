//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangeShuffleModeCommand : MPRemoteCommand
{
    long long _currentShuffleType;
}

@property(nonatomic) long long currentShuffleType; // @synthesize currentShuffleType=_currentShuffleType;
- (id)newCommandEventWithType:(long long)arg1 preservesShuffleMode:(BOOL)arg2;
- (id)newCommandEventWithType:(long long)arg1;
- (id)_mediaRemoteCommandInfoOptions;

@end

