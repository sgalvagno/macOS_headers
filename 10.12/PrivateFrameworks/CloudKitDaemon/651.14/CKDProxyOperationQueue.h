//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class CKDClientProxy;

__attribute__((visibility("hidden")))
@interface CKDProxyOperationQueue : NSOperationQueue
{
    CKDClientProxy *_proxy;
}

@property(nonatomic) __weak CKDClientProxy *proxy; // @synthesize proxy=_proxy;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (id)initWithProxy:(id)arg1;

@end

