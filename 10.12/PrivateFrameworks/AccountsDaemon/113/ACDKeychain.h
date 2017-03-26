//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ACDKeychain : NSObject
{
}

+ (void)_migrateKeychainItemIfNecessary:(id)arg1;
+ (void)_addKnownMigratedKeychainItem:(id)arg1;
+ (BOOL)_isKnownMigratedKeychainItem:(id)arg1;
+ (id)_knownMigratedKeychainItems;
+ (id)keychainDeletedAccounts;
+ (void)removeTombstoneForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 extension:(id)arg4 error:(id *)arg5;
+ (void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (void)updateSyncItemForServiceName:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)updateSyncItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)addSyncItemWithServiceName:(id)arg1 hostname:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)addSyncItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 extension:(id)arg5 error:(id *)arg6;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 options:(id)arg4 error:(id *)arg5;
+ (BOOL)canAccessPasswordsWithPolicy:(id)arg1;

@end

