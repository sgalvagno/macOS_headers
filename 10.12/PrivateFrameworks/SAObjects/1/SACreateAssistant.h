//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SABaseCommand.h>

#import <SAObjects/SAServerBoundCommand-Protocol.h>

@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>
{
}

+ (id)createAssistantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createAssistant;
@property(copy, nonatomic) NSData *validationData;
@property(copy, nonatomic) NSString *speechId;
@property(copy, nonatomic) NSData *linkedValidationData;
@property(copy, nonatomic) NSString *linkedSpeechId;
@property(copy, nonatomic) NSString *linkedAssistantId;
@property(copy, nonatomic) NSString *language;
@property(copy, nonatomic) NSString *connectionType;
@property(copy, nonatomic) NSString *connectionMode;
@property(copy, nonatomic) NSData *activationToken;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(copy, nonatomic) NSString *aceId; // @dynamic aceId;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSString *refId; // @dynamic refId;
@property(readonly) Class superclass;

@end

