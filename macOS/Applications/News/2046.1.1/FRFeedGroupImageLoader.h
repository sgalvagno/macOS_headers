//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface FRFeedGroupImageLoader : NSObject
{
    NSMutableDictionary *_cache;
    NSMutableArray *_requestQueue;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableArray *requestQueue; // @synthesize requestQueue=_requestQueue;
@property(retain, nonatomic) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void).cxx_destruct;
- (void)onDemandAsyncRequestImageForRequest:(id)arg1;
- (void)processRequest:(id)arg1;
- (void)requestImageForStyle:(unsigned long long)arg1 tintColor:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)preloadImages;
- (id)init;

@end

