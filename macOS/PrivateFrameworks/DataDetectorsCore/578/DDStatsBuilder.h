//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DDStatsBuilder : NSObject
{
    NSMutableDictionary *_knownParserStates;
}

- (id)allStates;
- (id)rootStates;
- (id)parserStateWithStateIndex:(long long)arg1;
- (void)handleState:(long long)arg1 withStack:(void *)arg2;
- (void)flush;
- (void)dealloc;
- (id)init;

@end

