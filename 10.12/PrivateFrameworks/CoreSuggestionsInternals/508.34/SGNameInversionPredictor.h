//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SGNameInversionPredictor : NSObject
{
    struct __CFDictionary *_tradToTrie;
    NSDictionary *_tradToInversionRate;
    double _confidenceThreshold;
}

+ (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2 underNamingTradition:(id)arg3;
- (double)inversionRateForNamingTradition:(id)arg1;
- (double)firstNameLikelihood:(id)arg1 underNamingTradition:(id)arg2 default:(double)arg3;
- (struct _CFBurstTrie *)getTrieForNamingTradition:(id)arg1;
- (float)decodeTriePayload:(unsigned int)arg1;
- (BOOL)shouldInvertFirst:(id)arg1 last:(id)arg2;
- (void)dealloc;
- (id)init;

@end

