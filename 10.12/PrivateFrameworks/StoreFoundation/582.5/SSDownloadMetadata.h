//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSCopying-Protocol.h>
#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSLock, NSMutableDictionary, NSNumber, NSString, NSURL;

@interface SSDownloadMetadata : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_dictionary;
    NSLock *_lock;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_valueForFirstAvailableKey:(id)arg1;
@property(retain) NSArray *sinfs;
- (void)setValue:(id)arg1 forMetadataKey:(id)arg2;
@property(retain) NSString *iapInstallPath;
@property(retain) NSString *fileExtension;
@property(retain) NSString *appleID;
@property(retain) NSData *epubRightsData;
@property(retain) NSString *downloadKey;
@property(retain) NSDictionary *dictionary;
- (id)localServerInfo;
@property(readonly) NSString *iapContentVersion;
@property(readonly) NSNumber *iapContentSize;
@property(readonly) NSArray *assets;
@property BOOL animationExpected;
@property(retain) NSString *transactionIdentifier;
@property(retain) NSString *title;
@property(retain) NSURL *thumbnailImageURL;
@property(retain) NSString *subtitle;
@property(retain) NSString *ipaInstallPath;
@property BOOL isMDMProvided;
- (void)setUncompressedSize:(id)arg1;
- (void)setExtractionCanBeStreamed:(BOOL)arg1;
@property(retain) NSString *buyParameters;
@property(retain) NSURL *preflightPackageURL;
@property(getter=isRental) BOOL rental;
@property(retain) NSString *kind;
@property unsigned long long itemIdentifier;
@property(retain) NSString *genre;
@property(retain) NSNumber *durationInMilliseconds;
@property(retain) NSString *collectionName;
@property(retain) NSString *bundleVersion;
@property(retain) NSString *bundleIdentifier;
@property BOOL artworkIsPrerendered;
@property(readonly) NSString *bundleShortVersionString;
@property(readonly) NSString *bundleDisplayName;
@property(readonly) NSNumber *uncompressedSize;
@property(readonly) BOOL extractionCanBeStreamed;
@property(readonly) BOOL needsSoftwareInstallOperation;
- (id)deltaPackages;
@property(readonly, getter=isSample) BOOL sample;
@property(readonly) NSString *purchaseDate;
@property(readonly) BOOL isExplicitContents;
@property(readonly) NSNumber *ageRestriction;
@property(retain) NSString *productType;
@property(readonly) NSNumber *version;
@property(readonly) NSString *applicationIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithKind:(id)arg1;
- (id)init;

@end

