//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TCCancelDelegate-Protocol.h>

@class NSCache, NSMutableDictionary, NSMutableSet, NSString;

@interface CMArchiveManager : NSObject <TCCancelDelegate>
{
    BOOL mIsThumbnail;
    BOOL mIsOnPhone;
    unsigned long long mPageCount;
    NSString *mPassphrase;
    NSMutableDictionary *mDrawableCache;
    NSString *mResourcePathPrefix;
    NSMutableSet *mPausedPaths;
    int mHeight;
    int mWidth;
    double mCommitInterval;
    BOOL mAutoCommit;
    NSCache *mStyleObjectCache;
}

+ (id)resourceTypeToExtension:(int)arg1;
+ (id)resourceTypeToMIME:(int)arg1;
+ (int)blipTypeToResourceType:(int)arg1;
@property(copy) NSString *passphrase; // @synthesize passphrase=mPassphrase;
- (BOOL)isCancelled;
- (void)setHTMLWidth:(int)arg1;
- (void)setHTMLHeight:(int)arg1;
- (BOOL)isProgressive;
- (unsigned long long)pageCount;
- (void)setPageCount:(unsigned long long)arg1;
- (BOOL)isThumbnail;
- (void)setIsThumbnail:(BOOL)arg1;
- (id)appendResourcePathToName:(id)arg1;
- (id)resourcePathPrefix;
- (void)setResourcePathPrefix:(id)arg1;
- (id)cssStylesheetString;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)addStyle:(id)arg1;
- (unsigned long long)resourceCount;
- (BOOL)isOnPhone;
- (void)setIsOnPhone:(BOOL)arg1;
- (BOOL)progressiveMappingIsPausedOnPath:(id)arg1;
- (void)restartProgressiveMappingOnPath:(id)arg1;
- (void)pauseProgressiveMappingOnPath:(id)arg1;
- (id)cachedPathForDrawable:(id)arg1;
- (id)addResourceForDrawable:(id)arg1 withType:(int)arg2 drawable:(id)arg3;
- (id)addResource:(id)arg1 withName:(id)arg2;
- (id)addResource:(id)arg1 withType:(int)arg2;
- (id)_validateData:(id)arg1 withType:(int *)arg2;
- (void)setAutoCommit:(BOOL)arg1;
- (void)setCommitInterval:(double)arg1;
- (void)commitDataAtPath:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)pushCssToPath:(id)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithType:(int)arg1;
- (id)copyResourceWithName:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

