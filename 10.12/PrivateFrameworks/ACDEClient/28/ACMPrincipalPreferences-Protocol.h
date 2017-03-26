//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ACDEClient/ACMBasePreferences-Protocol.h>

@class ACFPrincipal, NSNumber, NSString;
@protocol ACMPrincipalPreferences;

@protocol ACMPrincipalPreferences <ACMBasePreferences>
+ (id <ACMPrincipalPreferences>)preferencesForPrincipal:(ACFPrincipal *)arg1;
@property(copy, nonatomic) NSNumber *personID;
@property(copy, nonatomic) NSNumber *clientSecretCreateDate;
@property(copy, nonatomic) NSString *clientSecret;
@property(readonly, retain) ACFPrincipal *principal;
- (NSString *)realm;
- (NSString *)userName;
- (id <ACMPrincipalPreferences>)initWithPrincipal:(ACFPrincipal *)arg1;
@end

