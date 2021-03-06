//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface TouchBarPlaylistButton : NSButton
{
    struct Playlist *_playlist;
}

+ (id)buttonWithPlaylist:(struct Playlist *)arg1 target:(id)arg2 action:(SEL)arg3;
@property(nonatomic) struct Playlist *playlist; // @synthesize playlist=_playlist;
- (void)handleExitModal:(id)arg1;
- (void)handleEnterModal:(id)arg1;
- (void)removeHandlers;
- (void)installHandlers;
- (void)addSelfObserverWithName:(id)arg1 selector:(SEL)arg2;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

