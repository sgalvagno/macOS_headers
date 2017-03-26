//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADMDSNode, NSString;

@interface ADMDSRecord : NSObject
{
    unsigned int mRecordReference;
    NSString *mRecordName;
    NSString *mRecordType;
    ADMDSNode *mNode;
}

+ (long long)nextFreeIDInRange:(struct _NSRange)arg1;
- (BOOL)deleteRecord;
- (BOOL)createRecordInNode:(id)arg1 withAttributes:(id)arg2;
- (BOOL)createRecordWithAttributes:(id)arg1;
- (BOOL)createRecord;
- (BOOL)removeValueID:(unsigned int)arg1 fromAttributeType:(id)arg2;
- (BOOL)removeValue:(id)arg1 fromAttributeType:(id)arg2;
- (BOOL)removeAttribute:(id)arg1;
- (BOOL)setValue:(id)arg1 withValueID:(unsigned int)arg2 forAttributeType:(id)arg3;
- (BOOL)addValue:(id)arg1 toAttributeType:(id)arg2;
- (BOOL)addAttribute:(id)arg1 value:(id)arg2;
- (BOOL)setRecordNameTo:(id)arg1;
- (id)attributesForTypes:(id)arg1;
- (id)attributeForType:(id)arg1 fullInfo:(BOOL)arg2;
- (id)node;
- (id)name;
- (void)close;
- (BOOL)isOpen;
- (BOOL)open;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithRecordName:(const char *)arg1 type:(const char *)arg2 node:(id)arg3;
- (id)initWithRecordName:(const char *)arg1 type:(const char *)arg2;
- (id)initWithRecord:(id)arg1;
- (BOOL)_setValue:(id)arg1 forKey:(id)arg2;
- (void)_cleanUpDeletedRecord;
- (id)generatedUID;

@end

