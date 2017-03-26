//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/CPDisposable-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPMemoryOwner;

@interface CPCharSequence : NSObject <NSCopying, CPCopying, CPDisposable>
{
    unsigned int length;
    struct CPPDFChar **charArray;
    unsigned int previousSize;
    unsigned int size;
    CPMemoryOwner *sharedMemory;
    BOOL wasMerged;
}

- (struct CGRect)boundsFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (struct CGRect)bounds;
- (BOOL)map:(CDUnknownFunctionPointerType)arg1 whereNeighborsWith:(id)arg2 passing:(void *)arg3;
- (BOOL)mapToPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapWithIndex:(CDUnknownFunctionPointerType)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3 passing:(void *)arg4;
- (BOOL)mapWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)map:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)removeToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)copyToSubsequence:(id)arg1 ifTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)copyToSubsequence:(id)arg1 from:(unsigned int)arg2 length:(unsigned int)arg3;
- (BOOL)removeSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)splitToSubsequences:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (id)newSubsequenceFrom:(unsigned int)arg1 length:(unsigned int)arg2;
- (BOOL)wasMerged;
- (void)merge:(id)arg1 by:(CDUnknownFunctionPointerType)arg2;
- (void)mergeByAnchorXIncreasingYDecreasing:(id)arg1;
- (void)mergeByAnchorYDecreasingXIncreasing:(id)arg1;
- (void)sortBy:(CDUnknownFunctionPointerType)arg1;
- (void)sortByAnchorXIncreasingYDecreasing;
- (void)sortByAnchorYDecreasingXIncreasing;
- (void)removeFrom:(unsigned int)arg1;
- (void)removeCharAtIndex:(unsigned int)arg1;
- (void)replaceCharAtIndex:(unsigned int)arg1 withChar:(struct CPPDFChar *)arg2;
- (void)removeAllChars;
- (void)removeChar;
- (void)addCharsFromSequence:(id)arg1;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2 ifTrue:(CDUnknownFunctionPointerType)arg3 passing:(void *)arg4;
- (void)addChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (void)addChar:(struct CPPDFChar *)arg1;
- (struct CPPDFChar **)charArray;
- (struct CPPDFChar *)charAtIndex:(unsigned int)arg1;
- (unsigned int)length;
- (void)resize:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)finalize;
- (void)dispose;
- (id)initSuper;
- (id)initWithChars:(struct CPPDFChar *)arg1 length:(unsigned int)arg2;
- (id)initWithSizeFor:(unsigned int)arg1;

@end

