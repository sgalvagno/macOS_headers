//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DMRepairDisk : NSObject
{
    id _instPriv;
}

- (int)beginRepairEFISystemPartition:(struct __DADisk *)arg1 mode:(unsigned int)arg2;
- (int)beginPartitionMapRepairForDisk:(struct __DADisk *)arg1;
- (int)beginPartitionMapVerifyForDisk:(struct __DADisk *)arg1;
- (int)beginPartitionMapVerifyOrRepairForDisk:(struct __DADisk *)arg1 repair:(BOOL)arg2;
- (BOOL)canRepairPartitionMapForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)canVerifyPartitionMapForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (int)beginStoragesystemFilesystemRepairForDisk:(struct __DADisk *)arg1;
- (int)beginStoragesystemFilesystemVerifyForDisk:(struct __DADisk *)arg1;
- (int)beginStoragesystemFilesystemVerifyOrRepairForDisk:(struct __DADisk *)arg1 repair:(BOOL)arg2;
- (BOOL)canRepairStoragesystemFilesystemForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (BOOL)canVerifyStoragesystemFilesystemForDisk:(struct __DADisk *)arg1 error:(int *)arg2;
- (int)beginResetUserPermissionsForDisk:(struct __DADisk *)arg1 forUID:(long long)arg2 level:(long long)arg3;
- (id)userAccountsForDisk:(struct __DADisk *)arg1 getError:(int *)arg2;
- (void)cancelCurrentOperation;
- (void)dealloc;
- (id)initWithManager:(id)arg1;
- (id)init;

@end

