//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMNetworkSourceProxy.h>

#import <SystemMigration/MigrationProgressEventsListener-Protocol.h>

@interface SMWindowsNetworkSourceProxy : SMNetworkSourceProxy <MigrationProgressEventsListener>
{
}

- (void)sourceMacInterfaceTypeChanged:(id)arg1 type:(unsigned long long)arg2 appropriateIcon:(unsigned long long)arg3;
- (void)engineStateChanged:(unsigned long long)arg1;
- (void)migrationRequestCompletedState:(unsigned long long)arg1 advancingTo:(unsigned long long)arg2 withErrorsAndWarnings:(id)arg3;
- (void)engineMinutesRemaining:(id)arg1 transferRate:(id)arg2;
- (void)enginePercentDone:(id)arg1;
- (void)engineStatus:(id)arg1 arguments:(id)arg2;
- (void)engineProcessingText:(id)arg1;
- (void)engineStartedWithRequestUUID:(id)arg1 migrationType:(unsigned long long)arg2;
- (void)dumpRemoteLog;
- (void)cancelSizing;
- (id)sizeForComponent:(id)arg1;
- (id)systemProfile;
- (BOOL)sendAction:(id)arg1;

@end

