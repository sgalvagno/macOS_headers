//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDMemoryMovieVersionModel.h>

@class NSString;

@interface RDMemoryMovieVersion : RDMemoryMovieVersionModel
{
}

+ (id)removeVersionIds:(id)arg1 fromMemory:(id)arg2 withReason:(unsigned short)arg3;
+ (id)setMovieVersionIds:(id)arg1 forMemory:(id)arg2;
+ (id)versionIds:(id)arg1 inMemoryId:(id)arg2 inDatabase:(id)arg3;
+ (id)versionsForMemory:(id)arg1 loadOptions:(id)arg2 readOnlyModels:(BOOL)arg3;
+ (id)versionsForMemory:(id)arg1;
+ (id)versionIdListForMemoryIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)versionIdListForMemory:(id)arg1;
+ (id)versionIdListForMemoryId:(id)arg1 fromDatabase:(id)arg2;
+ (id)countOfVersionsForMemoryId:(id)arg1 inTrash:(BOOL)arg2 fromDatabase:(id)arg3;
+ (id)memoryIdsForVersionIds:(id)arg1 fromDatabase:(id)arg2;
+ (id)memoryIdsForVersionId:(id)arg1 fromDatabase:(id)arg2;
+ (void)deleteAllMemoryMovieVersionsForMemoryId:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3;
+ (void)deleteFromAllMemories:(id)arg1 fromDatabase:(id)arg2 withReason:(unsigned short)arg3;
- (id)initWithUuid:(id)arg1 inDatabase:(id)arg2;
- (id)init;

// Remaining properties
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

