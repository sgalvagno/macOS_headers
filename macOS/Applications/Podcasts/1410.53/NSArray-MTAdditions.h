//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import "IMJSONSerializableValueProviding-Protocol.h"

@class NSString;

@interface NSArray (MTAdditions) <IMJSONSerializableValueProviding>
- (id)mt_uniqueOrdered;
- (id)mt_uniqued;
- (id)mt_allObjectsExcludingIndexes:(id)arg1;
- (id)mt_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)arrayByRemovingObject:(id)arg1;
- (id)filter:(CDUnknownBlockType)arg1 compactMap:(CDUnknownBlockType)arg2;
- (id)mt_filter:(CDUnknownBlockType)arg1;
- (id)mt_compactMap:(CDUnknownBlockType)arg1;
- (id)im_jsonSerializableValue;
- (id)deepCopy;
- (id)arrayRemovingMatchingStrings:(id)arg1;
- (id)arrayRemovingObjectsByKey:(id)arg1 matchingStrings:(id)arg2;
- (id)arrayOfObjectsContainingMatchingKey:(id)arg1 matchingStrings:(id)arg2;
- (BOOL)containsStringCaseInsensitive:(id)arg1;
- (id)imReversedArray;
- (id)firstObject;
- (long long)indexOfObjectWithValue:(id)arg1 forKeyPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

