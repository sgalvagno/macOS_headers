//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

@class NSMapTable, NSMutableArray, SPCPath;

@interface SPCLayer : SPCObject
{
    SPCPath *_path;
    NSMutableArray *_effects;
    NSMapTable *_layerStorageByState;
    NSMapTable *_unmodifiedLayerStorageByState;
}

@property(retain, nonatomic) NSMapTable *unmodifiedLayerStorageByState; // @synthesize unmodifiedLayerStorageByState=_unmodifiedLayerStorageByState;
@property(retain, nonatomic) NSMapTable *layerStorageByState; // @synthesize layerStorageByState=_layerStorageByState;
@property(retain, nonatomic) NSMutableArray *effects; // @synthesize effects=_effects;
@property(retain, nonatomic) SPCPath *path; // @synthesize path=_path;
- (id)imageForState:(id)arg1;
- (void)addEffect:(id)arg1;
- (id)logicalPathToEnvironment;
- (void)removeEffect:(id)arg1 fromElementState:(id)arg2;
- (void)insertEffect:(id)arg1 forElementState:(id)arg2 atLocalIndex:(unsigned long long)arg3;
- (void)addEffect:(id)arg1 forElementState:(id)arg2;
- (id)effectsForElementState:(id)arg1 includeInherited:(BOOL)arg2;
- (id)elementStatesWithEffects;
- (void)layerStorageDidChange:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)layerStorageForElementState:(id)arg1;
- (id)pathAtIndexPath:(id)arg1;
- (void)dealloc;
- (id)recursiveDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end

