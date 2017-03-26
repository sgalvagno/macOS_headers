//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LiLibrary, NSMutableArray, NSSet;

@interface LiTransactionContext : NSObject
{
    LiLibrary *_library;
    long long _contextId;
    int _temporaryModelId;
    BOOL _threadContextSet;
    struct unordered_map<long, std::__1::unordered_map<long, LiModel *, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, LiModel *>>>, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, std::__1::unordered_map<long, LiModel *, std::__1::hash<long>, std::__1::equal_to<long>, std::__1::allocator<std::__1::pair<const long, LiModel *>>>>>> _modelsByTableById;
    struct unordered_map<LiTable *, std::__1::tuple<NSMutableOrderedSet *, NSMutableOrderedSet *, NSMutableOrderedSet *>, _TableHashFunctor, std::__1::equal_to<LiTable *>, std::__1::allocator<std::__1::pair<LiTable *const, std::__1::tuple<NSMutableOrderedSet *, NSMutableOrderedSet *, NSMutableOrderedSet *>>>> _contextData;
    NSMutableArray *_postSaveHandlers;
    unsigned char _policy;
    BOOL _hasInserts;
    BOOL _hasUpdates;
    BOOL _hasDeletes;
    unsigned short _changeReason;
}

+ (long long)transactionIdForContextId:(long long)arg1;
+ (long long)contextPrefixForId:(long long)arg1 tableId:(long long)arg2;
+ (id)threadContextInitWithLibrary:(id)arg1;
+ (BOOL)isThreadContextActive;
+ (id)threadContext;
@property(readonly, nonatomic) LiLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) BOOL hasDeletes; // @synthesize hasDeletes=_hasDeletes;
@property(readonly, nonatomic) BOOL hasUpdates; // @synthesize hasUpdates=_hasUpdates;
@property(readonly, nonatomic) BOOL hasInserts; // @synthesize hasInserts=_hasInserts;
@property(nonatomic) unsigned char policy; // @synthesize policy=_policy;
@property(nonatomic) unsigned short changeReason; // @synthesize changeReason=_changeReason;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)temporaryModelIdForTable:(id)arg1;
- (BOOL)isThreadContextSet;
- (void)clearThreadContext;
- (void)storeThreadContext;
- (BOOL)saveWithError:(id *)arg1;
- (void)saveWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)saveRequestFromContextData:(id)arg1 saveHandlers:(id)arg2 persistHandlers:(id)arg3;
- (void)addPostSaveHandler:(CDUnknownBlockType)arg1;
- (void)enumerateInsertedAndUpdatedModelsInTable:(id)arg1 block:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSSet *deletedModels;
@property(readonly, nonatomic) NSSet *updatedModels;
@property(readonly, nonatomic) NSSet *insertedModels;
- (void)deleteModel:(id)arg1;
- (void)updateModel:(id)arg1;
- (void)insertModel:(id)arg1;
- (BOOL)performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (void)performChanges:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) BOOL hasChanges;
- (id)registeredModelId:(long long)arg1 table:(id)arg2;
- (id)addModel:(id)arg1;
- (id)registeredModel:(id)arg1;
- (void)clear;
- (id)description;
- (void)dealloc;
- (id)initWithLibrary:(id)arg1;
- (id)init;

@end

