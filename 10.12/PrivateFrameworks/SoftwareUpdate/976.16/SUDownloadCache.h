//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdate/NSFileManagerDelegate-Protocol.h>

@class NSFileManager, NSString;
@protocol OS_dispatch_queue;

@interface SUDownloadCache : NSObject <NSFileManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSFileManager *_fileManager;
}

+ (id)remainingPackageIdentifiersToInstallForProductKey:(id)arg1;
+ (id)partialDownloadURLForURL:(id)arg1;
+ (id)appCacheDirectory;
+ (id)_defaultDirectoryAttributes;
+ (id)_defaultFileAttributes;
+ (id)defaultCache;
+ (id)getCacheQueue;
- (BOOL)emptyCache;
- (BOOL)fileManager:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtURL:(id)arg3 toURL:(id)arg4;
- (id)moveFromDownloadLocation:(id)arg1 toCacheForURL:(id)arg2 error:(id *)arg3;
- (void)setResumeData:(id)arg1 forURL:(id)arg2;
- (id)resumeDataForURL:(id)arg1;
- (unsigned long long)downloadedSizeForProduct:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

