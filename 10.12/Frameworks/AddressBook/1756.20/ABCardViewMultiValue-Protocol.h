//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/NSCopying-Protocol.h>
#import <AddressBook/NSMutableCopying-Protocol.h>
#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol ABCardViewMultiValue;

@protocol ABCardViewMultiValue <NSObject, NSCopying, NSMutableCopying>
- (id)suggestedValueAtIndex:(unsigned long long)arg1;
- (BOOL)isSuggestedIndex:(unsigned long long)arg1;
- (BOOL)isPrivateValueIndex:(unsigned long long)arg1;
- (BOOL)isDuplicateIndex:(unsigned long long)arg1;
- (BOOL)isReadOnlyIndex:(unsigned long long)arg1;
- (struct ABCardActionMultiValueIdentifier)cardActionIdentifierForMultiValueIdentifier:(NSString *)arg1;
- (BOOL)customLabelsSupportedAtIndex:(unsigned long long)arg1;
- (NSArray *)availableLabelsAtIndex:(unsigned long long)arg1;
- (NSArray *)availableLabels;
- (NSArray *)initialLabels;
- (NSArray *)labels;
- (NSString *)localizedLabelAtIndex:(unsigned long long)arg1;
- (NSString *)labelAtIndex:(unsigned long long)arg1;
- (NSString *)defaultLabel;
- (id <ABCardViewMultiValue>)multiValueByUpdatingWithBlock:(void (^)(id <ABCardViewMutableMultiValue>))arg1;
- (unsigned long long)indexOfValueForIdentifier:(NSString *)arg1;
- (NSArray *)identifiers;
- (NSString *)identifierAtIndex:(unsigned long long)arg1;
- (NSArray *)values;
- (BOOL)hasEmptyValue;
- (id)valueAtIndex:(unsigned long long)arg1;
- (BOOL)isValueEmptyAtIndex:(unsigned long long)arg1;
- (NSString *)key;
- (unsigned long long)count;
@end

