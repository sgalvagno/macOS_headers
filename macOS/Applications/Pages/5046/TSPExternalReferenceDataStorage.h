//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPFileDataStorage.h"

@class NSData, NSURL, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    NSData *_bookmarkData;
    BOOL _isReachable;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (BOOL)isReadable;
- (id)AVAssetWithOptions:(id)arg1 forData:(id)arg2;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)resolveURLWithAccessor:(CDUnknownBlockType)arg1;
- (id)newBookmarkDataRelativeToURL:(id)arg1;
- (id)bookmarkDataForURL:(id)arg1 relativeToURL:(id)arg2;
- (id)bookmarkDataForArchiver:(id)arg1;
- (id)resolveBookmarkData;
- (BOOL)archiveInfoMessage:(struct DataInfo *)arg1 archiver:(id)arg2 packageWriter:(id)arg3;
- (id)initWithBookmarkData:(id)arg1 context:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

