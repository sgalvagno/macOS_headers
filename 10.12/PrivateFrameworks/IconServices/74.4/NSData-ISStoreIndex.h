//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (ISStoreIndex)
+ (id)_ISStoreIndex_mappedDataWithURL:(id)arg1;
- (BOOL)_ISStoreIndex_enumerateValuesForKey:(unsigned long long)arg1 bock:(CDUnknownBlockType)arg2;
- (void)_ISStoreIndex_enumerateValuesWithBock:(CDUnknownBlockType)arg1;
- (BOOL)_ISStoreIndex_setNodeIndex:(unsigned int)arg1 forKey:(unsigned long long)arg2;
- (unsigned int)_ISStoreIndex_nodeIndexForKey:(unsigned long long)arg1;
- (CDStruct_af6ef5a8 *)_ISStoreIndex_nodeAtIndex:(unsigned int)arg1;
- (CDStruct_af6ef5a8 *)_ISStoreIndex_nodes;
- (unsigned int *)_ISStoreIndex_hashTable;
- (BOOL)_ISStoreIndex_isValid;
- (CDStruct_00287ae1 *)_ISStoreIndex_header;
@end

