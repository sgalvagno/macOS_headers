//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreSpectrum/SPCObject.h>

#import <CoreSpectrum/NSCoding-Protocol.h>
#import <CoreSpectrum/NSCopying-Protocol.h>

@class NSArray, SPCElementStateStorage;

@interface SPCElementStateDefinition : SPCObject <NSCoding, NSCopying>
{
    SPCElementStateStorage *_stateStorage;
}

@property(retain) SPCElementStateStorage *stateStorage; // @synthesize stateStorage=_stateStorage;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)firstMatchingAttributeForValueNamed:(id)arg1;
- (id)firstMatchingAttributeForValueNamed:(id)arg1 fromAttributes:(id)arg2;
- (id)valueWithRenditionKeyInteger:(long long)arg1 forAttributeNamed:(id)arg2;
- (id)allStatesIncludingDefault:(BOOL)arg1;
- (void)_addAllPossibleStatesToArray:(id)arg1 fromAttributesArray:(id)arg2 baseState:(id)arg3 includeDefault:(BOOL)arg4;
- (void)removeValue:(id)arg1 forAttribute:(id)arg2;
- (void)addValueNamed:(id)arg1 forAttributeNamed:(id)arg2;
- (void)addValue:(id)arg1 forAttribute:(id)arg2;
- (id)valueNamed:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valuesForAttributeNamed:(id)arg1;
- (id)attributeNamed:(id)arg1;
@property(readonly, nonatomic) NSArray *attributes;
- (id)primaryState;
- (id)defaultState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2;

@end

