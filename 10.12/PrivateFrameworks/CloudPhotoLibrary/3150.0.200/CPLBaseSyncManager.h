//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformObject.h>

#import <CloudPhotoLibrary/CPLEngineSyncManagerImplementation-Protocol.h>

@class NSProgress, NSString;

@interface CPLBaseSyncManager : CPLPlatformObject <CPLEngineSyncManagerImplementation>
{
    BOOL _foreground;
    NSProgress *_progress;
    unsigned long long _currentState;
    BOOL _closed;
}

- (void).cxx_destruct;
- (void)prepareForClose;
- (void)didProgress:(float)arg1 userInfo:(id)arg2 forState:(unsigned long long)arg3;
- (void)didMoveToState:(unsigned long long)arg1;
- (long long)_baseProgressForState:(unsigned long long)arg1 totalUnits:(long long *)arg2;
- (void)syncSessionDidSucceed;
- (void)syncSessionDidFailWithError:(id)arg1;
- (void)didFinishSyncSession;
- (void)willStartSyncSession;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (void)endClientWork:(id)arg1;
- (void)beginClientWork:(id)arg1;
- (id)initWithAbstractObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

