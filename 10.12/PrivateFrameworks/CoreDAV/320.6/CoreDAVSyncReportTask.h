//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSString;

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask
{
    NSString *_previousSyncToken;
    NSString *_nextSyncToken;
    BOOL _moreToSync;
    BOOL _wasInvalidSyncToken;
}

@property(readonly, nonatomic) BOOL wasInvalidSyncToken; // @synthesize wasInvalidSyncToken=_wasInvalidSyncToken;
@property(readonly, nonatomic) BOOL moreToSync; // @synthesize moreToSync=_moreToSync;
@property(readonly, nonatomic) NSString *nextSyncToken; // @synthesize nextSyncToken=_nextSyncToken;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)copyDefaultParserForContentType:(id)arg1;
- (id)notFoundHREFs;
- (id)requestBody;
- (id)httpMethod;
- (id)description;
- (void)dealloc;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2 withDepth:(int)arg3 previousSyncToken:(id)arg4;

@end

