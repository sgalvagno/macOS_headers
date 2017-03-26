//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INPersonExport-Protocol.h>
#import <Intents/INSpeakable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@interface INPerson : NSObject <INSpeakable, INCacheableContainer, INPersonExport, NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_userInput;
    NSArray *_aliases;
    long long _suggestionType;
    NSArray *_alternatives;
    INPersonHandle *_personHandle;
    INImage *_image;
    NSString *_contactIdentifier;
    NSString *_customIdentifier;
    NSString *_relationship;
}

+ (BOOL)supportsSecureCoding;
@property(copy) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property long long suggestionType; // @synthesize suggestionType=_suggestionType;
@property(copy) NSArray *aliases; // @synthesize aliases=_aliases;
@property(copy) NSString *relationship; // @synthesize relationship=_relationship;
@property(copy) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property(copy) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(copy) INImage *image; // @synthesize image=_image;
@property(copy) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property(copy) INPersonHandle *personHandle; // @synthesize personHandle=_personHandle;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *alternativeSiriMatches;
- (id)_dictionaryRepresentation;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 alternatives:(id)arg11;
- (id)_aliases;
- (id)_userInput;
- (id)_displayName;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(copy) NSString *displayName;
@property(copy) NSString *handle; // @dynamic handle;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
@property(readonly, copy, nonatomic) NSString *fullName;
@property(readonly, copy, nonatomic) NSString *userURIString;
@property(readonly, copy, nonatomic) NSString *userIdentifier;
@property(readonly, copy, nonatomic) NSString *userName;
@property(readonly, copy, nonatomic) NSString *lastName;
@property(readonly, copy, nonatomic) NSString *firstName;
@property(readonly, copy) NSString *description;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
@property(readonly, copy) NSArray *siriMatches;
@property(readonly) NSString *identifier;
@property(readonly) NSString *pronunciationHint;
@property(readonly) NSString *spokenPhrase;
- (id)cacheableObjects;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

