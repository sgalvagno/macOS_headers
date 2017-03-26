//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Safari/FirefoxImporter.h>

#import <Safari/BrowserCredentialImporter-Protocol.h>

@class NSString;
@protocol BrowserCredentialImporterDelegate;

__attribute__((visibility("hidden")))
@interface FirefoxCredentialImporter : FirefoxImporter <BrowserCredentialImporter>
{
    NSString *_masterPassword;
    BOOL _shouldSendImporterRequiresMasterPassword;
    id <BrowserCredentialImporterDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_encryptedCredentials;
- (void)_importCredentials;
- (void)retryCredentialImport;
- (void)cancelCredentialImport;
- (void)importCredentialsWithDelegate:(id)arg1;
- (void)setShouldSendImporterRequiresMasterPassword:(BOOL)arg1;
- (void)setMasterPassword:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

