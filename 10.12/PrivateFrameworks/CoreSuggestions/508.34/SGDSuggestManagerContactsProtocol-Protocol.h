//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>

@class CNContact, NSArray, NSString, SGRecordId;

@protocol SGDSuggestManagerContactsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)originFromRecordId:(SGRecordId *)arg1 completion:(void (^)(SGOrigin *, NSError *))arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(SGContactMatchArrayOption *, NSError *))arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(SGContactMatchArrayOption *, NSError *))arg2;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(BOOL)arg3 withCompletion:(void (^)(NSArray *, NSError *))arg4;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)cnContactMatchesForRecordIds:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)cnContactMatchesForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)contactFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGContact *, NSError *))arg2;
- (void)contactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(NSNumber *, NSError *))arg2;
- (void)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
@end

