//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol INCacheableObject <NSObject>
+ (void)buildFromCachePayload:(NSDictionary *)arg1 identifier:(NSString *)arg2 completion:(void (^)(id))arg3;
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(void (^)(NSDictionary *))arg1;
@end

