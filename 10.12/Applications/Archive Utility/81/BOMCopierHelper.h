//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BOMCopierHelper : NSObject
{
    int _srcFD;
    unsigned long long _srcSizeInBytes;
    unsigned long long _srcForkCount;
    unsigned long long _srcDirCount;
    id _delegate;
    unsigned long long _bytesCopied;
    struct BOMSys *_bomSysPtr;
    struct _BOMCopier *_copier;
    NSMutableDictionary *_copyOptions;
    int _copyError;
    NSString *_srcPath;
    BOOL _srcIsDirectory;
    NSString *_srcMountPoint;
    NSString *_dstPath;
    BOOL _dstIsDirectory;
    NSString *_problemPath;
    int _srcDev;
    BOOL _checkedOptions;
    BOOL _checkStandardRootList;
    BOOL _checkStandardList;
    BOOL _checkCrossPlatformRootList;
    BOOL _checkCrossPlatformList;
    BOOL _checkDevNodeCrossing;
    BOOL _checkDevNodeCrossingButCreateDirectories;
    BOOL _checkInvisibles;
    BOOL _checkDotDSStore;
    BOOL _checkSkipUnreadable;
    BOOL _manuallyCopyQuarantineInfo;
    int _nLinks;
    int _maxLinks;
    struct _LinkedFileInfo *_hardlinkList;
    unsigned char _memberEUIDUUID[16];
    int _memberErr;
    struct __CFDictionary *_memberCache;
    unsigned int _memberGIDToCheck;
    BOOL _memberEUIDIsMember;
    BOOL _debug;
    BOOL _verbose;
}

+ (id)bomCopierHelper;
+ (int)copyFrom:(id)arg1 to:(id)arg2 withOptions:(id)arg3 andDelegate:(id)arg4;
+ (void)initialize;
- (id)_askForArchivePassword:(id)arg1;
- (int)performCopy;
- (void)setupmem;
- (void)freemem;
- (void)reset;
- (void)finalize;
- (void)dealloc;
- (id)init;
- (void)setSrcDev:(int)arg1;
- (int)srcDev;
- (void)setDstPath:(id)arg1;
- (id)dstPath;
- (void)setSrcMountPoint:(id)arg1;
- (id)srcMountPoint;
- (void)setSrcPath:(id)arg1;
- (void)setProblemPath:(id)arg1;
- (id)problemPath;
- (id)srcPath;
- (BOOL)manuallyCopyQuarantineInfo;
- (void)setCopyError:(int)arg1;
- (int)copyError;
- (void)setCopyOption:(id)arg1 forKey:(id)arg2;
- (void)setCopyOptions:(id)arg1;
- (id)copyOptions;
- (void)setBomSys:(struct BOMSys *)arg1;
- (struct BOMSys *)bomSys;
- (void)setCopier:(struct _BOMCopier *)arg1;
- (struct _BOMCopier *)copier;
- (unsigned long long)addBytesCopied:(unsigned long long)arg1;
- (void)setBytesCopied:(unsigned long long)arg1;
- (unsigned long long)bytesCopied;
- (void)setSrcDirCount:(unsigned long long)arg1;
- (unsigned long long)srcDirCount;
- (void)setSrcForkCount:(unsigned long long)arg1;
- (unsigned long long)incrementSrcForkCount;
- (unsigned long long)srcForkCount;
- (void)setSrcSizeInBytes:(unsigned long long)arg1;
- (unsigned long long)srcSizeInBytes;
- (void)setSrcFD:(int)arg1;
- (int)srcFD;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setVerbose:(BOOL)arg1;
- (BOOL)verbose;
- (void)setDebug:(BOOL)arg1;
- (BOOL)debug;
- (int)applyInternalFilters:(id)arg1 objectType:(int)arg2 andSize:(long long)arg3 withCachedStatInfo:(struct stat *)arg4 needToCreateSuppressedDirectory:(char *)arg5;
- (void)copyQuarantineInfoFrom:(id)arg1 to:(id)arg2;
- (id)canonicizeDstPath:(const char *)arg1;
- (id)canonicizeSrcPath:(const char *)arg1;
- (int)estimateSizeReturning:(unsigned long long *)arg1 andItems:(unsigned long long *)arg2;
- (int)estimateSizeWithFilteringReturning:(unsigned long long *)arg1 andItems:(unsigned long long *)arg2 andNeedsAuthentication:(char *)arg3;
- (BOOL)isMember:(unsigned int)arg1;
- (BOOL)isAlreadyHardlinked:(struct _ftsent *)arg1 returningError:(int *)arg2;
- (int)setVisibility:(id)arg1 to:(BOOL)arg2;
- (BOOL)visibility:(id)arg1;
- (void)checkGIDMembership:(id)arg1;
- (int)onMainThreadCheckGID:(unsigned int)arg1 forMembership:(char *)arg2;
- (void)getEUIDUUID:(id)arg1;
- (int)onMainThreadGetEUIDUUID;

@end

