//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface _NSSearchSliceKindHandler : NSObject
{
    int _searchSliceType;
    NSString *_attributeName;
}

- (id)attributeName;
- (int)searchSliceType;
- (void)dealloc;
- (void)setCriteriaSlice:(id)arg1 forRuleEditer:(id)arg2 withRootMenuItem:(id)arg3 atRowIndex:(long long)arg4;
- (id)criteriaSliceForCriteria:(id)arg1 values:(id)arg2;
- (id)queryStringForItems:(id)arg1 values:(id)arg2;
- (long long)_dateUnitMultiplierForSearchDateSpan:(int)arg1;
- (long long)_relativeStartingDayForDateOptionType:(int)arg1;
- (id)initWithAttributeName:(id)arg1;
- (id)initWithSearchSliceType:(int)arg1 attributeName:(id)arg2;

@end

