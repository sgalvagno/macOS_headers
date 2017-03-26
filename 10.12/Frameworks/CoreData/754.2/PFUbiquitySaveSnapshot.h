//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquitySaveSnapshot : NSObject
{
    NSDate *_transactionDate;
    NSString *_modelVersionHash;
    NSString *_exportingPeerID;
    NSString *_localPeerID;
    NSMutableDictionary *_storeNameToStoreSaveSnapshots;
}

@property(readonly, nonatomic) NSString *localPeerID; // @synthesize localPeerID=_localPeerID;
@property(readonly, nonatomic) NSString *exportingPeerID; // @synthesize exportingPeerID=_exportingPeerID;
@property(readonly, nonatomic) NSString *modelVersionHash; // @synthesize modelVersionHash=_modelVersionHash;
@property(retain, nonatomic) NSDate *transactionDate; // @synthesize transactionDate=_transactionDate;
@property(readonly, nonatomic) NSArray *storeNames;
- (id)storeSaveSnapshotForStore:(id)arg1;
- (id)storeSaveSnapshotForStoreName:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2;
- (id)initWithTransactionLog:(id)arg1;

@end

