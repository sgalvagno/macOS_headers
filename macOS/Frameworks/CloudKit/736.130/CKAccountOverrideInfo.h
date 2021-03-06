//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface CKAccountOverrideInfo : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isUnitTestingAccount;
    BOOL _accountWantsPushRegistration;
    BOOL _accountWantsFlowControl;
    NSString *_email;
    NSString *_password;
    NSString *_secondEmail;
    NSDictionary *_accountPropertyOverrides;
    NSDictionary *_overridesByDataclass;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *overridesByDataclass; // @synthesize overridesByDataclass=_overridesByDataclass;
@property(copy, nonatomic) NSDictionary *accountPropertyOverrides; // @synthesize accountPropertyOverrides=_accountPropertyOverrides;
@property(nonatomic) BOOL accountWantsFlowControl; // @synthesize accountWantsFlowControl=_accountWantsFlowControl;
@property(nonatomic) BOOL accountWantsPushRegistration; // @synthesize accountWantsPushRegistration=_accountWantsPushRegistration;
@property(nonatomic) BOOL isUnitTestingAccount; // @synthesize isUnitTestingAccount=_isUnitTestingAccount;
@property(copy, nonatomic) NSString *secondEmail; // @synthesize secondEmail=_secondEmail;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initAnonymousAccount;
- (id)initWithEmail:(id)arg1 password:(id)arg2;

@end

