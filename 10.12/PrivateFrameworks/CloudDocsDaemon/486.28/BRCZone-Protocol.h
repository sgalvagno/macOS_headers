//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class BRCDumpContext, BRCPQLConnection, BRCZoneRowID, NSMutableDictionary, PQLConnection;

@protocol BRCZone
@property(readonly, nonatomic) NSMutableDictionary *plist;
@property(readonly, nonatomic) BRCPQLConnection *db;
@property(readonly, nonatomic) BOOL isPrivateZone;
@property(readonly, nonatomic) BOOL isSharedZone;
@property(retain, nonatomic) BRCZoneRowID *dbRowID;
@property(nonatomic) BOOL needsSave;
- (BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg1 db:(PQLConnection *)arg2;
- (BOOL)dumpStatusToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
- (BOOL)dumpTablesToContext:(BRCDumpContext *)arg1 error:(id *)arg2;
@end

