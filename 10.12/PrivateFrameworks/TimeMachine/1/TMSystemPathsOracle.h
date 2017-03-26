//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSURL, TMPathTreeNode;
@protocol TMSystemPathsProvider;

@interface TMSystemPathsOracle : NSObject
{
    NSURL *_mountPointURL;
    NSLock *_discoveryLock;
    TMPathTreeNode *_systemPathsTreeRoot;
    id <TMSystemPathsProvider> _pathsProvider;
}

+ (id)_knownSystemInstalledBundleExtensions;
@property(retain) id <TMSystemPathsProvider> pathsProvider; // @synthesize pathsProvider=_pathsProvider;
- (void)enumeratePathsWithOptions:(unsigned int)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePathsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)discoverSystemPathsWithOptions:(unsigned int)arg1 cancelBlock:(CDUnknownBlockType)arg2;
- (BOOL)discoverSystemPaths:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initForVolumeAtURL:(id)arg1;

@end

