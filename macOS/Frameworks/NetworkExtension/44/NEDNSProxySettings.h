//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEConfigurationValidating.h"
#import "NEPrettyDescription.h"
#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSArray, NSData, NSString;

@interface NEDNSProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    long long _type;
    NSArray *_servers;
    NSString *_domain;
    NSData *_publicKey;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain) NSData *publicKey; // @synthesize publicKey=_publicKey;
@property(retain) NSString *domain; // @synthesize domain=_domain;
@property(readonly) NSArray *servers; // @synthesize servers=_servers;
@property(readonly) long long type; // @synthesize type=_type;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 servers:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

