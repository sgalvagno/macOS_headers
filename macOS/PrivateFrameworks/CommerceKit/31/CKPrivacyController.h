//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CKPrivacyController : NSObject
{
}

+ (BOOL)_shouldDisableGDPR;
+ (BOOL)shouldDisplayPrivacyLinkForIdentifier:(id)arg1 storeClient:(id)arg2;
+ (void)acknowledgePrivacyLinkForIdentifier:(id)arg1 storeClient:(id)arg2;
+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)arg1 account:(id)arg2;
+ (BOOL)_mergeLocalPrivacyConsentWithAccount:(id)arg1;

@end

