//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalExchangeOperation.h>

@class EWSFolderIdType;

@interface CalExchangeSyncDeletedItemsFolderOperation : CalExchangeOperation
{
    EWSFolderIdType *_folderId;
}

- (id)debugDescription;
- (id)debugTitle;
- (BOOL)executeWithBinding:(id)arg1 inSession:(id)arg2 inContext:(id)arg3 error:(id *)arg4;
- (void)dealloc;
- (id)folderId;
- (id)initWithSession:(id)arg1 folderId:(id)arg2;

@end

