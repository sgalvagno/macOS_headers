//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _DPStringRandomizer;

@interface _DPStringRandomizer : NSObject
{
    id <_DPStringRandomizer> _randomizer;
    unsigned long long _algorithm;
}

+ (id)stringRandomizerWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 algorithmParameters:(id)arg3;
@property(readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) id <_DPStringRandomizer> randomizer; // @synthesize randomizer=_randomizer;
- (void).cxx_destruct;
- (id)description;
- (id)initWithEpsilon:(double)arg1 privatizationAlgorithm:(unsigned long long)arg2 algorithmParameters:(id)arg3;
- (id)init;

@end

