//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;
@protocol OS_os_log;

@interface UserRegistryDB : NSObject
{
    struct sqlite3 *_sqliteHandle;
    struct sqlite3_stmt *_recordIDStatment;
    struct sqlite3_stmt *_replaceStatment;
    struct sqlite3_stmt *_deleteStatment;
    struct sqlite3_stmt *_deleteAllStatment;
    NSObject<OS_os_log> *_oslog;
    NSString *_dsid;
}

@property(retain) NSString *dsid; // @synthesize dsid=_dsid;
@property(retain) NSObject<OS_os_log> *oslog; // @synthesize oslog=_oslog;
@property struct sqlite3 *sqliteHandle; // @synthesize sqliteHandle=_sqliteHandle;
@property struct sqlite3_stmt *deleteAllStatment; // @synthesize deleteAllStatment=_deleteAllStatment;
@property struct sqlite3_stmt *deleteStatment; // @synthesize deleteStatment=_deleteStatment;
@property struct sqlite3_stmt *replaceStatment; // @synthesize replaceStatment=_replaceStatment;
@property struct sqlite3_stmt *recordIDStatment; // @synthesize recordIDStatment=_recordIDStatment;
- (void).cxx_destruct;
- (_Bool)deleteRecordAll;
- (_Bool)deleteRecordID:(id)arg1;
- (_Bool)replaceRecordID:(id)arg1 data:(id)arg2;
- (id)getRecordIDData:(id)arg1;
- (_Bool)replaceConfigRecord:(id)arg1 data:(id)arg2;
- (id)getConfigData:(id)arg1;
- (_Bool)replaceRecord:(id)arg1 type:(int)arg2 data:(id)arg3;
- (id)getData:(id)arg1 type:(int)arg2;
- (_Bool)setUserVersion:(int)arg1;
- (int)userVersion;
- (_Bool)setupDatabase;
- (void)dealloc;
- (id)initWithDSID:(id)arg1;

@end

