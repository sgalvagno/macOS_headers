//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, NSString;

@interface SGDWorkQueue : NSObject
{
    NSString *_dir;
    // Error parsing type: Aq, name: _counter
    NSMutableOrderedSet *_pendingNames;
    struct _opaque_pthread_mutex_t _lock;
    long long _priority;
}

+ (id)pathForOldMessagesQueue;
+ (id)pathForNewMessagesQueue;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
- (void).cxx_destruct;
- (void)closeDatabase;
- (id)description;
- (id)popDictionaryBySourceId:(id)arg1 messageId:(id)arg2;
@property(readonly, nonatomic) unsigned long long count;
- (id)_pop;
- (id)_popName:(id)arg1;
- (id)popDictionaryById:(id)arg1;
- (id)popDictionary;
- (void)resetForTesting;
- (id)addDictionary:(id)arg1 withSourceId:(id)arg2 messageId:(id)arg3;
- (id)addDictionary:(id)arg1;
- (id)init;
- (id)initWithDirectory:(id)arg1 priority:(long long)arg2;
- (id)initWithDirectory:(id)arg1;

@end

