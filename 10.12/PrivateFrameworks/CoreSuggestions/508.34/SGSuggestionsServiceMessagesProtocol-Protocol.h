//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CSSearchableItem, NSArray, NSString;
@protocol SGMessagesSuggestionsServiceDelegate;

@protocol SGSuggestionsServiceMessagesProtocol
@property __weak id <SGMessagesSuggestionsServiceDelegate> delegate;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 bundleIdentifier:(NSString *)arg2 options:(unsigned long long)arg3 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg4;
- (void)harvestedSuggestionsFromMessages:(NSArray *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg3;
- (void)harvestedSuggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *))arg3;
- (void)suggestionsFromMessage:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, NSArray *, NSArray *, NSArray *))arg3;
@end

