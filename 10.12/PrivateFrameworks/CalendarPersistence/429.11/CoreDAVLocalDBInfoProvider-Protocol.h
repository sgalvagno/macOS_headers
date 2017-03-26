//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CoreDAVTaskGroupDelegate-Protocol.h>

@class CoreDAVBulkChangeTask, CoreDAVContainerSyncTaskGroup, CoreDAVDeleteTask, CoreDAVPostTask, CoreDAVPutTask, NSArray, NSData, NSDictionary, NSError, NSSet, NSString, NSURL;

@protocol CoreDAVLocalDBInfoProvider <CoreDAVTaskGroupDelegate>
- (void)containerSyncTask:(CoreDAVContainerSyncTaskGroup *)arg1 completedWithNewCTag:(NSString *)arg2 newSyncToken:(NSString *)arg3 addedOrModified:(NSSet *)arg4 removed:(NSSet *)arg5 error:(NSError *)arg6;
- (void)containerSyncTask:(CoreDAVContainerSyncTaskGroup *)arg1 retrievedAddedOrModifiedActions:(NSSet *)arg2 removed:(NSSet *)arg3;
- (NSSet *)copyAllLocalURLsInFolderWithURL:(NSURL *)arg1;
- (NSDictionary *)copyLocalETagsForURLs:(NSArray *)arg1 inFolderWithURL:(NSURL *)arg2;

@optional
- (BOOL)syncBulkChangeTask:(CoreDAVBulkChangeTask *)arg1 error:(NSError *)arg2;
- (BOOL)syncDeleteTask:(CoreDAVDeleteTask *)arg1 error:(NSError *)arg2;
- (BOOL)syncPostTask:(CoreDAVPostTask *)arg1 data:(NSData *)arg2 error:(NSError *)arg3;
- (BOOL)syncPutTask:(CoreDAVPutTask *)arg1 completedWithNewETag:(NSString *)arg2 error:(NSError *)arg3;
- (BOOL)syncBulkChangeTask:(CoreDAVBulkChangeTask *)arg1 parentTaskGroup:(CoreDAVContainerSyncTaskGroup *)arg2 completedWithError:(NSError *)arg3;
- (BOOL)syncDeleteTask:(CoreDAVDeleteTask *)arg1 parentTaskGroup:(CoreDAVContainerSyncTaskGroup *)arg2 completedWithError:(NSError *)arg3;
- (BOOL)syncPostTask:(CoreDAVPostTask *)arg1 postedData:(NSData *)arg2 parentTaskGroup:(CoreDAVContainerSyncTaskGroup *)arg3 error:(NSError *)arg4;
- (BOOL)syncPutTask:(CoreDAVPutTask *)arg1 completedWithNewETag:(NSString *)arg2 parentTaskGroup:(CoreDAVContainerSyncTaskGroup *)arg3 error:(NSError *)arg4;
- (BOOL)setLocalETag:(NSString *)arg1 forItemWithURL:(NSURL *)arg2 inFolderWithURL:(NSURL *)arg3;
- (NSDictionary *)copyLocalETagsForURLToETagDict:(NSDictionary *)arg1 inFolderWithURL:(NSURL *)arg2;
@end

