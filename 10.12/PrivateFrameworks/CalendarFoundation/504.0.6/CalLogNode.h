//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CalLogFilter, NSMutableArray;
@protocol CalLogWriter, OS_dispatch_group, OS_dispatch_queue;

@interface CalLogNode : NSObject
{
    NSMutableArray *_subnodes;
    NSObject<OS_dispatch_group> *_dispatchGroup;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CalLogFilter *_filter;
    id <CalLogWriter> _writer;
    NSMutableArray *_accumulator;
    unsigned long long _accumulatorBufferSize;
}

@property(retain, nonatomic) id <CalLogWriter> writer; // @synthesize writer=_writer;
@property(nonatomic) unsigned long long accumulatorBufferSize; // @synthesize accumulatorBufferSize=_accumulatorBufferSize;
@property(retain, nonatomic) NSMutableArray *accumulator; // @synthesize accumulator=_accumulator;
@property(retain, nonatomic) CalLogFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) NSMutableArray *subnodes; // @synthesize subnodes=_subnodes;
- (void).cxx_destruct;
- (void)processEnvelope:(id)arg1;
- (int)minimumLevelOfNodeTree;
- (id)allSubnodes;
- (void)removeSubnode:(id)arg1;
- (void)addSubnode:(id)arg1;
- (BOOL)flush;
- (void)flushAccumulator;
- (void)clearAccumulator;
- (id)init;

@end

