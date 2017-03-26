//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKRecordID, CKUserIdentity, NSData, NSString;

@interface CKShareParticipant : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _isCurrentUser;
    BOOL _createdInProcess;
    BOOL _acceptedInProcess;
    CKUserIdentity *_userIdentity;
    long long _type;
    long long _acceptanceStatus;
    long long _permission;
    NSString *_participantID;
    CKRecordID *_shareRecordID;
    NSString *_inviterID;
    CKUserIdentity *_originalUserIdentity;
    long long _originalParticipantType;
    long long _originalAcceptanceStatus;
    long long _originalPermission;
    NSData *_protectionInfo;
    NSData *_encryptedPersonalInfo;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSData *encryptedPersonalInfo; // @synthesize encryptedPersonalInfo=_encryptedPersonalInfo;
@property(retain, nonatomic) NSData *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(nonatomic) BOOL acceptedInProcess; // @synthesize acceptedInProcess=_acceptedInProcess;
@property(nonatomic) BOOL createdInProcess; // @synthesize createdInProcess=_createdInProcess;
@property(nonatomic) long long originalPermission; // @synthesize originalPermission=_originalPermission;
@property(nonatomic) long long originalAcceptanceStatus; // @synthesize originalAcceptanceStatus=_originalAcceptanceStatus;
@property(nonatomic) long long originalParticipantType; // @synthesize originalParticipantType=_originalParticipantType;
@property(retain, nonatomic) CKUserIdentity *originalUserIdentity; // @synthesize originalUserIdentity=_originalUserIdentity;
@property(retain, nonatomic) NSString *inviterID; // @synthesize inviterID=_inviterID;
@property(nonatomic) BOOL isCurrentUser; // @synthesize isCurrentUser=_isCurrentUser;
@property(retain, nonatomic) CKRecordID *shareRecordID; // @synthesize shareRecordID=_shareRecordID;
@property(retain, nonatomic) NSString *participantID; // @synthesize participantID=_participantID;
@property(nonatomic) long long permission; // @synthesize permission=_permission;
@property(nonatomic) long long acceptanceStatus; // @synthesize acceptanceStatus=_acceptanceStatus;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) CKUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)unifiedContactsInStore:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (void)_stripPersonalInfo;
- (id)debugDescription;
- (id)description;
- (id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithUserIdentity:(id)arg1;

@end

