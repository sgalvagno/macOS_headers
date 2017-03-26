//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <FMF/NSObject-Protocol.h>

@class CLLocation, FMFMapImageRequest;

@protocol FMFMapXPCInterface <NSObject>
- (oneway void)mapImageForLocation:(CLLocation *)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(void (^)(NSData *, NSError *))arg5;
- (oneway void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)gridImageForScreenRatio:(double)arg1 andCompletion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)mapImageForLocation:(CLLocation *)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 andCompletion:(void (^)(NSData *, NSError *))arg6;
- (oneway void)mapImageForRequest:(FMFMapImageRequest *)arg1 andCompletion:(void (^)(NSData *, NSError *))arg2;
- (oneway void)noLocationImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(void (^)(NSData *, NSError *))arg3;
- (oneway void)gridImageForWidth:(double)arg1 height:(double)arg2 andCompletion:(void (^)(NSData *, NSError *))arg3;
@end

