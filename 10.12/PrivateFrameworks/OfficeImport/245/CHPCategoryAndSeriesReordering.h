//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <OfficeImport/EDProcessor.h>

__attribute__((visibility("hidden")))
@interface CHPCategoryAndSeriesReordering : EDProcessor
{
}

- (void)reorderCategoryAndSeries:(id)arg1 sheet:(id)arg2 clearAxisReversedFlag:(_Bool)arg3;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (_Bool)isObjectSupported:(id)arg1;
- (void)reorderDataFormula:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;
- (void)reorderDataValues:(id)arg1 dataPointCount:(unsigned long long)arg2;
- (void)reorderData:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;
- (void)reorderValueProperties:(id)arg1 dataPointCount:(unsigned long long)arg2;
- (void)reorderSeriesCategory:(id)arg1 dataPointCount:(unsigned long long)arg2 byRow:(_Bool)arg3;
- (void)applyCategoryReorderingPreprocessor:(id)arg1;
- (void)applySeriesReorderingPreprocessor:(id)arg1;
- (_Bool)isObjectSupportedForSeriesReorderingPreprocessor:(id)arg1 isCategoryOrderReversed:(_Bool)arg2;

@end

