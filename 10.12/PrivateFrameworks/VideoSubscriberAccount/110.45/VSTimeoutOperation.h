//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperation, NSOperationQueue;

@interface VSTimeoutOperation : VSAsyncOperation
{
    NSOperation *_operation;
    double _timeout;
    NSOperationQueue *_privateQueue;
}

@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(readonly, nonatomic) NSOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)cancel;
- (void)executionDidBegin;
- (id)initWithOperation:(id)arg1 timeout:(double)arg2;
- (id)init;

@end

