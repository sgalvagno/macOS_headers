//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SALocalSearchAnswerRerouteSuggestion : SADomainCommand
{
}

+ (id)answerRerouteSuggestionWithDictionary:(id)arg1 context:(id)arg2;
+ (id)answerRerouteSuggestion;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *response;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

