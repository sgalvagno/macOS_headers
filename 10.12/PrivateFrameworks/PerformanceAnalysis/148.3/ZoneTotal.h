//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PerformanceAnalysis/MallocDataCategorySummary.h>

@class NSMutableDictionary;

@interface ZoneTotal : MallocDataCategorySummary
{
    NSMutableDictionary *allocationTotals;
}

@property(retain) NSMutableDictionary *allocationTotals; // @synthesize allocationTotals;
- (BOOL)printData:(id)arg1;
- (void)addAllocation:(id)arg1;
- (void)dealloc;
- (id)initWithAllocation:(id)arg1;

@end

