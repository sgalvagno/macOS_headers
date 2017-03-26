//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CKFlowControl : NSObject
{
    unsigned long long _budgetCap;
    double _regenerationPerSecond;
    unsigned long long _totalSamples;
    double _totalCost;
    double _budget;
    double _maximumThrottleTime;
    NSDate *_lastRegeneration;
}

+ (id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;
@property(retain) NSDate *lastRegeneration; // @synthesize lastRegeneration=_lastRegeneration;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property double budget; // @synthesize budget=_budget;
- (void).cxx_destruct;
- (BOOL)attemptBudgetedExpenditureWithCost:(double)arg1;
- (void)expendWithCost:(double)arg1;
- (BOOL)isLimited;
- (double)secondsUntilBudgetLimitationRemoved;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
@property double regenerationPerSecond; // @synthesize regenerationPerSecond=_regenerationPerSecond;
@property unsigned long long budgetCap; // @synthesize budgetCap=_budgetCap;
- (void)regenerate;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;

@end

