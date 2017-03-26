//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKEncryptedData, CKRecordID, CKReference, NSArray, NSData, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURL;

@interface CKRecord : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableDictionary *_values;
    NSMutableDictionary *_originalValues;
    NSMutableSet *_changedKeysSet;
    BOOL _hasUpdatedShare;
    BOOL _hasUpdatedParent;
    BOOL _trackChanges;
    BOOL _knownToServer;
    BOOL _wasCached;
    BOOL _serializeProtectionData;
    BOOL _wantsPublicSharingKey;
    BOOL _wantsChainPCS;
    BOOL _useLightweightPCS;
    NSString *_recordType;
    CKRecordID *_recordID;
    CKRecordID *_creatorUserRecordID;
    NSDate *_creationDate;
    CKRecordID *_lastModifiedUserRecordID;
    NSDate *_modificationDate;
    CKReference *_share;
    CKReference *_parent;
    CKContainerID *_containerID;
    CKReference *_previousShare;
    CKReference *_previousParent;
    CKEncryptedData *_chainPrivateKey;
    NSData *_chainProtectionInfo;
    NSData *_chainParentPublicKeyID;
    NSArray *_tombstonedPublicKeyIDs;
    NSURL *_mutableURL;
    NSString *_modifiedByDevice;
    NSString *_etag;
    NSArray *_conflictLoserEtags;
    NSData *_protectionData;
    NSString *_previousProtectionEtag;
    NSString *_protectionEtag;
    NSString *_zoneProtectionEtag;
    NSString *_shareEtag;
    NSString *_routingKey;
    NSString *_baseToken;
    CKEncryptedData *_mutableEncryptedPublicSharingKey;
    long long _permission;
    NSDictionary *_pluginFields;
    NSString *_previousProtectionEtagFromUnitTest;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)shareURLWithShortToken:(id)arg1 shareTitle:(id)arg2 shareType:(id)arg3 containerID:(id)arg4;
