//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryPrivate/LiLibrary-Protocol.h>

@class LiStringAtomCache, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_semaphore;

@interface LiLibrary : NSObject <LiLibrary>
{
    LiStringAtomCache *_stringAtomCache;
    BOOL _isClosing;
    unsigned char _openMode;
    unsigned char _libraryType;
    BOOL _inTransaction;
    NSString *_fileIdentifier;
    NSURL *_libraryURL;
    NSString *_databasePath;
    NSMutableDictionary *_tableClassesByTableName;
    NSMutableDictionary *_tablesByTableName;
    NSMutableDictionary *_tablesByTableId;
    NSObject<OS_dispatch_semaphore> *_requestWriterLimitSemaphore;
    NSString *_libraryBuildTag;
}

+ (id)stringFromWellKnownClientIdentifier:(unsigned char)arg1;
+ (id)stringFromOpenMode:(unsigned char)arg1;
+ (id)persistentKeyForLibrary:(id)arg1;
+ (id)persistentKeyForURL:(id)arg1;
+ (id)persistentKeyForPath:(id)arg1;
+ (void)initialize;
+ (BOOL)isLibraryInTrash:(id)arg1;
+ (BOOL)isIPhotoLibraryBundleAtURL:(id)arg1;
+ (unsigned char)guessLibraryStructureAtURL:(id)arg1;
+ (BOOL)isPotentialLibraryAtURL:(id)arg1;
+ (BOOL)checkLibraryURL:(id)arg1 accessFiles:(id)arg2 error:(id *)arg3;
+ (BOOL)checkSupportedFilesystemForLibraryURL:(id)arg1 error:(id *)arg2;
+ (unsigned char)checkLibraryUpgradeTypeAtURL:(id)arg1 updatedDatabasePath:(id *)arg2 error:(id *)arg3;
+ (id)metaSchemaSectionDataWithError:(id *)arg1;
+ (BOOL)checkPermissionsForPath:(id)arg1 readOnly:(BOOL)arg2 fileManager:(id)arg3 error:(id *)arg4;
+ (BOOL)checkDatabaseFolderPermissions:(id)arg1 accessFilePaths:(id)arg2 readOnly:(BOOL)arg3 fileManager:(id)arg4 error:(id *)arg5;
+ (BOOL)checkSandboxOperation:(unsigned char)arg1 forPath:(id)arg2 error:(id *)arg3;
+ (BOOL)databaseExistsAtLibraryURL:(id)arg1 databasePath:(id *)arg2 error:(id *)arg3;
+ (BOOL)isSnapshotOkForRebuildForLibraryURL:(id)arg1 outPropertyList:(id *)arg2;
@property(copy, nonatomic) NSString *libraryBuildTag; // @synthesize libraryBuildTag=_libraryBuildTag;
@property(nonatomic) BOOL inTransaction; // @synthesize inTransaction=_inTransaction;
@property(readonly, nonatomic) NSObject<OS_dispatch_semaphore> *requestWriterLimitSemaphore; // @synthesize requestWriterLimitSemaphore=_requestWriterLimitSemaphore;
@property(retain, nonatomic) NSMutableDictionary *tablesByTableId; // @synthesize tablesByTableId=_tablesByTableId;
@property(retain, nonatomic) NSMutableDictionary *tablesByTableName; // @synthesize tablesByTableName=_tablesByTableName;
@property(retain, nonatomic) NSMutableDictionary *tableClassesByTableName; // @synthesize tableClassesByTableName=_tableClassesByTableName;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property(readonly, nonatomic) NSString *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(retain, nonatomic) LiStringAtomCache *stringAtomCache; // @synthesize stringAtomCache=_stringAtomCache;
@property(nonatomic) unsigned char libraryType; // @synthesize libraryType=_libraryType;
@property(nonatomic) unsigned char openMode; // @synthesize openMode=_openMode;
@property(nonatomic) BOOL isClosing; // @synthesize isClosing=_isClosing;
- (void).cxx_destruct;
- (id)connection;
- (void)waitForTableRequests;
- (void)waitForTableRequestsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugPropertyCacheDescription;
@property(readonly, copy) NSString *description;
- (id)allModelIdsForTable:(id)arg1;
- (Class)tableClassForTableName:(id)arg1;
- (void)registerTableClass:(Class)arg1 forTableName:(id)arg2;
- (id)tableForTableId:(unsigned long long)arg1;
- (id)tableForTableName:(id)arg1;
- (id)addTable:(id)arg1 forTableName:(id)arg2;
- (id)addTable:(id)arg1;
- (id)normalTables;
- (id)tables;
- (id)tableNames;
@property(readonly, nonatomic) BOOL readOnly;
- (BOOL)isClosed;
- (BOOL)isClosedOrClosing;
- (BOOL)isOpen;
- (void)close;
- (BOOL)performChangesAndWait:(CDUnknownBlockType)arg1 reason:(unsigned short)arg2 error:(id *)arg3;
- (void)performChanges:(CDUnknownBlockType)arg1 reason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)schema;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

