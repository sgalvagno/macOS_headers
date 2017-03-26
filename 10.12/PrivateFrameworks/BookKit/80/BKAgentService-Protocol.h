//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BookKit/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol BKAgentService <NSObject>
- (void)simulateUploadFailure:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)simulateUploadEnd:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)simulateUploadProgress:(NSDictionary *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)simulateUbiquityDidLoadWithFilesPaths:(NSArray *)arg1 reply:(void (^)(void))arg2;
- (void)simulateUbiquityFileDidBecomeUnavilableAtPath:(NSString *)arg1 withReply:(void (^)(void))arg2;
- (void)simulateUbiquityFileDidBecomeAvailableAtPath:(NSString *)arg1 withReply:(void (^)(void))arg2;
- (void)setUserDefaultsEnabled:(BOOL)arg1 reply:(void (^)(void))arg2;
- (void)setUbiquityDirectoriesSubpath:(NSString *)arg1 withReply:(void (^)(BOOL))arg2;
- (void)performUbiquityMigration:(void (^)(NSArray *, NSError *))arg1;
- (void)getUseriCloudSetting:(void (^)(BOOL, NSData *, NSDictionary *, NSDictionary *, NSDictionary *, NSError *))arg1;
- (void)setUseriCloudSetting:(BOOL)arg1 results:(void (^)(BOOL, NSData *, NSDictionary *, NSDictionary *, NSDictionary *, NSError *))arg2;
- (void)shutdownService:(void (^)(id, NSError *))arg1;
- (void)chooseLibrary:(NSURL *)arg1 withToken:(NSData *)arg2 results:(void (^)(id, NSError *))arg3;
- (void)moveLibrary:(NSURL *)arg1 withToken:(NSData *)arg2 results:(void (^)(id, NSError *))arg3;
- (void)reconnectToLibrary:(void (^)(id, NSError *))arg1;
- (void)fixOrphanedFiles:(void (^)(id, NSError *))arg1;
- (void)rebuildLibrary:(void (^)(id, NSError *))arg1;
- (void)applyPendingUpdates:(NSArray *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)removeRedactedBook:(NSDictionary *)arg1 withReply:(void (^)(id, NSError *))arg2;
- (void)fetchRedactedBooks:(void (^)(id, NSError *))arg1;
- (void)redactBook:(NSDictionary *)arg1 withReply:(void (^)(id, NSError *))arg2;
- (void)examineBook:(NSURL *)arg1 withToken:(NSData *)arg2 results:(void (^)(id, NSError *))arg3;
- (void)uncompressBook:(NSDictionary *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)migrateBook:(NSURL *)arg1 withToken:(NSData *)arg2 withMetadata:(NSDictionary *)arg3 results:(void (^)(id, NSError *))arg4;
- (void)prioritizeImport:(NSString *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)evictBook:(NSURL *)arg1 withToken:(NSData *)arg2 results:(void (^)(id, NSError *))arg3;
- (void)trashBook:(NSDictionary *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)removeBook:(NSDictionary *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)updateBook:(NSURL *)arg1 withToken:(NSData *)arg2 withMetadata:(NSDictionary *)arg3 results:(void (^)(id, NSError *))arg4;
- (void)importBook:(NSURL *)arg1 withToken:(NSData *)arg2 results:(void (^)(id, NSError *))arg3;
- (void)fetchImportingBooks:(void (^)(id, NSError *))arg1;
- (void)fetchBooksWithAssetIDs:(NSArray *)arg1 results:(void (^)(id, NSError *))arg2;
- (void)fetchBookAssetIDs:(void (^)(id, NSError *))arg1;
- (void)fetchBooks:(void (^)(id, NSError *))arg1;
- (void)fetchBookLibraryTokens:(void (^)(id, NSError *))arg1;
@end

