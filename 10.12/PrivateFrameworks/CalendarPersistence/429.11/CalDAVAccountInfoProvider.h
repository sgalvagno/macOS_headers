//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CalendarPersistence/CalDAVBasicAccountInfoProvider.h>

@class CalDAVPrincipalSearchPropertySet, NSManagedObjectID, NSString, NSURL;

@interface CalDAVAccountInfoProvider : CalDAVBasicAccountInfoProvider
{
    NSURL *_overrideBaseURL;
    BOOL _useKerberos;
    BOOL _isDelegate;
    BOOL _isManagedAttachmentSupported;
    NSString *_fullName;
    NSString *_mainPrincipalUID;
    NSManagedObjectID *_mainPrincipalID;
    NSString *_accountCollectionSetName;
    CalDAVPrincipalSearchPropertySet *_accountSearchPropertySet;
}

+ (id)searchPropertySetForAccount:(id)arg1;
+ (id)providerFromPrincipal:(id)arg1;
@property(retain) CalDAVPrincipalSearchPropertySet *accountSearchPropertySet; // @synthesize accountSearchPropertySet=_accountSearchPropertySet;
@property(retain) NSString *accountCollectionSetName; // @synthesize accountCollectionSetName=_accountCollectionSetName;
@property(retain) NSManagedObjectID *mainPrincipalID; // @synthesize mainPrincipalID=_mainPrincipalID;
@property(retain) NSString *mainPrincipalUID; // @synthesize mainPrincipalUID=_mainPrincipalUID;
@property(retain) NSString *fullName; // @synthesize fullName=_fullName;
@property BOOL isManagedAttachmentSupported; // @synthesize isManagedAttachmentSupported=_isManagedAttachmentSupported;
@property BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property BOOL useKerberos; // @synthesize useKerberos=_useKerberos;
@property(retain) NSURL *overrideBaseURL; // @synthesize overrideBaseURL=_overrideBaseURL;
- (id)additionalHeaderValues;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)arg1;
- (void)noteSearchPropertySetChange:(id)arg1;
- (void)noteCollectionSetNameChange:(id)arg1;
- (void)noteHomeSetOnDifferentHost:(id)arg1;
- (BOOL)shouldTurnModalOnBadPassword;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)arg1;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)handleTrustChallenge:(id)arg1;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)principalURL;
- (id)absoluteURLForPath:(id)arg1 overrideBaseURL:(id)arg2;
- (id)absoluteURLForPath:(id)arg1;
- (void)dealloc;
- (void)updateAccountPropertiesFromPrincipal:(id)arg1;
- (BOOL)isEqualToProvider:(id)arg1;

@end

