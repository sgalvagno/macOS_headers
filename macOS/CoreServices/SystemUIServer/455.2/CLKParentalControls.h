//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CLKParentalControls : NSObject
{
    struct __CFBundle *familyControlsBundle;
    CDUnknownFunctionPointerType _NextForcedUserLogoutFunc;
    CDUnknownFunctionPointerType _ManagedDomainsForUserFunc;
}

- (id)timeRestriction:(long long *)arg1;
- (id)nextForcedLogoutDateRestriction:(long long *)arg1;
- (BOOL)userHasTimeRestrictionEnabled;
- (BOOL)isManagedUser;
- (void)dealloc;
- (BOOL)_loadFamilyControlsBundleIfNeeded;
- (struct __CFBundle *)_copyFamilyControlsBundle;

@end

