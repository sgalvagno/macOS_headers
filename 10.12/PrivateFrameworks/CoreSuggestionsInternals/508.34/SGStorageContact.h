//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableSet, NSString, SGContactDetailsHolder, SGRecordId;

@interface SGStorageContact : NSObject
{
    NSMutableSet *_profiles;
    NSArray *_internalDetectedPhones;
    NSArray *_internalDetectedAddresses;
    NSArray *_internalDetectedEmailAddresses;
    NSArray *_internalDetectedIMAddresses;
    SGContactDetailsHolder *_internalDetectedDetails;
    struct _opaque_pthread_mutex_t _detectedDetailsLock;
    long long _masterEntityId;
    SGRecordId *_recordId;
}

+ (void)subtractDetailsFromSGContact:(id)arg1 thatMatchCNContact:(id)arg2;
+ (id)mergeAll:(id)arg1;
+ (id)contactWithMasterEntityId:(long long)arg1;
+ (id)contactFromContactEntity:(id)arg1;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
@property(readonly, nonatomic) long long masterEntityId; // @synthesize masterEntityId=_masterEntityId;
- (void).cxx_destruct;
- (BOOL)hasProfileFromTextMessage;
- (BOOL)hasProfileFromInteraction;
- (id)bestProfile;
- (id)convertToContact:(id)arg1 sourceEntity:(id)arg2 enrichments:(id)arg3;
- (id)convertToContact:(id)arg1;
- (id)loadEmailAddressDetailsFrom:(id)arg1;
- (id)loadAddressDetailsFrom:(id)arg1;
- (id)loadPhoneDetailsFrom:(id)arg1;
- (id)loadAllDetailsFrom:(id)arg1;
- (void)reload;
- (void)merge:(id)arg1;
- (BOOL)canMerge:(id)arg1;
@property(readonly, nonatomic) NSString *name;
- (id)allNames;
- (id)profiles;
- (void)addProfile:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqualToStorageContact:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;

@end

