//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SAObjects/SASettingSetBool.h>

@class NSString;

@interface SASettingSetSiriAuthorizationForApp : SASettingSetBool
{
}

+ (id)setSiriAuthorizationForAppWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setSiriAuthorizationForApp;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

