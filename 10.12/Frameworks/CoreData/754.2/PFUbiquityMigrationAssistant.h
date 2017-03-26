//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityMigrationAssistant : NSObject
{
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
    NSString *_previousModelVersionHash;
    NSString *_currentModelVersionHash;
}

@property(readonly, nonatomic) NSString *currentModelVersionHash; // @synthesize currentModelVersionHash=_currentModelVersionHash;
@property(readonly, nonatomic) NSString *previousModelVersionHash; // @synthesize previousModelVersionHash=_previousModelVersionHash;
- (id)transactionLogLocationsForModelVersionHash:(id)arg1;
- (id)latestBaselineLocationSkipModelVersionHash:(id)arg1;
- (id)latestTransactionLogForModelVersionHash:(id)arg1;
- (BOOL)electPreviousModelVersionHashFromTransactionLogsError:(id *)arg1;
- (BOOL)canUseReceipts;
- (id)orderedReceipts;
- (id)transactionLogLocationsByModelVersionHash;
- (id)receiptLocations;
- (id)baselineLocationsByModelVersionHash;
- (void)_populateBaselineAndTransactionLogLocations;
- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)arg1 peerID:(id)arg2 ubiquityName:(id)arg3 modelVersionHash:(id)arg4;

@end

