//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface NFContainerPool : NSObject
{
    BOOL _objectGraphDrainingEnabled;
    NSMutableDictionary *_singletons;
    NSMutableDictionary *_graph;
    unsigned long long _depth;
    unsigned long long _drainDepth;
    NSMutableArray *_onDrainBlocks;
    NSMutableArray *_onDrainCopyPoolObjectGraphBlocks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *onDrainCopyPoolObjectGraphBlocks; // @synthesize onDrainCopyPoolObjectGraphBlocks=_onDrainCopyPoolObjectGraphBlocks;
@property(retain, nonatomic) NSMutableArray *onDrainBlocks; // @synthesize onDrainBlocks=_onDrainBlocks;
@property(nonatomic, getter=isObjectGraphDrainingEnabled) BOOL objectGraphDrainingEnabled; // @synthesize objectGraphDrainingEnabled=_objectGraphDrainingEnabled;
@property(nonatomic) unsigned long long drainDepth; // @synthesize drainDepth=_drainDepth;
@property(nonatomic) unsigned long long depth; // @synthesize depth=_depth;
@property(retain, nonatomic) NSMutableDictionary *graph; // @synthesize graph=_graph;
@property(retain, nonatomic) NSMutableDictionary *singletons; // @synthesize singletons=_singletons;
- (void)drain;
@property(readonly, nonatomic, getter=isPoolPreparedForLockingGraph) BOOL poolPreparedForLockingGraph;
- (void)linkDepth:(CDUnknownBlockType)arg1;
- (void)onDrainCopyPoolObjectGraph:(CDUnknownBlockType)arg1;
- (void)onDrain:(CDUnknownBlockType)arg1;
- (id)enter:(CDUnknownBlockType)arg1;
- (id)copyWithObjectGraphDrainingDisabled;
- (id)init;

@end

