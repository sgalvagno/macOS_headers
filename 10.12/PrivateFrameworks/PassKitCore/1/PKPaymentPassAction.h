//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString, PKEnteredValueActionItem;

@interface PKPaymentPassAction : NSObject <NSSecureCoding>
{
    NSDictionary *_rawDictionary;
    NSDictionary *_localizations;
    BOOL _hasRemoteContent;
    BOOL _featured;
    NSString *_identifier;
    unsigned long long _type;
    NSString *_title;
    NSString *_actionDescription;
    NSString *_confirmationTitle;
    NSString *_relevantPropertyIdentifier;
    NSDate *_availableFrom;
    NSDate *_availableUntil;
    NSString *_unavailableBeforeReason;
    NSString *_unavailableAfterReason;
    NSString *_serviceProviderIdentifier;
    NSString *_serviceProviderCountryCode;
    NSArray *_serviceProviderSupportedNetworks;
    unsigned long long _serviceProviderCapabilities;
    PKEnteredValueActionItem *_enteredValueItem;
    NSString *_headerText;
    NSString *_footerText;
    NSArray *_selectedActionItems;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *selectedActionItems; // @synthesize selectedActionItems=_selectedActionItems;
@property(readonly, copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
@property(readonly, nonatomic) PKEnteredValueActionItem *enteredValueItem; // @synthesize enteredValueItem=_enteredValueItem;
@property(readonly, nonatomic) unsigned long long serviceProviderCapabilities; // @synthesize serviceProviderCapabilities=_serviceProviderCapabilities;
@property(readonly, copy, nonatomic) NSArray *serviceProviderSupportedNetworks; // @synthesize serviceProviderSupportedNetworks=_serviceProviderSupportedNetworks;
@property(readonly, copy, nonatomic) NSString *serviceProviderCountryCode; // @synthesize serviceProviderCountryCode=_serviceProviderCountryCode;
@property(readonly, copy, nonatomic) NSString *serviceProviderIdentifier; // @synthesize serviceProviderIdentifier=_serviceProviderIdentifier;
@property(readonly, copy, nonatomic) NSString *unavailableAfterReason; // @synthesize unavailableAfterReason=_unavailableAfterReason;
@property(readonly, copy, nonatomic) NSString *unavailableBeforeReason; // @synthesize unavailableBeforeReason=_unavailableBeforeReason;
@property(readonly, copy, nonatomic) NSDate *availableUntil; // @synthesize availableUntil=_availableUntil;
@property(readonly, copy, nonatomic) NSDate *availableFrom; // @synthesize availableFrom=_availableFrom;
@property(readonly, copy, nonatomic) NSString *relevantPropertyIdentifier; // @synthesize relevantPropertyIdentifier=_relevantPropertyIdentifier;
@property(readonly, nonatomic) BOOL featured; // @synthesize featured=_featured;
@property(readonly, copy, nonatomic) NSString *confirmationTitle; // @synthesize confirmationTitle=_confirmationTitle;
@property(readonly, copy, nonatomic) NSString *actionDescription; // @synthesize actionDescription=_actionDescription;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) BOOL hasRemoteContent; // @synthesize hasRemoteContent=_hasRemoteContent;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)actionUpdatedWithDictionary:(id)arg1;
- (void)_processLocalizableStrings:(CDUnknownBlockType)arg1;
- (id)_localizableKeys;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end

