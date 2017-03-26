//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLPlatformImplementation-Protocol.h>

@class NSDictionary, NSError, NSString;

@protocol CPLEngineSyncManagerImplementation <CPLPlatformImplementation>
- (void)prepareForClose;
- (void)endClientWork:(NSString *)arg1;
- (void)beginClientWork:(NSString *)arg1;
- (void)setSyncSessionShouldBeForeground:(BOOL)arg1;
- (void)didFinishSyncSession;
- (void)syncSessionDidFailWithError:(NSError *)arg1;
- (void)syncSessionDidSucceed;
- (void)didProgress:(float)arg1 userInfo:(NSDictionary *)arg2 forState:(unsigned long long)arg3;
- (void)didMoveToState:(unsigned long long)arg1;
- (void)willStartSyncSession;
@end

