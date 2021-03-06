//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppSSOCore/SOProfile.h>

@class NSDictionary, NSString;

@interface SOFullProfile : SOProfile
{
    NSString *_extensionTeamIdentifier;
    NSDictionary *_extensionData;
}

@property(retain, nonatomic) NSDictionary *extensionData; // @synthesize extensionData=_extensionData;
@property(retain, nonatomic) NSString *extensionTeamIdentifier; // @synthesize extensionTeamIdentifier=_extensionTeamIdentifier;
- (void).cxx_destruct;
- (id)copyProfileForClient;
- (id)copyProfile;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)removeURLPrefix:(id)arg1;
- (id)initWithProfileData:(id)arg1;

@end

