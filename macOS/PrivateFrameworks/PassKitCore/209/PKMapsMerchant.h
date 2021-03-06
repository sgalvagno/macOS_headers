//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "PKCloudStoreCoding.h"

@class CLLocation, CNPostalAddress, MKWalletMerchantStylingInfo, NSString, NSURL;

@interface PKMapsMerchant : NSObject <NSSecureCoding, PKCloudStoreCoding>
{
    int _resultProviderIdentifier;
    unsigned long long _identifier;
    NSString *_name;
    NSString *_phoneNumber;
    NSURL *_url;
    double _locationLatitude;
    double _locationLongitude;
    CNPostalAddress *_postalAddress;
    NSURL *_heroImageURL;
    NSString *_heroImageAttributionName;
    long long _category;
    NSString *_detailedCategory;
    MKWalletMerchantStylingInfo *_stylingInfo;
    NSURL *_businessChatURL;
}

+ (BOOL)supportsSecureCoding;
+ (void)deleteFromCloudStoreRecord:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSURL *businessChatURL; // @synthesize businessChatURL=_businessChatURL;
@property(retain, nonatomic) MKWalletMerchantStylingInfo *stylingInfo; // @synthesize stylingInfo=_stylingInfo;
@property(copy, nonatomic) NSString *detailedCategory; // @synthesize detailedCategory=_detailedCategory;
@property(nonatomic) long long category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *heroImageAttributionName; // @synthesize heroImageAttributionName=_heroImageAttributionName;
@property(copy, nonatomic) NSURL *heroImageURL; // @synthesize heroImageURL=_heroImageURL;
@property(copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(copy, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int resultProviderIdentifier; // @synthesize resultProviderIdentifier=_resultProviderIdentifier;
@property(nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (id)_jsonEncodedPostalAddressString;
- (unsigned long long)hash;
- (BOOL)isEqualToMapsMerchant:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)itemType;
- (id)recordTypesAndNamesIncludingServerData:(BOOL)arg1;
- (void)encodeServerAndDeviceDataWithCloudStoreCoder:(id)arg1;
- (void)encodeWithCloudStoreCoder:(id)arg1;
- (id)initWithCloudStoreCoder:(id)arg1;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(copy, nonatomic) CLLocation *location;
- (BOOL)hasCloudArchivableDeviceData;
- (BOOL)isCloudArchivableDeviceDataEqual:(id)arg1;
- (id)jsonRepresentation;

@end

