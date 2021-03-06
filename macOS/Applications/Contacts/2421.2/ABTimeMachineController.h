//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ABTimeMachineSession;

@interface ABTimeMachineController : NSObject
{
    ABTimeMachineSession *_currentSession;
}

+ (id)enUSPOSIXLocale;
+ (id)enUSPOSIXTimestampDateFormatter;
+ (id)stringFromCurrentTime;
+ (BOOL)isSnapshotPathPointingToLiveAddressBook:(id)arg1;
+ (id)snapshotNameFromSnapshotPath:(id)arg1;
+ (id)sharedController;
@property(retain, nonatomic) ABTimeMachineSession *currentSession; // @synthesize currentSession=_currentSession;
- (void).cxx_destruct;
- (void)restoreWithTargetURL:(id)arg1;
- (void)deactivateSnapshotWithURL:(id)arg1;
- (void)activateSnapshotWithURL:(id)arg1;
- (void)requestSnapshotImageForURL:(id)arg1;
- (void)exitTimeMachine;
- (void)startTimeMachine:(id)arg1;
- (id)init;

@end

