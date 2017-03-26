//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSURL;

@interface LSMDocMetadata : NSObject
{
    NSURL *_databaseURL;
    NSMapTable *_dbConnections;
    long long _version;
}

- (void)releaseManagedObjectContextForCurrentThread;
- (BOOL)isComplete;
- (void)markComplete;
- (BOOL)setEnvironmentProperties:(id)arg1;
- (id)environmentProperties;
- (BOOL)addHelpbookID:(id)arg1;
- (id)allHelpbookIDs;
- (id)objectForAttribute:(id)arg1 docID:(long long)arg2;
- (BOOL)addDocWithAttributes:(id)arg1;
- (id)allFilePaths;
- (long long)numOfDocs;
- (BOOL)_checkDBVersion;
- (BOOL)_createDB;
- (void)reset;
- (void)dealloc;
- (id)initWithDatabaseURL:(id)arg1 error:(id *)arg2;

@end

