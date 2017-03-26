//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _DPStorage;

@interface _DPToolCommand : NSObject
{
    BOOL _readWriteDB;
    NSString *_action;
    NSString *_arguments;
    NSString *_recordKey;
    NSString *_databasePath;
    _DPStorage *_storage;
}

+ (id)command:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5;
+ (id)supportedCommands;
@property(readonly, nonatomic) _DPStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) BOOL readWriteDB; // @synthesize readWriteDB=_readWriteDB;
@property(readonly, copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(readonly, copy, nonatomic) NSString *recordKey; // @synthesize recordKey=_recordKey;
@property(readonly, copy, nonatomic) NSString *arguments; // @synthesize arguments=_arguments;
@property(readonly, copy, nonatomic) NSString *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (id)description;
- (BOOL)submitRecordsForKey:(id)arg1;
- (id)queryForKey:(id)arg1;
- (BOOL)recordWords:(id)arg1 forKey:(id)arg2;
- (BOOL)recordStrings:(id)arg1 forKey:(id)arg2;
- (BOOL)recordNumbers:(id)arg1 forKey:(id)arg2;
- (BOOL)executeCommand;
- (id)initWithAction:(id)arg1 arguments:(id)arg2 recordKey:(id)arg3 databasePath:(id)arg4 writeOK:(BOOL)arg5;
- (id)init;

@end

