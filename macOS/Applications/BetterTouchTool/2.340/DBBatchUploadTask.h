//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DBBatchUploadData;

@interface DBBatchUploadTask : NSObject
{
    DBBatchUploadData *_uploadData;
}

- (void).cxx_destruct;
- (BOOL)uploadsInProgress;
- (void)cancel;
- (id)initWithUploadData:(id)arg1;

@end

