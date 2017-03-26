//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, NSURL;

@interface TMDisk : NSObject
{
    NSURL *_mountPointURL;
    struct __DADisk *_diskRef;
    struct statfs _stfs;
    NSDictionary *_diskArbDescription;
    unsigned long long _knownTraits;
    unsigned long long _traits;
}

+ (void)enumerateMountedDisksUsingBlock:(CDUnknownBlockType)arg1;
+ (id)diskForMountPoint:(id)arg1 error:(id *)arg2;
+ (id)diskForMountPoint:(id)arg1;
@property(readonly) struct statfs statfs; // @synthesize statfs=_stfs;
@property(readonly) NSURL *mountPointURL; // @synthesize mountPointURL=_mountPointURL;
- (BOOL)configureReconnectTimeoutsAndQOSForBackup;
- (BOOL)_supportsBackupDiskImages;
@property(readonly) BOOL supportsBackupDiskImages;
- (BOOL)_supportsBackupStores;
@property(readonly) BOOL supportsBackupStores;
- (BOOL)_isAppleBootPartition;
@property(readonly) BOOL isAppleBootPartition;
- (BOOL)_backedByDiskImage;
@property(readonly) BOOL backedByDiskImage;
- (BOOL)_includedByDefault;
@property(readonly) BOOL includedByDefault;
- (BOOL)_eligibleForBackup;
@property(readonly) BOOL eligibleForBackup;
- (BOOL)_answerForTrait:(unsigned long long)arg1 question:(CDUnknownBlockType)arg2;
@property(readonly) NSNumber *bytesUsed;
@property(readonly) NSNumber *bytesFree;
@property(readonly) NSNumber *capacity;
@property(readonly) BOOL isWindows;
@property(readonly) BOOL isAFP;
@property(readonly) BOOL isSMB;
@property(readonly) BOOL isNTFS;
@property(readonly) BOOL isFAT;
@property(readonly) BOOL isEXFAT;
@property(readonly) BOOL isXSAN;
@property(readonly) BOOL isHFSExtended;
@property(readonly) BOOL isHFS;
@property(readonly) BOOL mountedReadOnly;
@property(readonly) BOOL mountedVisibly;
@property(readonly) BOOL mountedLocally;
@property(readonly) BOOL isStartupDisk;
@property(readonly) BOOL isEncrypted;
- (id)volumeUUID:(id *)arg1;
@property(readonly) NSString *volumeUUID;
@property(readonly) NSString *deviceNode;
@property(readonly) int device;
@property(readonly) NSDictionary *diskArbDescription;
@property(readonly) struct __DADisk *diskRef;
@property(readonly) NSString *mountPoint;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (id)initWithStatfs:(struct statfs)arg1 diskRef:(struct __DADisk *)arg2;

@end

