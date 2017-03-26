//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/EDFormula.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula : EDFormula
{
    _Bool _forceNonBaseFormula;
    int _rowBaseOrOffset;
    int _columnBaseOrOffset;
    unsigned long long _baseFormulaIndex;
    EDReference *_baseFormulaRange;
}

@property(readonly, nonatomic) EDReference *baseFormulaRange; // @synthesize baseFormulaRange=_baseFormulaRange;
@property(nonatomic) int columnBaseOrOffset; // @synthesize columnBaseOrOffset=_columnBaseOrOffset;
@property(nonatomic) int rowBaseOrOffset; // @synthesize rowBaseOrOffset=_rowBaseOrOffset;
@property(nonatomic) _Bool forceNonBaseFormula; // @synthesize forceNonBaseFormula=_forceNonBaseFormula;
@property(nonatomic) unsigned long long baseFormulaIndex; // @synthesize baseFormulaIndex=_baseFormulaIndex;
- (id)description;
- (_Bool)isSharedFormula;
- (id)warningWithRowBlocks:(id)arg1;
- (_Bool)isBaseFormula;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (_Bool)convertTokensToShared;
- (void)dealloc;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;

@end

