//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AMType, AMWorkflowPersonality, NSDictionary, NSString;

@interface AMWorkflowMetaData : NSObject
{
    AMWorkflowPersonality *_personality;
    NSString *_documentSaveName;
    NSDictionary *_metaDataFromDisk;
    NSDictionary *_infoPlistFromDisk;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)workflowMetaDataForPersonality:(id)arg1 dictionary:(id)arg2;
@property(readonly, retain) AMWorkflowPersonality *personality; // @synthesize personality=_personality;
@property(copy) NSDictionary *metaDataFromDisk; // @synthesize metaDataFromDisk=_metaDataFromDisk;
@property(copy) NSDictionary *infoPlistFromDisk; // @synthesize infoPlistFromDisk=_infoPlistFromDisk;
@property(copy) NSString *documentSaveName; // @synthesize documentSaveName=_documentSaveName;
@property(readonly, retain) AMType *outputType;
@property(readonly, retain) AMType *inputType;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly) NSString *headerInputType;
@property(readonly) NSDictionary *metaData;
@property(readonly, copy) NSString *workflowTypeIdentifier;
- (void)syncMetaDataForDocument:(id)arg1;
- (void)setFromDictionary:(id)arg1;
- (id)copy;
- (void)dealloc;
- (id)initWithPersonality:(id)arg1;

@end

