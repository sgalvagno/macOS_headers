//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _CDSleepPredictor : NSObject
{
}

+ (id)findAllSleepPeriodsInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2;
+ (id)findSleepPeriodInDayStarting:(id)arg1 FromActivityProbabilities:(id)arg2;
+ (id)gatherBitmapHistoryFromStore:(id)arg1 forPeriod:(id)arg2;
+ (id)fetchFirstEventDateIntervalFromStore:(id)arg1 forStream:(id)arg2 sortDateAscending:(BOOL)arg3 intersectingInterval:(id)arg4;
+ (id)fetchUnlockedDateIntervalsFromStore:(id)arg1 whichIntersectInterval:(id)arg2;
+ (id)generateActivityBitmapFor:(id)arg1 unlockedIntervals:(id)arg2 eventsAvailableInterval:(id)arg3;
+ (void)mutableArray:(id)arg1 replaceObjectsAtIndexes:(id)arg2 withObjectFromBlock:(CDUnknownBlockType)arg3;
+ (id)array:(id)arg1 filter:(CDUnknownBlockType)arg2;
+ (id)array:(id)arg1 map:(CDUnknownBlockType)arg2;
+ (id)arrayWithObject:(id)arg1 repeated:(unsigned long long)arg2;
+ (id)indexSetFromUnionOf:(id)arg1;
+ (id)array:(id)arg1 reduce:(CDUnknownBlockType)arg2 withInitialValue:(id)arg3;

@end

