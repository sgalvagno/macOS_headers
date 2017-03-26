//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class ABAddressBook, NSDictionary, NSString;

@protocol ABAccountPersistenceBackend <NSObject>
- (void)deletePersistentValuesWithAddressBook:(ABAddressBook *)arg1;
- (BOOL)savePersistentValues:(NSDictionary *)arg1 postNotifications:(BOOL)arg2;
- (void)rediscoverPersistentValuesWithCompletionHandler:(void (^)(ABACAccount *, NSError *))arg1;
- (NSDictionary *)loadPersistentValues;
- (NSString *)parentAccountTypeIdentifier;
- (NSString *)accountTypeIdentifier;
- (NSString *)acAccountIdentifier;
@end

