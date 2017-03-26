//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEORequestCounterPersistance : NSObject
{
    struct sqlite3 *_db;
    struct sqlite3_stmt *_insertStmt;
    NSDateFormatter *_sqlDateFormatter;
    NSObject<OS_dispatch_queue> *_queue;
    double _maxAge;
    BOOL _enabled;
}

+ (id)sharedInstance;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
- (void)purgeAllCounts;
- (void)createTableWithDrop:(BOOL)arg1;
- (void)purgeOlderThan:(id)arg1;
- (void)countsStartingFrom:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)incrementAtTime:(id)arg1 app:(id)arg2 requestType:(unsigned char)arg3 result:(unsigned char)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)incrementForApp:(id)arg1 requestType:(unsigned char)arg2 result:(unsigned char)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)initWithDBFilePath:(id)arg1 maxCountAge:(double)arg2;
- (id)init;

@end

