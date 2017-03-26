//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString;

@interface GSStagingPrefix : NSObject
{
    unsigned char _volumeUUID[16];
    int _deviceID;
    NSString *_path;
    NSArray *_pathComponents;
    NSData *_extension;
    long long _sandboxHandle;
}

- (void)cleanupStagingPath:(id)arg1;
- (BOOL)isStagedPath:(id)arg1;
- (id)stagingPathforCreatingAdditionWithError:(id *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)dealloc;
- (void)finalize;
- (void)_connectionWithDaemonWasLost;
- (void)_invalidate:(BOOL)arg1;
- (BOOL)_refreshWithError:(id *)arg1;
- (id)initWithDocumentID:(id)arg1;
- (id)init;

@end

