//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/_AMiTunes8Item.h>

@interface _AMiTunes8Source : _AMiTunes8Item
{
}

- (void)eject;
- (void)update;
@property(readonly) int kind;
@property(readonly) long long freeSpace;
@property(readonly) long long capacity;
- (id)userPlaylists;
- (id)radioTunerPlaylists;
- (id)playlists;
- (id)libraryPlaylists;
- (id)devicePlaylists;
- (id)audioCDPlaylists;

@end

