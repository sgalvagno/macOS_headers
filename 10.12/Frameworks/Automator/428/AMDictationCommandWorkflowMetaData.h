//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Automator/AMWorkflowMetaData.h>

@class NSDate, NSString;

@interface AMDictationCommandWorkflowMetaData : AMWorkflowMetaData
{
    BOOL _dictationCommandEnabled;
    NSString *_dictationCommandTitle;
    NSString *_dictationCommandIdentifier;
    NSString *_dictationCommandWorkflowURLString;
    NSDate *_dictationCommandTimeStamp;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property(retain) NSDate *dictationCommandTimeStamp; // @synthesize dictationCommandTimeStamp=_dictationCommandTimeStamp;
@property(copy) NSString *dictationCommandWorkflowURLString; // @synthesize dictationCommandWorkflowURLString=_dictationCommandWorkflowURLString;
@property(copy) NSString *dictationCommandIdentifier; // @synthesize dictationCommandIdentifier=_dictationCommandIdentifier;
@property(copy) NSString *dictationCommandTitle; // @synthesize dictationCommandTitle=_dictationCommandTitle;
@property BOOL dictationCommandEnabled; // @synthesize dictationCommandEnabled=_dictationCommandEnabled;
- (void)updateDictationCommandProperties:(id)arg1;
- (void)updateDictationCommandPropertiesWithURL:(id)arg1;
- (void)syncMetaDataForDocument:(id)arg1;
- (id)metaData;
- (void)setFromDictionary:(id)arg1;
- (void)dealloc;
- (id)initWithPersonality:(id)arg1;

@end

