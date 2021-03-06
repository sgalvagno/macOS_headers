//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface WFDispatchSourceTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (void)cancel;
- (void)start;
- (BOOL)isCancelled;
- (void)dealloc;
- (id)initWithInterval:(double)arg1 repeatIntervalInt:(unsigned long long)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 repeatInterval:(double)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