+ (id)decryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)encryptFullToken:(id)arg1 shortSharingTokenData:(id)arg2;
+ (id)fullTokenFromBaseToken:(id)arg1 privateToken:(id)arg2;
+ (id)recordWithDuplicatedPackagesOfRecord:(id)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *previousProtectionEtagFromUnitTest; // @synthesize previousProtectionEtagFromUnitTest=_previousProtectionEtagFromUnitTest;
@property(copy, nonatomic) NSDictionary *pluginFields; // @synthesize pluginFields=_pluginFields;
@property long long permission; // @synthesize permission=_permission;
@property(nonatomic) BOOL useLightweightPCS; // @synthesize useLightweightPCS=_useLightweightPCS;
@property(nonatomic) BOOL wantsChainPCS; // @synthesize wantsChainPCS=_wantsChainPCS;
@property(retain, nonatomic) CKEncryptedData *mutableEncryptedPublicSharingKey; // @synthesize mutableEncryptedPublicSharingKey=_mutableEncryptedPublicSharingKey;
@property(nonatomic) BOOL wantsPublicSharingKey; // @synthesize wantsPublicSharingKey=_wantsPublicSharingKey;
@property(retain, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(retain, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(retain, nonatomic) NSString *shareEtag; // @synthesize shareEtag=_shareEtag;
@property(retain, nonatomic) NSString *zoneProtectionEtag; // @synthesize zoneProtectionEtag=_zoneProtectionEtag;
@property(retain, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property(retain, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property(retain, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property(nonatomic) BOOL serializeProtectionData; // @synthesize serializeProtectionData=_serializeProtectionData;
@property(nonatomic) BOOL wasCached; // @synthesize wasCached=_wasCached;
@property(nonatomic, getter=isKnownToServer) BOOL knownToServer; // @synthesize knownToServer=_knownToServer;
@property(retain, nonatomic) NSSet *changedKeysSet; // @synthesize changedKeysSet=_changedKeysSet;
@property(retain, nonatomic) NSArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property(copy, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(nonatomic) BOOL trackChanges; // @synthesize trackChanges=_trackChanges;
@property(retain, nonatomic) NSDictionary *originalValues; // @synthesize originalValues=_originalValues;
@property(retain, nonatomic) NSDictionary *values; // @synthesize values=_values;
@property(copy, nonatomic) NSURL *mutableURL; // @synthesize mutableURL=_mutableURL;
@property(retain, nonatomic) NSArray *tombstonedPublicKeyIDs; // @synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs;
@property(retain, nonatomic) NSData *chainParentPublicKeyID; // @synthesize chainParentPublicKeyID=_chainParentPublicKeyID;
@property(retain, nonatomic) NSData *chainProtectionInfo; // @synthesize chainProtectionInfo=_chainProtectionInfo;
@property(retain, nonatomic) CKEncryptedData *chainPrivateKey; // @synthesize chainPrivateKey=_chainPrivateKey;
@property(nonatomic) BOOL hasUpdatedParent; // @synthesize hasUpdatedParent=_hasUpdatedParent;
@property(retain, nonatomic) CKReference *previousParent; // @synthesize previousParent=_previousParent;
@property(nonatomic) BOOL hasUpdatedShare; // @synthesize hasUpdatedShare=_hasUpdatedShare;
@property(retain, nonatomic) CKReference *previousShare; // @synthesize previousShare=_previousShare;
@property(copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property(copy, nonatomic) CKReference *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) CKReference *share; // @synthesize share=_share;
@property(copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(copy, nonatomic) CKRecordID *lastModifiedUserRecordID; // @synthesize lastModifiedUserRecordID=_lastModifiedUserRecordID;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) CKRecordID *creatorUserRecordID; // @synthesize creatorUserRecordID=_creatorUserRecordID;
@property(copy, nonatomic) CKRecordID *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (void)claimPackagesWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)removePackages;
- (void)releasePackages;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeSystemFieldsWithCoder:(id)arg1;
- (void)setParentReferenceFromRecordID:(id)arg1;
- (void)setParentReferenceFromRecord:(id)arg1;
- (void)CKAssignToContainerWithID:(id)arg1;
@property(readonly, nonatomic) BOOL hasModifiedEncryptedData;
@property(readonly, nonatomic) BOOL hasEncryptedData;
@property(readonly, nonatomic) BOOL hasPropertiesRequiringDecryption;
@property(readonly, nonatomic) BOOL hasModifiedPropertiesRequiringEncryption;
@property(readonly, nonatomic) BOOL hasPropertiesRequiringEncryption;
@property(readonly, nonatomic) BOOL containsPackageValues;
@property(readonly, nonatomic) BOOL containsAssetValues;
- (BOOL)_checkProperties:(BOOL)arg1 withValueCheckBlock:(CDUnknownBlockType)arg2;
- (id)allTokens;
- (id)_allStrings;
- (id)allKeys;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObjectNoValidate:(id)arg1 forKey:(id)arg2;
- (void)_sanitizeRecordValue:(id)arg1;
- (void)_validateRecordValue:(id)arg1;
- (void)_validateRecordKey:(id)arg1;
- (void)_validateRecordName:(id)arg1;
- (void)setNilValueForKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
@property(readonly, copy, nonatomic) NSString *recordChangeTag;
- (void)resetChangedKeys;
- (id)changedKeys;
@property(readonly, nonatomic) unsigned long long size;
- (unsigned long long)_sizeOfRecordValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_sizeOfRecordID:(id)arg1;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (id)debugDescription;
@property(readonly, copy, nonatomic) NSURL *URL;
@property(readonly, nonatomic) NSString *shortToken;
- (id)decryptFullToken:(id)arg1;
@property(readonly, nonatomic) NSData *encryptedFullTokenData;
@property(readonly, nonatomic) NSData *shortSharingTokenHashData;
- (id)shortSharingToken;
@property(readonly, nonatomic) NSData *shortSharingTokenData;
@property(readonly, nonatomic) NSString *fullToken;
@property(readonly, nonatomic) NSString *privateToken;
@property(readonly, nonatomic) NSData *encryptedPublicSharingKey;
- (id)copyWithOriginalValues;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(id)arg1 zoneID:(id)arg2;
- (id)initWithRecordType:(id)arg1;
- (id)initWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)_initSkippingValidationWithRecordType:(id)arg1 recordID:(id)arg2;
- (id)init;

@end

