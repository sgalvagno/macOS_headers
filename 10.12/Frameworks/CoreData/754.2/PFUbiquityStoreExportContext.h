//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSQLCore, NSSet, NSString, PFUbiquityLocation, PFUbiquitySwitchboardCacheWrapper;

__attribute__((visibility("hidden")))
@interface PFUbiquityStoreExportContext : NSObject
{
    PFUbiquityLocation *_ubiquityRootLocation;
    NSString *_localPeerID;
    NSString *_storeName;
    NSMutableSet *_transactionEntries;
    NSSQLCore *_store;
    PFUbiquitySwitchboardCacheWrapper *_cacheWrapper;
}

@property(retain, nonatomic) PFUbiquitySwitchboardCacheWrapper *cacheWrapper; // @synthesize cacheWrapper=_cacheWrapper;
@property(retain, nonatomic) NSSQLCore *store; // @synthesize store=_store;
@property(readonly, nonatomic) NSSet *transactionEntries; // @synthesize transactionEntries=_transactionEntries;
@property(readonly, nonatomic) NSString *storeName; // @synthesize storeName=_storeName;
@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) PFUbiquityLocation *ubiquityRootLocation; // @synthesize ubiquityRootLocation=_ubiquityRootLocation;
- (id)addTransactionEntryForGlobalID:(id)arg1 andTransactionType:(int)arg2;
- (id)description;
- (void)dealloc;
- (id)initWithStoreName:(id)arg1 andUbiquityRootLocation:(id)arg2 forLocalPeerID:(id)arg3;

@end

