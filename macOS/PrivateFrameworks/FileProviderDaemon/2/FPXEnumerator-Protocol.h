//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSNumber;

@protocol FPXEnumerator <NSObject>
- (void)enumeratorBecameFrontmost:(BOOL)arg1 inWindow:(NSNumber *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)invalidate;
- (void)keepAliveConnectionForRegisteredObserver:(void (^)(void))arg1;
- (void)enumerateChangesFromToken:(NSData *)arg1 reply:(void (^)(NSArray *, NSArray *, BOOL, NSData *, NSError *))arg2;
- (void)enumerateItemsFromPage:(NSData *)arg1 reply:(void (^)(NSArray *, NSData *, NSData *, NSError *))arg2;
- (void)currentSyncAnchorWithCompletion:(void (^)(NSData *, NSError *))arg1;
@end

