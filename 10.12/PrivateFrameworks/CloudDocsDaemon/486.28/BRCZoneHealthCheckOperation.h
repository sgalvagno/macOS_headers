//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass>
{
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

- (void).cxx_destruct;
- (void)main;
- (void)completedWithServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2 moreComing:(BOOL)arg3 error:(id)arg4;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

