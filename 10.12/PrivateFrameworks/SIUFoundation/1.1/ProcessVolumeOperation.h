//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SIUFoundation/ProcessSourceOperation.h>

@interface ProcessVolumeOperation : ProcessSourceOperation
{
}

- (void)main;
- (BOOL)volumeHasRecoveryPartition:(id)arg1;
- (id)booterPartitionForVolume:(id)arg1;
- (BOOL)pathIsServerOSVolume:(id)arg1;
- (BOOL)pathIsInstallMedia:(id)arg1;
- (id)mountRecordFromAttributes:(id)arg1;
- (void)addVolumeAttributesToDictionary:(id)arg1;

@end

