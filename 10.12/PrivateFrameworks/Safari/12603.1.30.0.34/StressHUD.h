//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPanel.h>

@class NSTimer;

__attribute__((visibility("hidden")))
@interface StressHUD : NSPanel
{
    NSTimer *clock;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)tick;
- (void)becameInactive;
- (void)becameActive;
- (id)init;

@end

