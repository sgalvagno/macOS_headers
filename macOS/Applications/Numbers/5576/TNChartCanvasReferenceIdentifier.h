//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableArray, TSCHSeriesDimension;

@interface TNChartCanvasReferenceIdentifier : NSObject <NSCopying>
{
    int type;
    CDStruct_ed6d627d formulaID;
    unsigned long long argumentIndex;
    unsigned long long areaType;
    NSMutableArray *areaFormulaRefIDs;
    NSMutableArray *areaFillPairs;
    NSMutableArray *placards;
    struct TSCERangeRef rangeRef;
    TSCHSeriesDimension *seriesDimension;
    BOOL suppressed;
}

@property(nonatomic) BOOL suppressed; // @synthesize suppressed;
@property(readonly, nonatomic) NSMutableArray *placards; // @synthesize placards;
@property(copy, nonatomic) TSCHSeriesDimension *seriesDimension; // @synthesize seriesDimension;
@property(readonly, nonatomic) NSMutableArray *areaFillPairs; // @synthesize areaFillPairs;
@property(readonly, nonatomic) NSMutableArray *areaFormulaRefIDs; // @synthesize areaFormulaRefIDs;
@property(nonatomic) struct TSCERangeRef rangeRef; // @synthesize rangeRef;
@property(readonly, nonatomic) unsigned long long areaType; // @synthesize areaType;
@property(readonly, nonatomic) unsigned long long argumentIndex; // @synthesize argumentIndex;
@property(readonly, nonatomic) CDStruct_ed6d627d formulaID; // @synthesize formulaID;
@property(readonly, nonatomic) int type; // @synthesize type;
- (id).cxx_construct;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initAreaOfType:(unsigned long long)arg1 formulaRefIDs:(id)arg2 rangeRef:(struct TSCERangeRef)arg3;
- (id)initCreationReference;
- (id)initWithFormulaID:(CDStruct_ed6d627d)arg1 argumentIndex:(unsigned long long)arg2 rangeRef:(struct TSCERangeRef)arg3;

@end

