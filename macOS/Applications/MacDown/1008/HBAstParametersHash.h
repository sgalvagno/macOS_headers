//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HBAstNode.h"

@class NSMutableArray, NSMutableDictionary;

@interface HBAstParametersHash : HBAstNode
{
    NSMutableDictionary *_namedParameters;
    NSMutableArray *_orderedNamedParameterNames;
}

@property(retain, nonatomic) NSMutableArray *orderedNamedParameterNames; // @synthesize orderedNamedParameterNames=_orderedNamedParameterNames;
@property(retain, nonatomic) NSMutableDictionary *namedParameters; // @synthesize namedParameters=_namedParameters;
- (void)dealloc;
- (id)accept:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)appendNamedParameters:(id)arg1;
- (void)appendParameter:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) unsigned long long count;

@end

