//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SACFClientFlowRequestCallback : AceObject <SAAceSerializable>
{
}

+ (id)clientFlowRequestCallbackWithDictionary:(id)arg1 context:(id)arg2;
+ (id)clientFlowRequestCallback;
@property(copy, nonatomic) NSString *weightedPromptTargetDomain;
@property(copy, nonatomic) NSNumber *weightedPromptStrict;
@property(copy, nonatomic) NSArray *weightedPromptResponseTargets;
@property(copy, nonatomic) NSArray *weightedPromptAbortValues;
@property(copy, nonatomic) NSString *nlInput;
@property(copy, nonatomic) NSString *disambiguationPromptTargetDomain;
@property(copy, nonatomic) NSArray *disambiguationPromptResponseTargets;
@property(copy, nonatomic) NSNumber *disambiguationPromptAmbiguityId;
@property(copy, nonatomic) NSArray *disambiguationPromptAbortValues;
@property(copy, nonatomic) NSArray *dictationPromptTargetNodes;
@property(copy, nonatomic) NSString *dictationPromptTargetDomain;
@property(copy, nonatomic) NSArray *dictationPromptAbortValues;
@property(copy, nonatomic) NSArray *applicationContextObjects;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

