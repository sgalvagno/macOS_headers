//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <XMPPCore/ThreadedWorkUnit.h>

@class NSLock, NSMutableArray;

@interface ThreadedMetadataSetter : ThreadedWorkUnit
{
    NSLock *_lock;
    NSMutableArray *_paths;
    NSMutableArray *_metadata;
    BOOL _finishedSettingMetadata;
}

- (void)_workerThreadFinished;
- (void)_workerThread;
- (void)setMetadata:(id)arg1 forPath:(id)arg2;
- (void)finishedSettingMetadata;
- (id)init;
- (void)dealloc;

@end

