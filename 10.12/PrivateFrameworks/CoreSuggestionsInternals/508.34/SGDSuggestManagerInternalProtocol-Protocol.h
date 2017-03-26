//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerInternalHarvestProtocol-Protocol.h>

@class NSArray, NSDate, NSString, SGRecordId;

@protocol SGDSuggestManagerInternalProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerInternalHarvestProtocol>
- (void)sleepWithCompletion:(void (^)(NSError *))arg1;
- (void)daemonExitWithCompletion:(void (^)(NSError *))arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(void (^)(NSError *))arg1;
- (void)drainQueueCompletelyWithCompletion:(void (^)(NSError *))arg1;
- (void)addInteractions:(NSArray *)arg1 bundleId:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
- (void)addSearchableItems:(NSArray *)arg1 completion:(void (^)(NSError *))arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)predictedToEmailAddressesWithToAddresses:(NSArray *)arg1 ccAddresses:(NSArray *)arg2 fromAddress:(NSString *)arg3 date:(double)arg4 bounds:(NSArray *)arg5 completion:(void (^)(NSArray *, NSError *))arg6;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)resetConfirmationAndRejectionHistory:(void (^)(NSError *))arg1;
- (void)sendRTCLogsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)eventFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGEvent *, NSError *))arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 prefix:(NSString *)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(void (^)(NSArray *, NSError *))arg6;
- (void)eventsStartingAt:(NSDate *)arg1 endingAt:(NSDate *)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(void (^)(NSArray *, NSError *))arg5;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
@end

