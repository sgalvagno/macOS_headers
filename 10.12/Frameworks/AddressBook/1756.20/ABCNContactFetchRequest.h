//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AddressBook/ABCNFetchRequest.h>

@class NSArray, NSPredicate;

@interface ABCNContactFetchRequest : ABCNFetchRequest
{
    NSPredicate *_predicate;
    NSArray *_keysToFetch;
    BOOL _unifyResults;
    BOOL _mutableObjects;
}

@property(nonatomic) BOOL mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(nonatomic) BOOL unifyResults; // @synthesize unifyResults=_unifyResults;
@property(copy, nonatomic) NSArray *keysToFetch; // @synthesize keysToFetch=_keysToFetch;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void)executeFetchWithDataMapper:(id)arg1 observer:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

