//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSObject;
@protocol ACSHOutputEventPerformer;

@interface ACSHAction : ACSHPlistObject
{
    int _actionType;
    NSObject<ACSHOutputEventPerformer> *_eventPerformer;
    BOOL _shouldAutoRepeat;
    int _actionStage;
    double _recordedOffset;
    unsigned long long _repeatCount;
    double _repeatFrequencyInSeconds;
}

+ (id)descriptionForActionType:(int)arg1;
+ (id)titleForActionType:(int)arg1;
+ (Class)classForActionType:(int)arg1;
+ (Class)classForDict:(id)arg1;
@property(nonatomic) int actionStage; // @synthesize actionStage=_actionStage;
@property(nonatomic) double repeatFrequencyInSeconds; // @synthesize repeatFrequencyInSeconds=_repeatFrequencyInSeconds;
@property(nonatomic) BOOL shouldAutoRepeat; // @synthesize shouldAutoRepeat=_shouldAutoRepeat;
@property(nonatomic) unsigned long long repeatCount; // @synthesize repeatCount=_repeatCount;
@property(nonatomic) double recordedOffset; // @synthesize recordedOffset=_recordedOffset;
@property(retain, nonatomic) NSObject<ACSHOutputEventPerformer> *eventPerformer; // @synthesize eventPerformer=_eventPerformer;
@property(nonatomic) int actionType; // @synthesize actionType=_actionType;
- (void)dealloc;
- (void)repeatEnded;
- (void)perform;
- (BOOL)shouldPerform;
- (id)descriptionForDepth:(unsigned long long)arg1;
- (id)paramDescription;
- (id)dictionaryForSaving;
- (id)paramDictionaryForSaving;
- (void)_initWithPlistDictionary:(id)arg1;
- (id)init;

@end

