//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class CPLNetworkState, CPLNetworkWatcher;

@protocol CPLNetworkWatcherDelegate <NSObject>
- (void)watcher:(CPLNetworkWatcher *)arg1 stateDidChangeToNetworkState:(CPLNetworkState *)arg2;
@end

