//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@class NSConnection, NSFileManager;

@interface SecurityFixerApp : NSObject
{
    NSFileManager *_fileManager;
    NSConnection *_connection;
    id _securityFixerTool;
}

- (void)dealloc;
- (void)applicationDidFinishLaunching:(id)arg1;
- (oneway void)registerSecurityFixerTool:(in byref id)arg1;
- (void)connectionDidDieNotification:(id)arg1;
- (BOOL)launchSecurityFixerTool;
- (void)checkStartupItemSecurity;
- (BOOL)isFileSecureAtPath:(id)arg1;
- (BOOL)displayDialogForInsecureStartupDirectory;
- (BOOL)displayDialogForInsecureStartupItemWithPath:(id)arg1;
- (void)displayWrapUpDialog;
- (id)_preauthorizeRight:(char *)arg1;

@end

