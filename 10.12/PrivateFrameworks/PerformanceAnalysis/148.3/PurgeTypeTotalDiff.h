//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PerformanceAnalysis/MallocDataCategorySummaryDiff.h>

@class NSMutableDictionary;

@interface PurgeTypeTotalDiff : MallocDataCategorySummaryDiff
{
    int purgeClass;
    NSMutableDictionary *zoneDiffs;
}

@property int purgeClass; // @synthesize purgeClass;
@property(retain) NSMutableDictionary *zoneDiffs; // @synthesize zoneDiffs;
- (BOOL)printData:(id)arg1;
- (void)dealloc;
- (id)initWithPurgeType:(int)arg1 Before:(id)arg2 After:(id)arg3;

@end

