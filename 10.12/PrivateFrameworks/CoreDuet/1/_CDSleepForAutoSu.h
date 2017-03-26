//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDAutoSuConfig;

@interface _CDSleepForAutoSu : NSObject
{
    BOOL _enableCaching;
    _CDAutoSuConfig *_autoSuConfig;
}

+ (id)tuningDictionary;
+ (id)readConfigurationFromDefaults;
+ (id)sanitizeTuningConfiguration:(id)arg1;
+ (id)defaultTuningConfiguration;
@property BOOL enableCaching; // @synthesize enableCaching=_enableCaching;
@property(retain) _CDAutoSuConfig *autoSuConfig; // @synthesize autoSuConfig=_autoSuConfig;
- (void).cxx_destruct;
- (id)predictNextDateForLastUnlockAttemptOfTheDay;
- (id)predicitLastUnlockForDay:(id)arg1;
- (id)predictForDate:(id)arg1 fromState:(id)arg2 withConfig:(id)arg3;
- (id)predictForDate:(id)arg1 fromState:(id)arg2;
- (id)retrieveSleepProbabilities:(id)arg1;
- (id)getUnlockAndSoftwareUpdateTimesWithConfig:(id)arg1 referenceDate:(id)arg2;
- (id)predictedSleepDictionaryForDate:(id)arg1 usingKnowledge:(id)arg2;
- (id)predictedSleepDictionaryForDate:(id)arg1;
- (id)getUnlockAndSoftwareUpdateTimes;
- (id)makeDictionaryForEventStreamWhenPredictionTemporarilyUnavailable:(id)arg1;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1 withConfig:(id)arg2;
- (id)defaultTimesWhenPredictionUnavailable:(id)arg1;
- (id)proposeTimesFromRelativeOffsetsForDate:(id)arg1 lastUnlock:(int)arg2 suStart:(int)arg3 suEnd:(int)arg4 unrestrictedSleepEnd:(int)arg5 config:(id)arg6;
- (id)init;

@end

