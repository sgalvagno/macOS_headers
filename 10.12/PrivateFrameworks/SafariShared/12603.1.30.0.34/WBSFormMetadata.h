//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface WBSFormMetadata : NSObject <NSSecureCoding>
{
    BOOL _allowsAutocomplete;
    BOOL _containsActiveElement;
    BOOL _bestForCredentialPreFill;
    BOOL _bestForPageLevelAutoFill;
    BOOL _visible;
    BOOL _usesRelAsync;
    BOOL _usesGeneratedPassword;
    BOOL _isSearchForm;
    NSDictionary *_annotations;
    unsigned long long _type;
    NSString *_confirmPasswordElementUniqueID;
    NSString *_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
    NSURL *_action;
    NSArray *_controls;
    long long _uniqueID;
    NSString *_oldPasswordElementUniqueID;
    NSString *_passwordElementUniqueID;
    NSString *_textSample;
    NSString *_userNameElementUniqueID;
    unsigned long long _requestType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) BOOL isSearchForm; // @synthesize isSearchForm=_isSearchForm;
@property(readonly, nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(readonly, nonatomic) BOOL usesGeneratedPassword; // @synthesize usesGeneratedPassword=_usesGeneratedPassword;
@property(readonly, copy, nonatomic) NSString *userNameElementUniqueID; // @synthesize userNameElementUniqueID=_userNameElementUniqueID;
@property(readonly, copy, nonatomic) NSString *textSample; // @synthesize textSample=_textSample;
@property(readonly, copy, nonatomic) NSString *passwordElementUniqueID; // @synthesize passwordElementUniqueID=_passwordElementUniqueID;
@property(readonly, copy, nonatomic) NSString *oldPasswordElementUniqueID; // @synthesize oldPasswordElementUniqueID=_oldPasswordElementUniqueID;
@property(readonly, nonatomic) BOOL usesRelAsync; // @synthesize usesRelAsync=_usesRelAsync;
@property(readonly, nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(readonly, nonatomic, getter=isBestForPageLevelAutoFill) BOOL bestForPageLevelAutoFill; // @synthesize bestForPageLevelAutoFill=_bestForPageLevelAutoFill;
@property(readonly, nonatomic, getter=isBestForCredentialPreFill) BOOL bestForCredentialPreFill; // @synthesize bestForCredentialPreFill=_bestForCredentialPreFill;
@property(readonly, nonatomic) long long uniqueID; // @synthesize uniqueID=_uniqueID;
@property(readonly, copy, nonatomic) NSArray *controls; // @synthesize controls=_controls;
@property(readonly, nonatomic) NSURL *action; // @synthesize action=_action;
@property(readonly, copy, nonatomic) NSString *firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID; // @synthesize firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID=_firstCreditCardCardholderFieldOrCreditCardNumberFieldUniqueID;
@property(readonly, nonatomic) BOOL containsActiveElement; // @synthesize containsActiveElement=_containsActiveElement;
@property(readonly, copy, nonatomic) NSString *confirmPasswordElementUniqueID; // @synthesize confirmPasswordElementUniqueID=_confirmPasswordElementUniqueID;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(readonly, nonatomic) BOOL allowsAutocomplete; // @synthesize allowsAutocomplete=_allowsAutocomplete;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)formMetadataByReplacingControlsWith:(id)arg1;
- (id)_init;
- (id)initWithJSValue:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

