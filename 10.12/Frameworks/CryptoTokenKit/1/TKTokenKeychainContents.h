//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface TKTokenKeychainContents : NSObject
{
    NSMutableDictionary *_certificates;
    NSMutableDictionary *_keys;
    NSString *_tokenID;
}

@property(readonly, copy) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(readonly, copy) NSDictionary *keys; // @synthesize keys=_keys;
@property(readonly) NSString *tokenID; // @synthesize tokenID=_tokenID;
- (void).cxx_destruct;
- (id)certificateForKey:(id)arg1;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;
@property(readonly, copy) NSArray *items;
- (void)fillWithItems:(id)arg1;
- (id)initWithTokenID:(id)arg1;

@end

